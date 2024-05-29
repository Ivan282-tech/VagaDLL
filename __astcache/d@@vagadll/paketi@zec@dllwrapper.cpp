//---------------------------------------------------------------------------

#pragma hdrstop
#include "DllWrapper.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

DllWrapper::DllWrapper()
{
	UnicodeString dll = "RabbitWrap.dll";
	hDLL = LoadLibrary(dll.t_str());
	Diskonekcija = (NoParamsFunc)GetProcAddress(hDLL, "Disconnect");
	PosaljiPorukuBrzo = (SendMsgQ)GetProcAddress(hDLL, "QuickSendMessageMQ");
	PotvrdiPrijem = (AckMsg)GetProcAddress(hDLL, "AckMessageMQ");
	StatusSoketa = (SocketStatusFunc)GetProcAddress(hDLL, "GetSocketStatus");
	ProveraKanala = (IsConsumingCheck)GetProcAddress(hDLL, "IsConsuming");

	AdminKonekcija = GetProcAddress(hDLL, "AdminConnect");
	Konekcija = GetProcAddress(hDLL, "Connect");
	EventPoruka = GetProcAddress(hDLL, "ReadMessageMQ");
	NapraviPrijemneRazmene = GetProcAddress(hDLL, "DeclareRcvExchange");
	PosaljiPoruku = GetProcAddress(hDLL, "SendMessageMQ");
}

DllWrapper::~DllWrapper()
{
    FreeLibrary(hDLL);
}
