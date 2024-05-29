//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "THelper.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(THelper *)
{
	new THelper(NULL);
}
//---------------------------------------------------------------------------
__fastcall THelper::THelper(TComponent* Owner)
	: TComponent(Owner)
{
}
//---------------------------------------------------------------------------
namespace Thelper
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(THelper)};
		RegisterComponents(L"BusComputers", classes, 0);
	}
}
//---------------------------------------------------------------------------

TRezultatOperacije<AnsiString> *THelper::ProcitajJSON(AnsiString sekcija, AnsiString kljuc,
	AnsiString fajl)
{
	if (!FileExists(fajl))
	{
		return new TRezultatOperacije<AnsiString>(false, "", "Fajl " + fajl + " nije pronadjen.");
	}
	try
	{
		std::unique_ptr<TStringStream> jsonStream(new TStringStream);
		jsonStream->LoadFromFile(fajl);
		TJSONObject *jsonReader = (TJSONObject*)TJSONObject::ParseJSONValue(jsonStream->DataString);
		TJSONObject *sekcijaJSON = (TJSONObject*)jsonReader->GetValue(sekcija);
		if (sekcijaJSON == nullptr)
		{
            delete jsonReader;
			jsonStream->Clear();
			return new TRezultatOperacije<AnsiString>(false, "", "Sekcija " + sekcija + " ne postoji u fajlu " + fajl);
		}

		TJSONValue *vrednost = sekcijaJSON->GetValue(kljuc);
		if (vrednost == nullptr)
		{
            delete jsonReader;
			jsonStream->Clear();
			return new TRezultatOperacije<AnsiString>(false, "", "Kljuc " + kljuc + " ne postoji unutar sekcije " + sekcija + " u fajlu " + fajl);
		}
		AnsiString temp = sekcijaJSON->GetValue(kljuc)->Value();
		delete jsonReader;
		jsonStream->Clear();
		return new TRezultatOperacije<AnsiString>(true, temp);

	}catch (Exception &ex)
	{
		return new TRezultatOperacije<AnsiString>(false, "", ex.Message);
	}catch (std::exception &ex)
	{
		return new TRezultatOperacije<AnsiString>(false, "", ex.what());
    }
}
//---------------------------------------------------------------------------
TRezultatOperacije<std::vector<AnsiString>> *THelper::ProcitajJSONNiz(AnsiString sekcija, AnsiString kljuc, AnsiString fajl)
{
	std::vector<AnsiString> rezultat;
	if (!FileExists(fajl))
	{
		return new TRezultatOperacije<std::vector<AnsiString>>(false, rezultat, "Fajl " + fajl + " nije pronadjen.");
	}
	try
	{
		std::unique_ptr<TStringStream> jsonStream(new TStringStream);
		jsonStream->LoadFromFile(fajl);
		TJSONObject *jsonReader = (TJSONObject*)TJSONObject::ParseJSONValue(jsonStream->DataString);
		TJSONObject *sekcijaJSON = (TJSONObject*)jsonReader->GetValue(sekcija);
		if (sekcijaJSON == nullptr)
		{
			delete jsonReader;
			jsonStream->Clear();
			return new TRezultatOperacije<std::vector<AnsiString>>(false, rezultat, "Sekcija " + sekcija + " ne postoji u fajlu " + fajl);
		}
		TJSONArray* nizJSON = (TJSONArray*)sekcijaJSON->GetValue(kljuc);
		int broj = nizJSON->Size();
		for (int indeks = 0; indeks < broj; indeks++)
		{
			rezultat.push_back(nizJSON->Get(indeks)->Value());
		}

		if (rezultat.size() > 0)
		{
			delete jsonReader;
			jsonStream->Clear();
			return new TRezultatOperacije<std::vector<AnsiString>>(true, rezultat);
		}else
		{
			delete jsonReader;
			jsonStream->Clear();
			return new TRezultatOperacije<std::vector<AnsiString>>(false, rezultat, "Nema elemenata u list, sekcija: " + sekcija +
				" kljuc: " + kljuc);
        }

	}catch (Exception &ex)
	{
		return new TRezultatOperacije<std::vector<AnsiString>>(false, rezultat, ex.Message);
	}catch (std::exception &ex)
	{
        return new TRezultatOperacije<std::vector<AnsiString>>(false, rezultat, ex.what());
    }
}

//---------------------------------------------------------------------------
UnicodeString THelper::TrenutniDatumCist()
{
	auto date = Now();
	return ReplaceStr(ReplaceStr(date.DateString(), "/","-"), ".", "-");
}
//---------------------------------------------------------------------------
TRezultatOperacije<bool> *THelper::PokreniProces(AnsiString putanja, AnsiString fajl)
{
	try
	{
		if (!FileExists(TPath::Combine(putanja, fajl)))
		{
			return new TRezultatOperacije<bool>(false, false);
		}
		PROCESS_INFORMATION procInfo;
		STARTUPINFO startInfo;

		memset(&procInfo, 0, sizeof(procInfo));
		memset(&startInfo, 0, sizeof(startInfo));

		startInfo.cb = sizeof(startInfo);
		UnicodeString fullPath = TPath::Combine(putanja, fajl);
		CreateProcess(fullPath.t_str(), nullptr, nullptr, nullptr, false,
			NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP,
			nullptr, UnicodeString(putanja).t_str(), &startInfo, &procInfo);
		return new TRezultatOperacije<bool>(true, true);
	}catch(...)
	{
		return new TRezultatOperacije<bool>(false, false);
    }
}
//---------------------------------------------------------------------------
TRezultatOperacije<bool> *THelper::UgasiProces(AnsiString naziv_programa)
{
	try
	{
		// Pronađi proces sa zadatim imenom
		HANDLE hProcess = NULL;
		DWORD dwProcessId = 0;
		UnicodeString processName = naziv_programa ;
		PROCESSENTRY32 pe32;
		pe32.dwSize = sizeof(PROCESSENTRY32);
		HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
		if (hSnapshot == INVALID_HANDLE_VALUE)
		{
			return new TRezultatOperacije<bool>(false, false);
		}
		if (Process32First(hSnapshot, &pe32))
		{
			do
			{
				if (processName.CompareIC(pe32.szExeFile) == 0)
				{
					dwProcessId = pe32.th32ProcessID;
					break;
				}
			}
			while (Process32Next(hSnapshot, &pe32));
		}
		CloseHandle(hSnapshot);

		// Ako je proces pronađen, otvori ručicu i ugasi ga
		if (dwProcessId != 0)
		{
			hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, dwProcessId);
			if (hProcess == NULL)
			{
				return new TRezultatOperacije<bool>(false, false);
			}
			if (!TerminateProcess(hProcess, 0))
			{
				CloseHandle(hProcess);
				return new TRezultatOperacije<bool>(false, false);
			}
			CloseHandle(hProcess);
			return new TRezultatOperacije<bool>(true, true);
		}
		else
		{
		// Ako proces nije pronađen, vrati false
			return new TRezultatOperacije<bool>(false, false);
		}
	}
	catch(...)
	{
		return new TRezultatOperacije<bool>(false, false);
	}
}
//---------------------------------------------------------------------------
TRezultatOperacije<int> *THelper::DohvatiProces(AnsiString naziv, ProcessHandle radnja)
{
	try
	{
		HANDLE hSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPALL, NULL);
		PROCESSENTRY32 pEntry;
		pEntry.dwSize = sizeof (pEntry);
		BOOL hRes = Process32First(hSnapShot, &pEntry);
		int count = 0;
		while (hRes)
		{
			if (CompareText(pEntry.szExeFile, naziv) == 0)
			{
				HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, 0,
											  (DWORD) pEntry.th32ProcessID);
				if (hProcess != NULL)
				{
					count++;
					if (radnja == phKill)
					{
						TerminateProcess(hProcess, 9);
					}
					CloseHandle(hProcess);
				}
			}
			hRes = Process32Next(hSnapShot, &pEntry);
		}
		CloseHandle(hSnapShot);
		return new TRezultatOperacije<int>(true, count);
	} catch (Exception &ex)
	{
		return new TRezultatOperacije<int>(false, 0, ex.Message);
	} catch (std::exception &stdex)
	{
		return new TRezultatOperacije<int>(false, 0, stdex.what());
    }
}
//---------------------------------------------------------------------------

std::unique_ptr<TRezultatOperacije<TFBBaza>> THelper::ProcitajIniFB(bool udaljena)
{
	return ProcitajIniFB(udaljena ? AnsiString("bat_2006") : AnsiString("BAZA2006"));
}

std::unique_ptr<TRezultatOperacije<TFBBaza>> THelper::ProcitajIniFB(AnsiString konekcija)
{
	auto fbRezultat = std::make_unique<TFBBaza>();
	try
	{
		UnicodeString cashITdir = ParamStr(1);
		if (cashITdir.IsEmpty())
		{
			AnsiString exeFile=Application->ExeName;
			cashITdir = ExtractFilePath(exeFile);
		}else
		{
			cashITdir.Delete(1, 2);
		}
		AnsiString dbx = "";
		AnsiString shared = TPath::Combine(TPath::GetSharedDocumentsPath(),
			"Embarcadero\\Studio\\dbExpress\\22.0");
		if (FileExists(TPath::Combine(shared, "dbxconnections.ini")))
		{
			dbx = TPath::Combine(shared, "dbxconnections.ini");
		}else if (FileExists(TPath::Combine(cashITdir, "dbxconnections.ini")))
		{
			dbx = TPath::Combine(cashITdir,"dbxconnections.ini");
		}else
		{
			return std::make_unique<TRezultatOperacije<TFBBaza>>(false, std::move(fbRezultat), "Ne postoji dbxconnections.ini!");
		}
		auto konekcijaFajl = new TIniFile(dbx);
		AnsiString baza = konekcijaFajl->ReadString(konekcija, "Database", "");
		if (baza.IsEmpty())
		{
			try
			{
				ifstream input(dbx.c_str());
				std::string line;
				bool nasaoKonekciju = false;
				if (input.is_open())
				{
					while (getline(input, line))
					{
						if (nasaoKonekciju && 
							line.rfind("Database", 0) == 0)
						{
							AnsiString db = AnsiString(line.c_str());
							baza = SplitString(db, "=")[1].Trim();
							break;
						}else if (line.find("[" + konekcija + "]") != std::string::npos)
						{
							nasaoKonekciju = true;
                        }
					}
				}
			}catch(...){}
			if (baza.IsEmpty()) 
			{
				delete konekcijaFajl;
				return std::make_unique<TRezultatOperacije<TFBBaza>>(false, std::move(fbRezultat),
					"Ne mogu da procitam podatke o " + konekcija + " iz dbxconnections.ini");
			}
		}

		fbRezultat->_lokacijaBaze = "";

		//1. da li je alias sam
		if (SplitString(baza, ":").Length == 1 &&
			SplitString(baza, "/").Length == 1 &&
			SplitString(baza, "\\").Length == 1)
		{
			fbRezultat->_nazivBaze = baza;
			delete konekcijaFajl;
			return std::make_unique<TRezultatOperacije<TFBBaza>>(true, std::move(fbRezultat));
		}
		//2. alias i host
		if (SplitString(baza, ":").Length == 2 &&
			SplitString(baza, "/").Length == 1 &&
			SplitString(baza, "\\").Length == 1)
		{
			auto hostsplit = SplitString(baza, ":");
			//2a. alias, host i port
			if (SplitString(hostsplit[0], "/").Length == 2)
			{
				auto hostPort = SplitString(hostsplit[0], "/");
				fbRezultat->_server = hostPort[0];
				fbRezultat->_port = hostPort[1];
			}else
			{
				fbRezultat->_server = hostsplit[0];
			}
			fbRezultat->_nazivBaze = hostsplit[1];
			fbRezultat->_lokacijaBaze = "";
			delete konekcijaFajl;
			return std::make_unique<TRezultatOperacije<TFBBaza>>(true, std::move(fbRezultat));
		}
		//3. nema host
		if ((SplitString(baza, ":").Length == 2 &&
			SplitString(baza, "\\").Length > 1) || //windows putanja
			SplitString(baza, ":").Length == 1)
		{
			auto dirSplit = SplitString(baza, "\\").Length > 0 ?
				SplitString(baza, "\\") :
				SplitString(baza, "/");

			fbRezultat->_nazivBaze = dirSplit[dirSplit.Length-1];

			char split = '\\';
			if (SplitString(baza, "/").Length > 1)
			{
				split =  '/';
				fbRezultat->_lokacijaBaze = "/";
			}

			for (int dex = 0; dex < dirSplit.Length-1; dex++)
			{
				fbRezultat->_lokacijaBaze = fbRezultat->_lokacijaBaze
					+ dirSplit[dex] + split;
			}
			delete konekcijaFajl;
			return std::make_unique<TRezultatOperacije<TFBBaza>>(true, std::move(fbRezultat));
		}

		//4. ima host
		if (SplitString(baza, ":").Length == 3 ||
			(SplitString(baza, ":").Length == 2 &&
			SplitString(baza, "/").Length > 1))
		{
			auto hostsplit = SplitString(baza, ":");
			//5a. putanja, host i port
			if (SplitString(hostsplit[0], "/").Length == 2)
			{
				auto hostPort = SplitString(hostsplit[0], "/");
				fbRezultat->_server = hostPort[0];
				fbRezultat->_port = hostPort[1];
			}else //5b. putanja i host
			{
				fbRezultat->_server = hostsplit[0];
			}

			auto temp = SplitString(baza, ":");
			auto putanja = temp.Length == 3 ?
				temp[1] + ':' + temp[2] :
				temp[1];

			auto dirSplit = SplitString(putanja, "\\").Length > 0 ?
				SplitString(putanja, "\\") :
				SplitString(putanja, "/");



			fbRezultat->_nazivBaze = dirSplit[dirSplit.Length-1];

			char split = '\\';
			if (SplitString(putanja, "/").Length > 1)
			{
				split =  '/';
				fbRezultat->_lokacijaBaze = "/";
			}
			for (int dex = 0; dex < dirSplit.Length-1; dex++)
			{
				fbRezultat->_lokacijaBaze = fbRezultat->_lokacijaBaze
					+ dirSplit[dex] + split;
			}
			delete konekcijaFajl;
			return std::make_unique<TRezultatOperacije<TFBBaza>>(true, std::move(fbRezultat));
		}

        delete konekcijaFajl;
		return std::make_unique<TRezultatOperacije<TFBBaza>>(false, std::move(fbRezultat),
			"Parsiranje dbx nije proslo ok za: " + baza);

	}catch (...)
	{
		return std::make_unique<TRezultatOperacije<TFBBaza>>(false, std::move(fbRezultat), "Problem u citanju konekcije");
	}


}
//---------------------------------------------------------------------------//---------------------------------------------------------------------------
TRezultatOperacije<TFDConnection*> *THelper::NapraviKonekciju(bool udaljeni)
{
	TFDConnection* conn = new TFDConnection(nullptr);
	auto nazivKonekcijeJSON = ProcitajJSON("FB", udaljeni ? "dbKonekcijaUdaljena" : "dbKonekcija");
	if (!nazivKonekcijeJSON->OperacijaUspela())
	{
		AnsiString greska = "Greska pri citanju konfiga1: " + nazivKonekcijeJSON->DohvatiGresku();
		return new TRezultatOperacije<TFDConnection*>(false, conn, greska);
	}

	AnsiString nazivKonekcije = nazivKonekcijeJSON->DohvatiRezultat();


	auto konekcijaIni = ProcitajIniFB(nazivKonekcije);  //izmena
	if (!konekcijaIni->OperacijaUspela())
	{
		AnsiString greska = "Greska pri citanju konfiga2: " + konekcijaIni->DohvatiGresku();
		delete nazivKonekcijeJSON;
		return new TRezultatOperacije<TFDConnection*>(false, conn, greska);
	}

	auto konekcija = konekcijaIni->DohvatiRezultat();
	try
	{
		conn->LoginPrompt = false;
		conn->DriverName = "FB";
		conn->Params->Add("Server=" + konekcija.ServerPun());
		conn->Params->Add("Database=" + konekcija.BazaPunNaziv());
		conn->Params->Add("User_name=" + konekcija._user);
		conn->Params->Add("Password=" + konekcija._password);
		delete nazivKonekcijeJSON;
		return new TRezultatOperacije<TFDConnection*>(true, conn, "");
	}catch (Exception &ex)
	{
		delete nazivKonekcijeJSON;
		return new TRezultatOperacije<TFDConnection*>(false, conn, ex.Message);
	}catch (std::exception &stdex)
	{
		delete nazivKonekcijeJSON;
		return new TRezultatOperacije<TFDConnection*>(false, conn, stdex.what());
	}

}
TRezultatOperacije<TSQLConnection*> *THelper::NapraviKonekcijuSQLConnection(bool udaljeni)
{
	TSQLConnection* conn = new TSQLConnection(nullptr);
	auto nazivKonekcijeJSON = ProcitajJSON("FB", udaljeni ? "dbKonekcijaUdaljena" : "dbKonekcija");
	if (!nazivKonekcijeJSON->OperacijaUspela())
	{
		AnsiString greska = "Greska pri citanju konfiga1: " + nazivKonekcijeJSON->DohvatiGresku();
		return new TRezultatOperacije<TSQLConnection*>(false, conn, greska);
	}

	AnsiString nazivKonekcije = nazivKonekcijeJSON->DohvatiRezultat();


	auto konekcijaIni = ProcitajIniFB(nazivKonekcije);  //izmena
	if (!konekcijaIni->OperacijaUspela())
	{
		AnsiString greska = "Greska pri citanju konfiga2: " + konekcijaIni->DohvatiGresku();
		delete nazivKonekcijeJSON;
		return new TRezultatOperacije<TSQLConnection*>(false, conn, greska);
	}

	auto konekcija = konekcijaIni->DohvatiRezultat();
	try
	{
		conn->LoginPrompt = false;
		conn->DriverName = "FIREBIRD";
		conn->Params->Add("Server=" + konekcija.ServerPun());
		conn->Params->Add("Database=" + konekcija.BazaPunNaziv());
		conn->Params->Add("User_name=" + konekcija._user);
		conn->Params->Add("Password=" + konekcija._password);
		delete nazivKonekcijeJSON;
		return new TRezultatOperacije<TSQLConnection*>(true, conn, "");
	}catch (Exception &ex)
	{
		delete nazivKonekcijeJSON;
		return new TRezultatOperacije<TSQLConnection*>(false, conn, ex.Message);
	}catch (std::exception &stdex)
	{
		delete nazivKonekcijeJSON;
		return new TRezultatOperacije<TSQLConnection*>(false, conn, stdex.what());
	}

}
//---------------------------------------------------------------------------
TRezultatOperacije<TCompInfo> *THelper::DohvatiHostInformacije()
{
	if (!_infoDohvatio)
	{
		try
		{
			auto connOp = NapraviKonekciju();
			if (!connOp->OperacijaUspela())
			{
				throw Exception(connOp->DohvatiGresku());
			}

			auto conn = connOp->DohvatiRezultat();
			TFDQuery *dbInfo = new TFDQuery(nullptr);
			dbInfo->Connection = conn;
			dbInfo->SQL->Text = "SELECT PIB FROM TBLHOST h";
			dbInfo->Open();
			AnsiString pib = dbInfo->FieldByName("PIB")->AsString;
			dbInfo->Close();

			dbInfo->SQL->Text = "SELECT MALOPRODAJA FROM VERZIJA";
			dbInfo->Open();
			AnsiString maloprodaja = dbInfo->FieldByName("MALOPRODAJA")->AsString;
			dbInfo->Close();
			delete conn;
			delete dbInfo;


			_compInfo._hostname = getenv("COMPUTERNAME");
			_compInfo._verzijaMP = maloprodaja;
			_compInfo._pib = pib;

			UnicodeString cashITdir = ParamStr(1);
			if (cashITdir.IsEmpty())
			{
				AnsiString exeFile=Application->ExeName;
				cashITdir = ExtractFilePath(exeFile);
			}else
			{
				cashITdir.Delete(1, 2);
			}

			AnsiString podesavanja = TPath::Combine(cashITdir, "podesavanje");
			if (!DirectoryExists(podesavanja))
			{
				ForceDirectories(podesavanja);
			}

			TIniFile *ini = new TIniFile(TPath::Combine(podesavanja, "settings.ini"));
			AnsiString guidTxt;
			if (ini->ValueExists("Generalno", "GUID"))
			{
				guidTxt = ini->ReadString("Generalno", "GUID", "");
			}else
			{
				TGUID guid;
				CreateGUID(guid);
				guidTxt = Sysutils::GUIDToString(guid);
				ini->WriteString("Generalno", "GUID", Sysutils::GUIDToString(guid));
			}
			_compInfo._uid = guidTxt;
			delete ini;
            _infoDohvatio = true;
		}catch (Exception &ex)
		{
			AnsiString greska = "Greska pri citanju iz baze: " + ex.Message;
			return new TRezultatOperacije<TCompInfo>(false, _compInfo, greska);
		}catch (std::exception &stdex)
		{
			AnsiString greska = "Greska pri citanju iz baze: " + AnsiString(stdex.what());
			return new TRezultatOperacije<TCompInfo>(false, _compInfo, greska);
		}
	}
	return new TRezultatOperacije<TCompInfo>(true, _compInfo);
}
//---------------------------------------------------------------------------

TRezultatOperacije<double> *THelper::PrazanProstor()
{
	__int64 prazanProstor = DiskFree(0);
	if (prazanProstor != -1)
	{
		double prazno = static_cast<double>(prazanProstor / (1024 * 1024 * 1024));
		return new TRezultatOperacije<double>(true, prazno);
	}
	return new TRezultatOperacije<double>(false, 0, "Greska pri citanju slobodnog prostora");
}
TRezultatOperacije<double> *THelper::VelicinaFajla(AnsiString fajl)
{
	struct stat st;
	if (stat(fajl.c_str(), &st) == 0)
	{
		double velicina = static_cast<double>(st.st_size) / (1024 * 1024 * 1024);
		return new TRezultatOperacije<double>(true, velicina);
	} else
	{
		return new TRezultatOperacije<double>(false, 0, "Greska pri citanju velicine fajla");
	}
}

TRezultatOperacije<AnsiString> *THelper::DeparametrizujUpit(TSQLDataSet *dataset)
{
	try
	{
		AnsiString upitUFulu = dataset->CommandText;
		for (int dex = 0; dex < dataset->Params->Count; dex++)
		{
			upitUFulu = StringReplace(AnsiString(upitUFulu),
				AnsiString(" :" + dataset->Params->Items[dex]->Name + " "),
				AnsiString(" " + dataset->Params->Items[dex]->AsString + " "),
				TReplaceFlags() << rfReplaceAll);
		}
		return new TRezultatOperacije<AnsiString>(true, upitUFulu);
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<AnsiString>(false, "", ex.Message);
	}catch(std::exception &stdex)
	{
		return new TRezultatOperacije<AnsiString>(false, "", stdex.what());
	}catch(...)
	{
		return new TRezultatOperacije<AnsiString>(false, "", "Nepoznada greska pri deparametrizaciji upita.");
    }
}

TRezultatOperacije<TJSONArray*> *THelper::RezultatJSON(TClientDataSet *upit)
{
	TJSONArray *niz = new TJSONArray();
	AnsiString greska = "";
	try
	{
		upit->Close();
		upit->Open();
		while(!upit->Eof)
		{
			TJSONObject *red = new TJSONObject();
			for (auto polje : upit->Fields )
			{
				switch (polje->DataType)
				{
					case ftInteger:
					case ftSmallint:
					case ftLargeint:
						red->AddPair(polje->FieldName, new TJSONNumber(polje->AsInteger));
						break;

					case ftFloat:
						red->AddPair(polje->FieldName, new TJSONNumber(polje->AsFloat));
						break;
					case ftBCD:
					case ftFMTBcd:
					{
						TBcd bcdValue = polje->AsBCD;
						Currency currValue;
						BCDToCurr(bcdValue, currValue);
						double dabl = static_cast<double>(currValue);
						red->AddPair(polje->FieldName, new TJSONNumber(dabl));
						break;
					}
					case ftDate:
					case ftTime:
					case ftDateTime:
					case ftTimeStamp:
						red->AddPair(polje->FieldName, new TJSONString(polje->AsString));
						break;

					case ftString:
						red->AddPair(polje->FieldName, new TJSONString(polje->AsString));
						break;

					default:
					{
						int fieldTypeInt = static_cast<int>(polje->DataType);
						String err = IntToStr(fieldTypeInt);
						throw Exception("Ne mogu da parsiram tip sa id-em: " + err);
						break;
					}
				}
			}
			niz->AddElement(red);
			upit->Next();
		}
		return new TRezultatOperacije<TJSONArray*>(true, niz);
	}catch(Exception &ex)
	{
		greska = "Greska pri prevodu cdsa u JSON: " + ex.Message;
	}catch (std::exception &stdex)
	{
		greska = "Greska pri prevodu cdsa u JSON: " + AnsiString(stdex.what());
	}catch(...)
	{
		greska = "Greska pri prevodu cdsa u JSON";
	}
	return new TRezultatOperacije<TJSONArray*>(false, niz, greska);

}

TRezultatOperacije<TJSONObject*> *THelper::PostAPI(AnsiString api, UnicodeString sadrzaj)
{
	TIdHTTP *http = new TIdHTTP(NULL);
	http->Request->ContentType = "application/json";
	http->Request->CharSet = "utf-8";
	bool uspeh = false;
	AnsiString greska = "";
	TJSONObject *jsonObject = nullptr;
	TStringStream *jsonStream = new TStringStream(sadrzaj);
	TStringStream *responseStream = new TStringStream(UnicodeString(""));
	try
	{
		AnsiString server = ProcitajJSON("udaljeno", "sinhroApi")->DohvatiRezultat();
		AnsiString port = ProcitajJSON("udaljeno", "sinhroApiPort")->DohvatiRezultat();

		AnsiString full = "http://" + ProcitajJSON("udaljeno", "sinhroApi")->DohvatiRezultat()
			+ ":" + ProcitajJSON("udaljeno", "sinhroApiPort")->DohvatiRezultat() + api;

		http->Post(full, jsonStream, responseStream);

		TJSONValue *jsonValue = TJSONObject::ParseJSONValue(responseStream->DataString);
		jsonObject = dynamic_cast<TJSONObject*>(jsonValue);

		if (jsonObject == nullptr)
		{
			jsonObject = new TJSONObject();
		}
		uspeh = true;
	}catch(Exception &ex)
	{
		greska = ex.Message;
	}catch (std::exception &stdex)
	{
		greska = stdex.what();
	}catch(...)
	{
		greska = "Greska pri slanju zahteva na Rest API";
	}
	delete http;
	delete jsonStream;
	delete responseStream;
	return new TRezultatOperacije<TJSONObject*>(uspeh, jsonObject, greska);
}

TRezultatOperacije<bool> *THelper::ProveraAPI()
{
	bool rezultat = false;
	bool uspeh = false;
	AnsiString greska = "";
	try
	{
		std::unique_ptr<TFDQuery> provera = std::make_unique<TFDQuery>(nullptr);
		provera->Connection = NapraviKonekciju()->DohvatiRezultat();
		provera->SQL->Text = "SELECT REST_API FROM TBLHOST";

		provera->Open();
		rezultat = provera->FieldByName("REST_API")->AsInteger == 1;
		provera->Close();

		provera->Unprepare();

		provera->SQL->Clear();
		provera->Params->Clear();

		provera->Connection->Close();
		provera->Close();

		delete provera->Connection;
		uspeh = true;
	}catch(Exception &ex)
	{
		greska = ex.Message;
	}catch (std::exception &stdex)
	{
		greska = stdex.what();
	}catch(...)
	{
		greska = "Greska pri proveri Rest API vrednosti u tblhost.";
	}
	return new TRezultatOperacije<bool>(uspeh, rezultat, greska);
}
