#include "Rifle.h"
#include <iomanip>


Rifle::Rifle() : m_burstCap(), m_caliber(), m_roundsLeft() {}
Rifle::Rifle(string make, string caliber, string sn, bool mode, int fullMag) : m_manufacturer(make),
m_caliber(caliber), m_sn(sn), m_burstCap(mode), m_capacity(fullMag), m_roundsLeft(0) {}

Rifle::~Rifle()
{
}
int Rifle::getCapacity() { return m_capacity; }
string Rifle::getSerialNumber() { return m_sn; }
void Rifle::setManufacturer(string man) { m_manufacturer = man; }
void Rifle::setCaliber(string caliber) { m_caliber = caliber; }
void Rifle::setSerialNumber(string sn) { m_sn = sn; }
int Rifle::setCapacity(int fullMag) { return roundsLoad = m_capacity = fullMag; }


string Rifle::ToString()
{
	stringstream ss;
	ss << "This is a " << m_manufacturer << " " << m_caliber << " rifle, serial number: " << m_sn << endl;
	return ss.str();
}
int Rifle::setBurstCap(bool mode)
{
	if (mode == false)
	{
		m_burstCap = 0;
	}
	else
	{
		m_burstCap = 1;
	}
	return m_burstCap;
}
string Rifle::status()
{
	stringstream ss;
	if (m_burstCap == 1)
	{
		ss << m_manufacturer << " is firing " << m_burstRate << " round burst with " << m_roundsLeft << " rounds currently remaining\n";
	}
	else
	{
		ss << m_manufacturer << "is not capable of burst mode with " << m_roundsLeft << " rounds currently remaining\n";
	}
	return ss.str();
}

int Rifle::Automatic(int roundsPerBurst)
{
	if (m_burstCap == 1)
	{
		m_burstRate = roundsPerBurst;
		return m_burstRate;
	}

	return m_burstRate;
}

string Rifle::firing(string fire, int rounds2shoot)
{
	stringstream ss;

	//m_roundsLeft = roundsLeft;
	int bRateleft = m_burstRate;
	cout << rounds2shoot <<" "<< bRateleft << endl;
	while (m_roundsLeft > 0 )
	{
			
		while (bRateleft > 0) {
			ss << "bang ";
			--m_roundsLeft;
			--rounds2shoot;
			--bRateleft;
		}
		ss << "\n";

		if (m_roundsLeft < 1)
		{
			ss << "click\n";
		}

	}


	return ss.str();
}

int Rifle::Reload(int capacity, int roundsLeft, int roundsLoaded)
{
	m_roundsLeft = m_capacity;
	return m_roundsLeft;
}

int Rifle::roundsRemaining()
{
	m_roundsLeft = m_capacity;
	return m_roundsLeft;
}

string Rifle::getManufacturer() { return m_manufacturer; }