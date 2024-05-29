//---------------------------------------------------------------------------

#pragma hdrstop

#include "tools_log.h"
#include "Connections.h"
#include "IdGlobalProtocols.hpp" // FileSizeByName
#include "bus_DM.h"
#include "BUS_tools.h"
#include "BUS_DM_PRETRAGE.h"
#include "dir.h"

extern AnsiString APP_DIR;
extern int VELICINA_LOG_FAJLA;



//---------------------------------------------------------------------------
#pragma package(smart_init)
// ---------------------------------------------------------------------------
void UpisiUFile(AnsiString filename, AnsiString text, int pocetak, LoggingLevel nivo) {
	int utf;
	try {
		utf = StrToIntDef(DM->SC1->Params->Values["UTF8"], 0);
	}
	catch (...) {
		utf = 0;
	}
//	utf = 1;

	if (filename.IsEmpty()) {
		filename = LOG_FAJL;
	}

	TStringList* fajl = new TStringList();
	if (FileExists(filename)) {
		if (utf == 0)
			fajl->LoadFromFile(filename, TEncoding::Default);
		else
			fajl->LoadFromFile(filename, TEncoding::UTF8);
	}

  int greska = 0;
  try {
	  if (pocetak == 0) {
		fajl->Insert(0, text);
	  }
	  else
		fajl->Append(text);
  } catch (Exception& e) {
	Sleep(500);
	greska = 1;
	LogError(& e, " UpisiUFile ->Append");
  }

  try {
	  if (utf == 0)
		fajl->SaveToFile(filename, TEncoding::Default);
	  else
		fajl->SaveToFile(filename, TEncoding::UTF8);
  } catch (Exception& e) {
	Sleep(500);
	greska = 2;
	LogError(& e, " UpisiUFile ->Append");
  }


  if (greska == 2) {
	  if (FileExists(filename)) {
		  if (utf == 0)
			fajl->SaveToFile(filename, TEncoding::Default);
		  else
			fajl->SaveToFile(filename, TEncoding::UTF8);
	  }
  }
	//

	delete fajl;

}
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
void UpisiUDFile(AnsiString text, int pocetak, LoggingLevel nivo)
{
#ifdef _DEBUG

	if (FileExists(APP_DIR + "\\debug.txt"))
	{
		text += " - Radnik: " + DM->cdsR->FieldByName("radnik")->AsString;
		UpisiUFileU(LOG_FAJL + "D", text, pocetak);
	}
#endif

}

// ---------------------------------------------------------------------------
void UpisiUFileU(AnsiString filename, AnsiString text, int pocetak, LoggingLevel nivo)
{

	TLogger *logger = new TLogger(nullptr);
	logger->Log(text, nivo, filename);
	delete logger;

}

// ---------------------------------------------------------------------------
void UpisiULogFile(AnsiString filename, AnsiString text, int pocetak, LoggingLevel nivo)
{
	text += " - Radnik: " + DM->cdsR->FieldByName("radnik")->AsString;
	UpisiUFileU(filename, text, 0, nivo);
}

void LogReconcileError(TCustomClientDataSet* DataSet, EReconcileError* E, TUpdateKind UpdateKind, TReconcileAction& Action,
	AnsiString poruka, LoggingLevel nivo)
{
	ScreenCaptureJPG("frmMP.jpg");

	AnsiString greska = E->Message + " - Radnik: " + DM->cdsR->FieldByName("radnik")->AsString;
	AnsiString forma = DataSet->Owner->Name;
	try
	{
		if (GetFileSize(LOG_FAJL) > VELICINA_LOG_FAJLA)
		{
			if (FileExists(LOG_FAJL1))
			{
				DeleteFile(LOG_FAJL1);
			}
			log_send(DM->cdsSystem->FieldByName("MAIL_SEND_LOG")->AsString, DM->cdsR->FieldByName("RADNIK")->AsString, LOG_FAJL);
			RenameFile(LOG_FAJL, LOG_FAJL1);

		}
	}
	catch (Exception& e)
	{
		LogError(& e, " podesavanjeprograma3");
	}
	UpisiULogFile(LOG_FAJL, "-pocetak-", 2);
	UpisiULogFile(LOG_FAJL, poruka, 2);
	UpisiULogFile(LOG_FAJL, greska, 2);

	NamestiInsert( DataSet, DataSet->Name) ;

	if (DataSet->Active == true)
	{
		int broj_polja = DataSet->FieldCount;
		greska         = "";
		for (int i = 0; i < broj_polja; i++)
		{
			greska += DataSet->Fields->Fields[i]->FieldName + " = " +
				DataSet->Fields->Fields[i]->AsString + " ; ";

		}
		UpisiULogFile(LOG_FAJL, greska, 2);
		UpisiULogFile(LOG_FAJL, "-kraj-", 2);
	}
	PosaljiPoruku("Greska: " + E->Message);
	UpisiULogFile(LOG_FAJL, "Greska123: " + E->Message, 2);
}

// ---------------------------------------------------------------------------
void LogPostError(TDataSet* DataSet, EDatabaseError* E, TDataAction& Action, AnsiString poruka, LoggingLevel nivo)
{
	ScreenCaptureJPG("frmMP.jpg");

	AnsiString greska;
	TCustomClientDataSet* dataSet = dynamic_cast <TCustomClientDataSet*> (DataSet);
	greska                        = DateTimeToStr(Now()) + " - DataSet: " + dataSet->Name + " -Radnik: " + DM->cdsR->FieldByName("radnik")->AsString + " - Greska: " + E->Message;

	try
	{
		if (GetFileSize(LOG_FAJL) > VELICINA_LOG_FAJLA)
		{
			if (FileExists(LOG_FAJL1))
			{
				DeleteFile(LOG_FAJL1);
			}
			log_send(DM->cdsSystem->FieldByName("MAIL_SEND_LOG")->AsString, DM->cdsR->FieldByName("RADNIK")->AsString, LOG_FAJL);
			RenameFile(LOG_FAJL, LOG_FAJL1);

		}
	}
	catch (Exception& e)
	{
		LogError(& e, " podesavanjeprograma4");
	}

	NamestiInsert( dataSet, DataSet->Name) ;

	UpisiULogFile(LOG_FAJL, "-pocetak-", 2);
	UpisiULogFile(LOG_FAJL, poruka, 2);
	UpisiULogFile(LOG_FAJL, greska, 2);
	if (dataSet->Active == true)
	{
		int broj_polja = dataSet->FieldCount;
		greska         = "";
		for (int i = 0; i < broj_polja; i++)
		{
			greska += dataSet->Fields->Fields[i]->FieldName + " = " +
				dataSet->Fields->Fields[i]->AsString + " ; ";

		}
		UpisiULogFile(LOG_FAJL, greska, 2);
		UpisiULogFile(LOG_FAJL, "-kraj-", 2);
	}
	PosaljiPoruku("Greska: " + E->Message + " " + poruka);
	UpisiULogFile(LOG_FAJL, "Greska: " + E->Message, 2);
}

// ---------------------------------------------------------------------------
void LogError(TCustomClientDataSet* DataSet, Exception& E, AnsiString poruka, LoggingLevel nivo)
{
	ScreenCaptureJPG("frmMP.jpg");

	AnsiString greska;
	AnsiString forma = DataSet->Owner->Name;
	greska           = " - DataSet: " + DataSet->Name + " -Radnik: " + DM->cdsR->FieldByName("radnik")->AsString + " - Greska: " + E.Message;

	try
	{
		if (GetFileSize(LOG_FAJL) > VELICINA_LOG_FAJLA)
		{
			if (FileExists(LOG_FAJL1))
			{
				DeleteFile(LOG_FAJL1);
			}
			log_send(DM->cdsSystem->FieldByName("MAIL_SEND_LOG")->AsString, DM->cdsR->FieldByName("RADNIK")->AsString, LOG_FAJL);
			RenameFile(LOG_FAJL, LOG_FAJL1);

		}
	}
	catch (Exception& e)
	{
		LogError(& e, " podesavanjeprograma5");
	}

	UpisiULogFile(LOG_FAJL, "-pocetak-", 2);
	UpisiULogFile(LOG_FAJL, poruka, 2);
	UpisiULogFile(LOG_FAJL, greska, 2);
	NamestiInsert( DataSet, DataSet->Name) ;
	UpisiULogFile(LOG_FAJL, "-kraj-", 2);

//	if (DataSet->Active == true)
//	{
//		int broj_polja = DataSet->FieldCount;
//		greska         = "";
//
//		for (int i = 0; i < broj_polja; i++)
//		{
//			greska += DataSet->Fields->Fields[i]->FieldName + " = " +
//				DataSet->Fields->Fields[i]->AsString + " ; ";
//
//		}
//		UpisiULogFile(LOG_FAJL, greska, 2);
//		UpisiULogFile(LOG_FAJL, "-kraj-", 2);
//	}
	PosaljiPoruku("Greska: " + E.Message);
}

// ---------------------------------------------------------------------------
void LogError(TCustomClientDataSet* DataSet, Exception& E, AnsiString poruka, int posalji_poruku, LoggingLevel nivo)
{
	ScreenCaptureJPG("frmMP.jpg");

	AnsiString greska;
	AnsiString forma = DataSet->Owner->Name;
	greska           = "DataSet: " + DataSet->Name + " -Radnik: " + DM->cdsR->FieldByName("radnik")->AsString + " - Greska: " + E.Message;

	try
	{
		if (GetFileSize(LOG_FAJL) > 900)
		{
			if (FileExists(LOG_FAJL1))
			{
				DeleteFile(LOG_FAJL1);
			}
			log_send(DM->cdsSystem->FieldByName("MAIL_SEND_LOG")->AsString, DM->cdsR->FieldByName("RADNIK")->AsString, LOG_FAJL);
			RenameFile(LOG_FAJL, LOG_FAJL1);

		}
	}
	catch (Exception& e)
	{
		LogError(& e, " podesavanjeprograma6");
	}



	UpisiULogFile(LOG_FAJL, "-pocetak-", 2);
	UpisiULogFile(LOG_FAJL, poruka, 2);
	UpisiULogFile(LOG_FAJL, greska, 2);
	NamestiInsert( DataSet, DataSet->Name) ;
	UpisiULogFile(LOG_FAJL, "-kraj-", 2);


	if (posalji_poruku == 1)
	{
		PosaljiPoruku("Greska: " + E.Message);
	}

}

// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
void LogError(TCustomClientDataSet* DataSet, AnsiString poruka, int posalji_poruku, LoggingLevel nivo)
{
	ScreenCaptureJPG("frmMP.jpg");

	AnsiString greska;
	AnsiString forma = DataSet->Owner->Name;
	greska           = "DataSet: " + DataSet->Name + " -Radnik: " + DM->cdsR->FieldByName("radnik")->AsString + " - Greska: ";

	try
	{
		if (GetFileSize(LOG_FAJL) > VELICINA_LOG_FAJLA)
		{
			if (FileExists(LOG_FAJL1))
			{
				DeleteFile(LOG_FAJL1);
			}
			RenameFile(LOG_FAJL, LOG_FAJL1);

		}
	}
	catch (Exception& e)
	{
		LogError(& e, " podesavanjeprograma7");
	}



	UpisiULogFile(LOG_FAJL, "-pocetak-", 2);
	UpisiULogFile(LOG_FAJL, poruka, 2);
	UpisiULogFile(LOG_FAJL, greska, 2);
	NamestiInsert( DataSet, DataSet->Name) ;
	UpisiULogFile(LOG_FAJL, "-kraj-", 2);


	if (posalji_poruku == 1)
	{
		PosaljiPoruku("Greska: ");
	}

}

// ---------------------------------------------------------------------------
void LogError(Exception* E, AnsiString poruka, LoggingLevel nivo)
{
	ScreenCaptureJPG("frmMP.jpg");

	AnsiString greska;

	try
	{
		if (GetFileSize(LOG_FAJL) > VELICINA_LOG_FAJLA)
		{
			if (FileExists(LOG_FAJL1))
			{
				DeleteFile(LOG_FAJL1);
			}
			log_send(DM->cdsSystem->FieldByName("MAIL_SEND_LOG")->AsString, DM->cdsR->FieldByName("RADNIK")->AsString, LOG_FAJL);
			RenameFile(LOG_FAJL, LOG_FAJL1);

		}
	}
	catch (Exception& e)
	{
		LogError(& e, " podesavanjeprograma8");
	}

	greska = "Radnik: " + DM->cdsR->FieldByName("radnik")->AsString + " - Greska: " + E->Message;
	UpisiULogFile(LOG_FAJL, "-pocetak-", 2);
	UpisiULogFile(LOG_FAJL, poruka, 2);
	UpisiULogFile(LOG_FAJL, greska, 2);
	UpisiULogFile(LOG_FAJL, "-kraj-", 2);

	PosaljiPoruku("Greska: " + E->Message);
}
// ---------------------------------------------------------------------------
void LogError(Exception* E, AnsiString poruka, TComponent* Owner, LoggingLevel nivo)
{
	ScreenCaptureJPG("frmMP.jpg");

	AnsiString greska;

	try
	{
		if (GetFileSize(LOG_FAJL) > VELICINA_LOG_FAJLA)
		{
			if (FileExists(LOG_FAJL1))
			{
				DeleteFile(LOG_FAJL1);
			}
			log_send(DM->cdsSystem->FieldByName("MAIL_SEND_LOG")->AsString, DM->cdsR->FieldByName("RADNIK")->AsString, LOG_FAJL);
			RenameFile(LOG_FAJL, LOG_FAJL1);

		}
	}
	catch (Exception& e)
	{
		LogError(& e, " podesavanjeprograma8");
	}

	greska = "Radnik: " + DM->cdsR->FieldByName("radnik")->AsString + " - Greska: " + E->Message;
	UpisiULogFile(LOG_FAJL, "-pocetak-", 2);
	UpisiULogFile(LOG_FAJL, poruka, 2);
	UpisiULogFile(LOG_FAJL, greska, 2);
	UpisiULogFile(LOG_FAJL, "-kraj-", 2);

	PosaljiPoruku("Greska: " + E->Message);
}
// ---------------------------------------------------------------------------
void LogError(Exception* E, AnsiString poruka, int prikazi_poruku, LoggingLevel nivo)
{
	ScreenCaptureJPG("frmMP.jpg");

	AnsiString greska;

	try
	{
		if (GetFileSize(LOG_FAJL) > VELICINA_LOG_FAJLA)
		{
			if (FileExists(LOG_FAJL1))
			{
				DeleteFile(LOG_FAJL1);
			}
			log_send(DM->cdsSystem->FieldByName("MAIL_SEND_LOG")->AsString, DM->cdsR->FieldByName("RADNIK")->AsString, LOG_FAJL);
			RenameFile(LOG_FAJL, LOG_FAJL1);

		}
	}
	catch (Exception& e)
	{
		LogError(& e, " podesavanjeprograma8");
	}
	greska = "Radnik: " + DM->cdsR->FieldByName("radnik")->AsString + " - Greska: " + E->Message;
	UpisiULogFile(LOG_FAJL, "-pocetak-", 2);
	UpisiULogFile(LOG_FAJL, poruka, 2);
	UpisiULogFile(LOG_FAJL, greska, 2);
	UpisiULogFile(LOG_FAJL, "-kraj-", 2);
	if (prikazi_poruku == 1)
	{
		PosaljiPoruku("Greska: " + E->Message);
	}

}

// ---------------------------------------------------------------------------
void LogError(AnsiString greska1, AnsiString poruka, LoggingLevel nivo)
{
	ScreenCaptureJPG("frmMP.jpg");
	AnsiString greska;
	try
	{
		if (GetFileSize(LOG_FAJL) > VELICINA_LOG_FAJLA)
		{
			if (FileExists(LOG_FAJL1))
			{
				DeleteFile(LOG_FAJL1);
			}
			log_send(DM->cdsSystem->FieldByName("MAIL_SEND_LOG")->AsString, DM->cdsR->FieldByName("RADNIK")->AsString, LOG_FAJL);
			RenameFile(LOG_FAJL, LOG_FAJL1);

		}
	}
	catch (Exception& e)
	{
		LogError(& e, " podesavanjeprograma9");
	}
	greska = "Radnik: " + DM->cdsR->FieldByName("radnik")->AsString + " - Greska: " + greska1;
	UpisiULogFile(LOG_FAJL, "-pocetak-", 2);
	UpisiULogFile(LOG_FAJL, poruka, 2);
	UpisiULogFile(LOG_FAJL, greska1, 2);
	UpisiULogFile(LOG_FAJL, greska, 2);
	UpisiULogFile(LOG_FAJL, "-kraj-", 2);

	PosaljiPoruku("Greska: " + greska1);
}

// ---------------------------------------------------------------------------
int BrojFajlova(AnsiString putanja)
{

	TSearchRec SearchRec; // global variable
	int broj = 0;
	if (FindFirst(putanja, faAnyFile, SearchRec) == 0)
	{
		broj++;
	}

	while (FindNext(SearchRec) == 0)
	{
		broj++;
	}
	FindClose(SearchRec);
	return broj;
}
// ---------------------------------------------------------------------------

bool KonektujSeNaSMTP(TIdSMTP* IdSMTP1, String host, String username, String password, int port)
{

	IdSMTP1->Host     = host;
	IdSMTP1->Username = username;
	IdSMTP1->Password = password;
	IdSMTP1->Port     = port; // 587

	try
	{

		IdSMTP1->Authenticate();
		IdSMTP1->Connect();
		return true;

	}
	catch (Exception& e)
	{
		UpisiULogFile(LOG_FAJL,"bool KonektujSeNaSMTP Greska: "+ e.Message, 2);
//		UpisiULogFile(LOG_FAJL, __FUNCTION__ ";" + IntToStr(__LINE__) + ";" + "Nema;" + e.Message, 2);
		return false;
	}

}

// -------------------------
bool PosaljiMail(String send_to, String file, String subject, String radnik, String name_maila)
{

	if (send_to.IsEmpty())
	return false;

	try
	{

		TIdSMTP* IdSMTP1                                           = new TIdSMTP();
		TIdSSLIOHandlerSocketOpenSSL* IdSSLIOHandlerSocketOpenSSL1 = new TIdSSLIOHandlerSocketOpenSSL();
		IdSMTP1->IOHandler                                         = IdSSLIOHandlerSocketOpenSSL1;
		IdSMTP1->UseTLS                                            = utUseExplicitTLS;
		IdSMTP1->ConnectTimeout = 50;

		if (KonektujSeNaSMTP(IdSMTP1, DM->cdsSystem->FieldByName("MAIL_HOST")->AsString, DM->cdsSystem->FieldByName("MAIL_USER")->AsString,
			DM->cdsSystem->FieldByName("MAIL_PASSWORD")->AsString, DM->cdsSystem->FieldByName("MAIL_PORT")->AsInteger))
		{

			TIdMessage* msg    = new TIdMessage();
			msg->From->Address = send_to;
			msg->From->Name    = L"Cashit " + name_maila;
			msg->Subject       = L"" + subject;
			msg->Recipients->Add()->Address = send_to.Trim();
			msg->Body->Text = L"" + radnik;
			if (!file.IsEmpty())
			{
				//TIdAttachmentFile* attachment = new	/* defined but never used */
				//TIdAttachmentFile(msg->MessageParts, file);   Proveri
			}

			IdSMTP1->Send(msg);
			IdSMTP1->Disconnect(false);
			delete msg;
			return true;
		}
		else {

			UpisiULogFile(LOG_FAJL,u"Email nije poslat, proverite SMTP podešavanja. ", 2);
			return false;
		}

	}
	catch (Exception& e)
	{
		UpisiULogFile(LOG_FAJL,"bool PosaljiMail( Greska: "+ e.Message, 2);
		return false;
	//		UpisiULogFile(LOG_FAJL, __FUNCTION__ ";" + IntToStr(__LINE__) + ";" + "Nema;" + e.Message, 2);
//		ShowMessage("bool PosaljiMail Greška: " + e.Message);
	}
}

void log_send(String send_to, String radnik, AnsiString file)
{

	TIdSMTP* IdSMTP1                                           = new TIdSMTP();
	TIdSSLIOHandlerSocketOpenSSL* IdSSLIOHandlerSocketOpenSSL1 = new TIdSSLIOHandlerSocketOpenSSL();
	IdSMTP1->IOHandler                                         = IdSSLIOHandlerSocketOpenSSL1;
	IdSMTP1->UseTLS                                            = utUseExplicitTLS;

	DM_PRETRAGE->cdsMagacin->Close();
	DM_PRETRAGE->sdsMagacin->ParamByName("sifra")->AsInteger = DM->PodrazumevaniMagacin();
	DM_PRETRAGE->cdsMagacin->Open();
	String poruka = L"Log u prilogu ove poruke pib:" + DM->cdsHost->FieldByName("pib")->AsString;
	if (DM_PRETRAGE->cdsMagacin->RecordCount > 0)
	{
		poruka = poruka + " " + DM_PRETRAGE->cdsMagacin->FieldByName("magacin")->AsString;
	}

	PosaljiMail(send_to, L"" + file, poruka, L"" + radnik, L"log.");
}
//----------------------------------------------------------------------------
int ObrisiFajl(AnsiString filename, int vreme_cekanja)
{
  //brisanje fajla sa proverom greske

	int in = 0 ;
	int greska = 0;
	while ( in < vreme_cekanja) {

		try {
		   if (DeleteFile(filename) == true)
			in = vreme_cekanja + 1;
		} catch (...) {
			Sleep(10);
		}
		if (in == 200) {
		   PosaljiPoruku("Brisem fajl: " + filename + "\nMolim vas sacekajte.");
		}
		in++;
	}
	if (FileExists(filename)) {
	   greska = 1;
	}
    return greska;
}
//-----------------------------------------------------------------------
String WinBuildNumber()
{
	OSVERSIONINFO verwin;
	verwin.dwOSVersionInfoSize=sizeof(verwin);
	bool test;
	//Ne bi trebalo vise da se koristi
	//test=GetVersionEx(&verwin);
	//if(test)
   //	{
//
//	UpisiUFile(LOG_FAJL,"Major Version of Windows 		"+Sysutils::IntToStr((int)verwin.dwMajorVersion) ,2);
//	UpisiUFile(LOG_FAJL,"Minor Version of Windows 		"+Sysutils::IntToStr((int)verwin.dwMinorVersion),2);
//	UpisiUFile(LOG_FAJL,"Build Number  of Windows  		"+Sysutils::IntToStr((int)verwin.dwBuildNumber),2);
//	UpisiUFile(LOG_FAJL,"PlatformID    of Windows   		"+Sysutils::IntToStr((int)verwin.dwPlatformId),2);
	//		UpisiUFile(LOG_FAJL,verwin.szCSDVersion,"",2);
   //		return Sysutils::IntToStr((int)verwin.dwBuildNumber);

   //	}
	return "0";
}
//------------------------------------------------------------------------------
void checkDirectory(AnsiString dir) {

	try {

		if(!DirectoryExists(dir)) {

			ForceDirectories(dir);

		}


	} catch (Exception &e) {

		UpisiULogFile(LOG_FAJL, "Doslo je do greske kod kreiranja direktorijuma " + dir, 2);

		// log error
		throw Exception("Doslo je do greske kod kreiranja direktorijuma " + dir);

	}

}
//------------------------------------------------------------------------------
void checkDefaultDirectory()
{
	//proveri sve default direktorijume koji treba da postoje
	//ako ne postoje, kreira ih ...
	AnsiString podesavanje_kase = APP_DIR + "\\podesavanje\\podesavanje_kase.txt";
	AnsiString podesavanje_kase_stari = APP_DIR + "\\podesavanje_kase.txt";

	AnsiString podesavanje_programa = APP_DIR + "\\podesavanje\\podesavanje_programa.txt";
	AnsiString podesavanje_programa_stari = APP_DIR + "\\podesavanje_programa.txt";

	AnsiString log_fajl = APP_DIR + "\\Log\\CashIT\\CashIT.log" ;
	AnsiString log_fajl_stari =  APP_DIR + "\\CashIT.log" ;

	checkDirectory(APP_DIR + "\\recepti\\");
	checkDirectory(APP_DIR + "\\recepti\\odradjeni\\");
	checkDirectory(APP_DIR + "\\recepti\\snimljeni\\");

	checkDirectory(APP_DIR + "\\recepti\\");
	checkDirectory(APP_DIR + "\\Log\\CashIT\\");
	checkDirectory(APP_DIR + "\\debug\\");
	checkDirectory(APP_DIR + "\\podesavanje\\");

	if (FileExists(podesavanje_kase_stari))
	{
		if (!CopyFileTo(podesavanje_kase_stari, podesavanje_kase))
		{
			UpisiULogFile(LOG_FAJL, "Neuspelo snimanje!!! " + podesavanje_kase_stari, 2);
		}
		else {
			if (FileExists(podesavanje_kase_stari))
				DeleteFile(podesavanje_kase_stari);
		}
    }

	if (FileExists(podesavanje_programa_stari))
	{
		if (!CopyFileTo(podesavanje_programa_stari, podesavanje_programa))
		{
			UpisiULogFile(LOG_FAJL, "Neuspelo snimanje!!! " + podesavanje_programa_stari, 2);
		}
		else {
			if (FileExists(podesavanje_programa_stari))
				DeleteFile(podesavanje_programa_stari);
		}
	}

	if (FileExists(log_fajl_stari))
	{
		if (!CopyFileTo(log_fajl_stari, log_fajl))
		{
			UpisiULogFile(LOG_FAJL, "Neuspelo snimanje!!! " + log_fajl_stari, 2);
		}
		else {
			if (FileExists(log_fajl_stari))
				DeleteFile(log_fajl_stari);
		}
	}

}

bool DaLiPostojiFajl(String putanja, int cekaj)
{
	// komanda koja ce da ceka odredjeni broj vremena da se pojavi fajl
	bool postoji = false;
	while (cekaj > 0) {
		if (FileExists(putanja)) {
			cekaj = -1;
			postoji = true;
		}
		cekaj = cekaj - 1;
		Sleep(100);
	}
	return postoji;

}

void NamestiInsert( TCustomClientDataSet *DataSet, AnsiString imeTabele)
{
  //
	AnsiString formatDatuma = FormatSettings.ShortDateFormat;
	FormatSettings.ShortDateFormat = "mm/dd/yyyy";
	if (DataSet->Active == true)
	{
		int broj_polja = DataSet->FieldCount;
		int  broj_rekorda = DataSet->RecordCount;
		AnsiString insert1;
		AnsiString insert2;

//		DataSet->First();

	  while( !DataSet->Eof ) {
		insert1 = "(";
		insert2 = "VALUES (";
		for (int i = 0; i < broj_polja; i++)
		{
			if (DataSet->Fields->Fields[i]->ProviderFlags.Contains(pfInUpdate) )
			{
				insert1 = insert1 + DataSet->Fields->Fields[i]->FieldName;
				if (i <broj_polja-1) {
					insert1 = insert1 + ",";
				}
			}
			if (i == broj_polja-1) {
				insert1 = insert1 + ")";
			}

			if (DataSet->Fields->Fields[i]->ProviderFlags.Contains(pfInUpdate) )
			{
				if ( DataSet->Fields->Fields[i]->DataType == ftString ||
					 DataSet->Fields->Fields[i]->DataType == ftTimeStamp ||
					 DataSet->Fields->Fields[i]->DataType == ftDate )
				{

					if (DataSet->Fields->Fields[i]->IsNull) {
						insert2 = insert2 + "NULL";
					}
					else  {
						insert2 = insert2 + "'" + DataSet->Fields->Fields[i]->AsString + "'";
					}
					if (i <broj_polja-1) {
						insert2 = insert2 + ",";
					}
				}
				else {

					if (DataSet->Fields->Fields[i]->IsNull) {
						insert2 = insert2 + "NULL";
					}
					else {
						insert2 = insert2 +  DataSet->Fields->Fields[i]->AsString ;
					}

					if (i <broj_polja-1) {
						insert2 = insert2 + ",";
					}


				}
			}
			if (i == broj_polja-1) {
				insert2 = insert2 + ");";
			}

		}
		UpisiULogFile(LOG_FAJL, "Greska u insertu u tabelu " + imeTabele + " pogledajte log fajl:" + LOG_FAJL + "Insert", 2);
		UpisiULogFile(LOG_FAJL + "Insert", "INSERT INTO " + imeTabele, 2);
		UpisiULogFile(LOG_FAJL + "Insert", insert1, 2);
		UpisiULogFile(LOG_FAJL + "Insert", insert2, 2);
		insert1 = ""; insert2 = "";
		broj_rekorda--;
		DataSet->Next();
	  }
	}
	FormatSettings.ShortDateFormat = formatDatuma;
}
