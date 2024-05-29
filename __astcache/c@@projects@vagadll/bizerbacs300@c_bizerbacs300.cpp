//---------------------------------------------------------------------------

#pragma hdrstop

#include "c_bizerbaCS300.h"
//#include "Connections.h"
extern  int GODINA;
//---------------------------------------------------------------------------
TBizerbaCS300::TBizerbaCS300 () : TVaga ()
{
//
}
TBizerbaCS300::TBizerbaCS300 (int idVage, int sifraMagacina) : TVaga (idVage, sifraMagacina)
{

//	cPort = new TApdComPort(NULL);
//	cPort->Baud = dmV->cdsVaga->FieldByName("Baud")->AsInteger;
//	cPort->ComNumber = dmV->cdsVaga->FieldByName("comport")->AsInteger;
//	cPort->Parity = dmV->cdsVaga->FieldByName("Parity")->AsInteger;
//	cPort->StopBits = dmV->cdsVaga->FieldByName("StopBits")->AsInteger;
//	cPort->DataBits = dmV->cdsVaga->FieldByName("DataBits")->AsInteger;
//	cPort->AutoOpen = true;

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
