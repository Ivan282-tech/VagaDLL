//---------------------------------------------------------------------------

#ifndef TFBBazaH
#define TFBBazaH
#include <System.Classes.hpp>
#include <System.IOUtils.hpp>
#include <StrUtils.hpp>
//---------------------------------------------------------------------------
class TFBBaza
{
	public:
		AnsiString _nazivBaze;
		AnsiString _lokacijaBaze;
		AnsiString _server = "localhost";
		AnsiString _port = "3050";
		AnsiString _user = "SYSDBA";
		AnsiString _password = "masterkey";
		AnsiString BazaPunNaziv()
		{
			if (Linux()) {
			   return  _lokacijaBaze + '/' +  _nazivBaze;
			}
			else
			{
				return TPath::Combine(_lokacijaBaze,  _nazivBaze);
			}
		}
		AnsiString ServerPun()
		{
			AnsiString server = CompareText(_server, "127.0.0.1") == 0 ?
				"localhost" : _server;
			return server + "/" + _port;
		}
		AnsiString ConnectionString()
		{
			return ServerPun() + ":" + BazaPunNaziv();
		}
		bool LokalnaBaza()
		{
			return CompareText(_server, "127.0.0.1") == 0 || CompareText(_server, "localhost") == 0;
		}
		bool Linux()
		{
            return !_lokacijaBaze.IsEmpty() && _lokacijaBaze[1] == '/';
        }
};
#endif
