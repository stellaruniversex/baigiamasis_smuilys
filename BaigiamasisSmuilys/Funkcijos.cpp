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
void Preke::Iterpti(string pavadinimas, string gamintojas, double kaina, int metai, int menuo, int diena, int kiekis)
{
	setPavadinimas(pavadinimas);
	setGamintojas(gamintojas);
	setKaina(kaina);
	setData(metai, menuo, diena);
	setKiekis(kiekis);
}
void Pirkejas::Iterpti(string vardas, string pavarde, int telefonas, string gyvvieta)
{
	setVardas(vardas);
	setPavarde(pavarde);
	setTelefonas(telefonas);
	setGyvVieta(gyvvieta);
}
void NupirktaPreke::Iterpti(string pavadinimas, string vardas, int kiekis, double kaina)
{
	setPavadinimas(pavadinimas);
	setVardas(vardas);
	setKiekis(kiekis);
	setKaina(kaina);
}
void Parduotuve::Iterpti(string vieta, int lentynos, int dydis, int imokos, int ismokos)
{
	setVieta(vieta);
	setLentynos(lentynos);
	setDydis(dydis);
	setImokos(imokos);
	setIsmokos(ismokos);
}