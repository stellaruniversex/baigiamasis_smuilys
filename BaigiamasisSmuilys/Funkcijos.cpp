#include "Funkcijos.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
void Preke::Skait(ifstream &fd)
{
	string pav = "";
	string gam = "";
	double kaina = 0;
	int metai, menuo, diena, kiekis = 0;
	getline(fd, pav, ';');
	getline(fd, gam, ';');
	setPavadinimas(pav);
	setGamintojas(gam);
	fd >> kaina >> metai >> menuo >> diena >> kiekis;
	setKaina(kaina);
	setData(metai, menuo, diena);
	setKiekis(kiekis);
	fd.ignore(80, '\n');
}
void Preke::Spausd(ofstream &fs)
{

}
void Pirkejas::Skait(ifstream &fd)
{
	string v = "";
	string p = "";
	string g = "";
	int telefonas = 0;
	getline(fd, v, ';');
	getline(fd, p, ';');
	getline(fd, g, ';');
	setVardas(v);
	setPavarde(p);
	setGyvVieta(g);
	fd >> telefonas;
	setTelefonas(telefonas);
	fd.ignore(80, '\n');
}
void NupirktaPreke::Skait(ifstream &fd)
{
	string pavadinimas = "";
	string pirkejas = "";
	double kaina = 0;
	int kiekis = 0;
	getline(fd, pavadinimas, ';');
	getline(fd, pirkejas, ';');
	setPavadinimas(pavadinimas);
	setVardas(pirkejas);
	fd >> kaina >> kiekis;
	setKaina(kaina);
	setKiekis(kiekis);
	fd.ignore(80, '\n');
}
void Parduotuve::Skait(ifstream &fd)
{
	string vieta = "";
	int lentynos = 0;
	int dydis = 0;
	int imokos = 0;
	int ismokos = 0;
	getline(fd, vieta, ';');
	setVieta(vieta);
	fd >> lentynos >> dydis >> imokos >> ismokos;
	setLentynos(lentynos);
	setDydis(dydis);
	setImokos(imokos);
	setIsmokos(ismokos);
	fd.ignore(80, '\n');
}
//void skaitPrekes(Preke prekes[], string txt, int &n)
//{
	//ifstream fd(txt);
	//for (size_t i = 0; !fd.eof(); i++)
	//{
		//prekes[i].Skait(fd);
		//n++;
	//}
//}
void spausdintiPrekes()
{

}