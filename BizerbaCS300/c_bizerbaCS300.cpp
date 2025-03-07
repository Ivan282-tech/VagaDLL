//---------------------------------------------------------------------------

#pragma hdrstop

#include "c_bizerbaCS300.h"
#include "Paketi\Logger\TLogger.h"
#include <cctype>
//#include "Connections.h"
extern  int GODINA;
HANDLE handler;
//---------------------------------------------------------------------------
TBizerbaCS300::TBizerbaCS300 () : TVaga ()
{
//
}
TBizerbaCS300::TBizerbaCS300 (int idVage, int sifraMagacina) : TVaga (idVage, sifraMagacina)
{
	dmV->cdsVaga->Close();
	dmV->cdsVaga->Open();
	idVage =  dmV->cdsVaga->FieldByName("ID")->AsInteger;
	sifra_magacina   = dmV->cdsVaga->FieldByName("TIP_VAGE")->AsInteger;
	naziv =  dmV->cdsVaga->FieldByName("NAZIV_VAGE")->AsString;

	comport = dmV->cdsVaga->FieldByName("comport")->AsInteger;
	databits = dmV->cdsVaga->FieldByName("databits")->AsInteger;
	stopbits = dmV->cdsVaga->FieldByName("stopbits")->AsInteger;
	baud =  dmV->cdsVaga->FieldByName("baud")->AsInteger;
	parity =  dmV->cdsVaga->FieldByName("parity")->AsInteger;
}
//-----------------------------------------------------------------------------
void __fastcall TBizerbaCS300::adpStringPacket(TObject *Sender, AnsiString Data)
{
//	adp->Enabled = false;
//	CallBack(Data);
}
//-----------------------------------------------------------------------------
void __fastcall TBizerbaCS300::adpTimeout(TObject *Sender)
{
//	adp->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TBizerbaCS300::CallBack(AnsiString rezultat)
{
	//
//	const char enq = 0x05, dc1 = 0x11, ack = 0x06, can = 0x18;
//	if (rezultat == ack || rezultat == can) {
//	   PosaljiPodatke(dc1 ,9);
//	}
//	else if (Sysutils::StrLen(rezultat.c_str()) == 9) {
//		callbackVratiRezultat( IzracunajTezinu( rezultat ) );
//	}
//	else ErrorHand(rezultat);
}
//----------------------------------------------------------------------------
void __fastcall TBizerbaCS300::ErrorHand(AnsiString rezultat)
{
  //
//  ShowMessage("Greska: " + rezultat );
}
//-------------------------------------------------------------------------------
Currency TBizerbaCS300::procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina)
{



//	kol = 0;
//	try {
//		const char enq = 0x05;
////		cPort->Open = true;
//		adp = new TApdDataPacket(NULL);
//		adp->OnStringPacket = adpStringPacket;
//		adp->OnTimeout = adpTimeout;
//		callbackVratiRezultat = OnTezinaIzmerena;
//		PosaljiPodatke(enq ,1);
//	} catch (Exception& e) {
//		kol = -1;
//		ShowMessage(e.Message);
//		throw Exception("Neuspesno ocitavanje tezine!" + e.Message);
//	}
//	return kol;
   return 0;
}
AnsiString TBizerbaCS300::procitajTezinu()
{

	AnsiString  port = "COM" + IntToStr(comport);
	AnsiString rez;
	HANDLE hPort = CreateFileA(port.c_str(),
							   GENERIC_READ | GENERIC_WRITE,
							   0,
							   NULL,
							   OPEN_EXISTING,
							   FILE_ATTRIBUTE_NORMAL,
							   NULL);

	COMMTIMEOUTS timeouts;
	timeouts.ReadIntervalTimeout = 50;
	timeouts.ReadTotalTimeoutMultiplier = 10;
	timeouts.ReadTotalTimeoutConstant = 100;
	timeouts.WriteTotalTimeoutMultiplier = 10;
	timeouts.WriteTotalTimeoutConstant = 100;

	SetCommTimeouts(hPort, &timeouts);

	if (hPort == INVALID_HANDLE_VALUE) {
		ShowMessage("Ne mogu otvoriti serijski port.");
		return 0;
	}

	DCB dcbSerialParameters = {0};
	dcbSerialParameters.DCBlength = sizeof(dcbSerialParameters);
	if (!GetCommState(hPort, &dcbSerialParameters)) {
        ShowMessage("Gre�ka pri dobijanju stanja porta.");
        CloseHandle(hPort);
		return 0;
	}


	dcbSerialParameters.BaudRate = baud;
	dcbSerialParameters.ByteSize = databits;
	dcbSerialParameters.StopBits = stopbits;
	dcbSerialParameters.Parity = parity;

	if (!SetCommState(hPort, &dcbSerialParameters)) {
		ShowMessage("Gre�ka pri postavljanju stanja porta.");
		CloseHandle(hPort);
        return 0;
	}

    char data = 0x11;
	DWORD bytesWritten = 0;
	if (!WriteFile(hPort, &data, sizeof(data), &bytesWritten, nullptr)) {
		 ShowMessage("GRESKA!");
	}

	char buffer[100];
	DWORD bytesRead = 0;
	if (ReadFile(hPort, buffer, sizeof(buffer), &bytesRead, NULL)) {
		if(bytesRead > 0){
			AnsiString data(buffer, bytesRead);


			char* charData = data.c_str();

			for (int i = 0; charData[i] != '\0'; ++i) {
				if (isdigit(charData[i])) {
					rez += charData[i];
				}
			}
			rez = rez / 1000;
//			ShowMessage("Tezina: " + rez);
		} else{
			ShowMessage("Nista nije ucitano");
		}

	} else {
		ShowMessage("Gre�ka pri �itanju serijskih podataka.");
	}
	CloseHandle(hPort);
	return rez;
}
//-----------------------------------------------------------------------------
void __fastcall TBizerbaCS300::PosaljiPodatke(String data, int duzina_rezultata)
{
//	String  hex = data;
//	adp->ComPort = cPort;
//	adp->PacketSize = duzina_rezultata;
//	adp->EndCond << ecPacketSize;
//	adp->StartCond = scAnyData;
//	adp->Enabled = true;
//	adp->TimeOut = 1;
//	cPort->PutString( data );


}
//---------------------------------------------------------------------------
Currency __fastcall TBizerbaCS300::IzracunajTezinu( AnsiString Data )
{

//	String rcv = AnsiMidStr(Data,3,5);
//	Currency kolicina = 0;
//	for (int i=0; i< 5 ;i++)
//	{
//	  kolicina = kolicina +  pow(10,1-i) * StrToInt(rcv[i+1]) ;
//	}
//	kol = kolicina;
//	return kolicina;
    return 0;
}
//---------------------------------------------------------------------------
void __fastcall TBizerbaCS300::portPodaciDostupni(TObject *CP, WORD Count)
{
	 /*
	int broj = Count;
	char tmp;
	int i;
	String rcv;
	if (broj>1) {
		while (broj>1)
		{
		 tmp = cPort->GetChar();
		 rcv = rcv + tmp;
		 broj = broj-1;
		}
	}
	else {
		tmp = cPort->GetChar();
		rcv = rcv + tmp;
	}

	rcv = AnsiRightStr(rcv,6);
	Currency kolicina = 0;
	for (i=StrLen(rcv.c_str())-5; i< StrLen(rcv.c_str()) ;i++)
	{
//		cxMemo1->Lines->Add(  IntToStr(StrToInt(rcv[i])) + " - "  + IntToStr(i) + " - " + CurrToStr( pow(10,2-i) ) );
	  kolicina = kolicina +  pow(10,2-i) * StrToInt(rcv[i]) ;
	}
	if (kolicina > 0){
	  kol = kolicina;
	}

	Sleep(100);
	if (StrToInt(Count) > 1) {
		cPort->Open = false;
		ShowMessage("Tezina je: " + CurrToStr(kol));
	}
	*/
}
void TBizerbaCS300::ubaciSveArtikle(int sve)
{
// ova funkcija nema smisla za ovaj tip vage
}
#pragma package(smart_init)
