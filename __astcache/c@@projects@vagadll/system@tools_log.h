#ifndef tools_logH
#define tools_logH

#include <DBClient.hpp>
#include <Dialogs.hpp>
#include <DB.hpp>
#include <FMTBcd.hpp>
#include <SqlExpr.hpp>
#include <msxmldom.hpp>
#include <XMLDoc.hpp>
#include <msxmldom.hpp>
#include <xmldom.hpp>
#include <XMLIntf.hpp>
#include <IdSMTP.hpp>
#include <IdSMTPBase.hpp>
#include "Paketi/Logger/TLogger.h"
#include "Paketi/Helper/Enumeratori.h"

extern AnsiString LOG_FAJL;
extern AnsiString LOG_FAJL1;

void UpisiUFile(AnsiString filename, AnsiString text,int pocetak = 2, LoggingLevel nivo = llCritical);
void UpisiUDFile( AnsiString text,int pocetak = 2, LoggingLevel nivo = llCritical);
void UpisiUFileU(AnsiString filename, AnsiString text,int pocetak = 2, LoggingLevel nivo = llCritical);
void UpisiULogFile(AnsiString filename, AnsiString text,int pocetak = 2, LoggingLevel nivo = llCritical);
void LogReconcileError(TCustomClientDataSet *DataSet, EReconcileError *E, TUpdateKind UpdateKind,
	TReconcileAction &Action, AnsiString poruka, LoggingLevel nivo = llCritical);
void LogPostError(TDataSet *DataSet, EDatabaseError *E,  TDataAction &Action, AnsiString poruka, LoggingLevel nivo = llCritical);
void LogError(TCustomClientDataSet *DataSet ,Exception &E, AnsiString poruka, int prikazi_poruku, LoggingLevel nivo = llCritical);
void LogError(TCustomClientDataSet *DataSet , AnsiString poruka, int prikazi_poruku, LoggingLevel nivo = llCritical);
void LogError(TCustomClientDataSet *DataSet ,Exception &E, AnsiString poruka, LoggingLevel nivo = llCritical);
void LogError(Exception *E, AnsiString poruka, LoggingLevel nivo = llCritical);
void LogError(Exception* E, AnsiString poruka, TComponent* Owner, LoggingLevel nivo = llCritical);
void LogError(Exception *E, AnsiString poruka, int prikazi_poruku, LoggingLevel nivo = llCritical);
void LogError(AnsiString greska1, AnsiString poruka, LoggingLevel nivo = llCritical);
void log_send(String send_to,String radnik,AnsiString file_name);

int BrojFajlova(AnsiString putanja);
int ObrisiFajl(AnsiString fajlname, int vreme_cekanja);
void checkDirectory(AnsiString dir);
void checkDefaultDirectory();
bool DaLiPostojiFajl(String putanja, int cekaj);

bool PosaljiMail(String send_to,String file,String subject,String radnik,String mail_name);
bool KonektujSeNaSMTP(TIdSMTP *IdSMTP1,String host, String username, String password, int port,String name_maila);

void NamestiInsert( TCustomClientDataSet *DataSet, AnsiString imeTabele);
AnsiString BezNasihSlova( String tekst );
String WinBuildNumber();

#endif
