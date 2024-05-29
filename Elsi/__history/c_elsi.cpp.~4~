//---------------------------------------------------------------------------
#include "c_elsi.h"
#pragma hdrstop


extern int GODINA;
//---------------------------------------------------------------------------
TElsi::TElsi () : TVaga ()
{
//
}
TElsi::TElsi (int idVage, int sifraMagacina) : TVaga (idVage, sifraMagacina)
{
//
//	cPort = new TApdComPort(NULL);
//	cPort->Baud = dmV->cdsVaga->FieldByName("Baud")->AsInteger;
//	cPort->ComNumber = dmV->cdsVaga->FieldByName("comport")->AsInteger;
//	cPort->Parity = dmV->cdsVaga->FieldByName("Parity")->AsInteger;
//	cPort->StopBits = dmV->cdsVaga->FieldByName("StopBits")->AsInteger;
//	cPort->DataBits = dmV->cdsVaga->FieldByName("DataBits")->AsInteger;
//	cPort->AutoOpen = true;

//  cPort->Parity: pEven :0, pMark :1, pNone :2, pOdd :3, pSpace :4

}
//-----------------------------------------------------------------------------
void __fastcall TElsi::adpStringPacket(TObject *Sender, AnsiString Data)
{
//	adp->Enabled = false;
	CallBack(Data);
}
//-----------------------------------------------------------------------------
void __fastcall TElsi::adpTimeout(TObject *Sender)
{
//	adp->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TElsi::CallBack(AnsiString rezultat)
{
	//
	const char enq = 0x05, dc1 = 0x11, ack = 0x06, can = 0x18;
	if (rezultat == ack || rezultat == can) {
//	   PosaljiPodatke(dc1 ,9);
	}
	else if (Sysutils::StrLen(rezultat.c_str()) == 10) {
		callbackVratiRezultat( IzracunajTezinu( rezultat ) );
	}
	else ErrorHand(rezultat);
}
//----------------------------------------------------------------------------
void __fastcall TElsi::ErrorHand(AnsiString rezultat)
{
  //
  ShowMessage("Greska: " + rezultat );
}
//-------------------------------------------------------------------------------
Currency TElsi::procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina)
{
	kol = 0;
	try {
//		adp = new TApdDataPacket(NULL);
//		adp->OnStringPacket = adpStringPacket;
//		adp->OnTimeout = adpTimeout;
//		callbackVratiRezultat = OnTezinaIzmerena;
//		adp->StartString = "WNk ";
//		adp->StartCond = scString;
//		adp->EndCond << ecPacketSize;
////   		 typedef Set<TPacketEndCond, ecString, ecPacketSize> TPacketEndSet;.
//		adp->PacketSize = 10;
//		adp->TimeOut = 1000;
//		adp->ComPort = cPort;
//		adp->AutoEnable = true;
//		adp->Enabled = true;
//
//		if (cPort->Open != true) {
//        	cPort->Open = true;
//		}

	} catch (Exception& e) {
		kol = -1;
		ShowMessage(e.Message);
		throw Exception("Neuspesno ocitavanje tezine!" + e.Message);
	}
	return kol;

}
//-----------------------------------------------------------------------------
void __fastcall TElsi::PosaljiPodatke(String data, int duzina_rezultata)
{
//
}
//---------------------------------------------------------------------------
Currency __fastcall TElsi::IzracunajTezinu( AnsiString Data )
{

	String rcv = AnsiMidStr(Data,5,10);
	Currency kolicina = StrToCurrDef(rcv, 0);
//	adp->Enabled = false;
//	adp->ComPort = NULL;
//	cPort->AutoOpen = false;
//	cPort->CleanupInstance() ;
//	cPort->DonePort();
	return kolicina;
}
//---------------------------------------------------------------------------
void __fastcall TElsi::portPodaciDostupni(TObject *CP, WORD Count)
{
//
}
void TElsi::ubaciSveArtikle(int sve)
{
// ova funkcija nema smisla za ovaj tip vage
}
#pragma package(smart_init)
