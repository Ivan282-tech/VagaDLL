//---------------------------------------------------------------------------

#ifndef DllWrapperH
#define DllWrapperH
#pragma once
#include <System.Classes.hpp>
#include <Windows.h>
#include <string>
#include <functional>
#include <map>
#include <System.Threading.hpp>
#include "Paketi\Helper\THelper.h"

typedef void (*NoParamsFunc)();
typedef void (CallbackStatus)(bool, const char*);
typedef void (*IsConsumingCheck)(const char*, CallbackStatus);
typedef bool (*SocketStatusFunc)();
typedef const char* (*ConnectFunc)(NoParamsFunc, NoParamsFunc, const char*, const char*, const char*, int, int);
typedef void (*SendMsg)(const char*, const char*, const char* const [], const char* const [], CallbackStatus, bool, const char*);
typedef void (*SendMsgQ)(const char*, const char*, const char* const [], const char* const []);
typedef void (*RcvMsgExternal) (std::map<AnsiString, AnsiString>, const char*, int);
typedef void (*RcvMsgInternal) (const char**, const char**, const char*, int);
typedef void (*AckMsg) (int);
typedef void (*SubscribeChn)(RcvMsgInternal, const char*);
typedef void (*AdminConnect)(const char*, RcvMsgInternal);
typedef void (*DecExch)(NoParamsFunc, const char*, const char*);

class DllWrapper
{
	public:
		FARPROC Konekcija;
		FARPROC EventPoruka;
		FARPROC NapraviPrijemneRazmene;
		FARPROC PosaljiPoruku;
		FARPROC AdminKonekcija;

		SocketStatusFunc StatusSoketa;
		NoParamsFunc Diskonekcija;
		SendMsgQ PosaljiPorukuBrzo;
		AckMsg PotvrdiPrijem;
		RcvMsgExternal PoPrijemu;
        IsConsumingCheck ProveraKanala;

		bool _rdy = false;
		bool _stop = false;
		AnsiString _uid = "";
		bool _server = false;
		int _paralelnoPoruka = 1;
		AnsiString _logRed = "";
		AnsiString _busRed = "";
		THelper* _helper = new THelper(nullptr);
		NoParamsFunc _rekonekcija;

		DllWrapper();
		~DllWrapper();
	private:
        HINSTANCE hDLL;
};

#endif
