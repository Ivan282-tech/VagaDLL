//---------------------------------------------------------------------------

#pragma hdrstop

#include "TPingLog.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void TPingLog::DodajPing(unsigned int rt)
{
	if (rt < _min)
	{
		_min = rt;
	}
	if (rt > _max)
	{
        _max = rt;
	}
	_pingovi.push_back(rt);
	_sent++;
}
int TPingLog::BrojPingova()
{
    return _sent;
}
void TPingLog::DodajNeuspeli()
{
	_sent++;
}
int TPingLog::SrednjiRoundTrip()
{
	if (_sent == 0 || _pingovi.size() == 0)
	{
		_logger->Log("Nema izvrsenih pingova", llCritical);
		throw std::runtime_error("Nema izvrsenih pingova");
	}
	return _pingovi.size()/std::accumulate(_pingovi.begin(), _pingovi.end(), 0);
}
bool TPingLog::KatastrofalnaGreska()
{
    return _pingovi.size() == 0;
}

int TPingLog::MaxRoundTrip()
{
	return _max;
}
int TPingLog::MinRoundTrip()
{
	return _min;
}

int TPingLog::ProcenatIzgubljenih()
{
	if (_sent == 0)
	{
		_logger->Log("Nema izvrsenih pingova", llCritical);
		throw std::runtime_error("Nema izvrsenih pingova");
	}else if (_pingovi.size() == 0)
	{
		return 100;
	}else if(_pingovi.size() == _sent)
	{
		return 0;
	}else
	{
		return int((float(_sent)/_pingovi.size())*100);
	}
}
