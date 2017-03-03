#include "Rifle.h"
//
//string buildRifle()

string fire(int rounds, int burst, int shotsToBeFired);

void main()
{
	Rifle blank;
	Rifle colt("Colt", "5.56mm", "RCOLT-0001", 1, 20);
	Rifle rugar("Rugar", ".22", "R22-0001", 0, 10);
	string manufacturer;
	int rounds, burst, shotsToBeFires;
	/*int capacity;*/

	/*This is a rifle...*/
	cout << blank.ToString();
	cout << colt.ToString();
	cout << rugar.ToString();
	cin.get(), cin.get();
	/*end*/


	/*SN, [roundsPerBurst]*/
	colt.Automatic(1);
	cout << colt.status();
	cout << rugar.status();
	cin.get(), cin.get();
	cout << "Loading weapons....\n";
	/*end*/
	cin.get(), cin.get();


	/*loading*/
	cout << colt.getSerialNumber() << ": " << colt.getCapacity() << " rounds loaded\n";
	cout << rugar.getSerialNumber() << ": " << rugar.getCapacity() << " rounds loaded\n";
	cin.get();
	/*end*/


	/*fire*/
	cout << "Fire " << colt.getSerialNumber() << " in automatic mode.....\n";
	colt.Automatic(3);
	cout << colt.firing("", 20);

	cin.get();
	cout << colt.status();
	cin.get();

	cout << rugar.firing("", 5);
	cout << rugar.status();
	cin.get(), cin.get();
	cout << rugar.status();
	cin.get(), cin.get();



	/*cout << "Enter Man. ";
	cin >> manufacturer;
	blank.setManufacturer(manufacturer);
	cout << blank.getManufacturer();
	cin.get(), cin.get();
	blank.ToString();*/



}