//---------------------------------------------------------------------------

#ifndef TPingLogH
#define TPingLogH
#include <numeric>
#include <vector>
#include "Paketi\Logger\TLogger.h"

class TPingLog
{
	private:
        TLogger *_logger = new TLogger(nullptr);
		std::vector<unsigned int> _pingovi;
		int _sent = 0;
		int _min = 999999;
		int _max = 0;

	public:
		void DodajPing(unsigned int rt);
		void DodajNeuspeli();
        bool KatastrofalnaGreska();
		int MaxRoundTrip();
		int MinRoundTrip();
		int SrednjiRoundTrip();
		int ProcenatIzgubljenih();
		int BrojPingova();
};

#endif
