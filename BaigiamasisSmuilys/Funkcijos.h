#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>

class Preke
{
private:
	std::string Pavadinimas;
	std::string Gamintojas;
	double Kaina;
	int Metai;
	int Menuo;
	int Diena;
	int Kiekis;
public:
	//std::ifstream fd;
	void setPavadinimas(std::string pavadinimas)
	{
		Pavadinimas = pavadinimas;
	}
	std::string getPavadinimas()
	{
		return Pavadinimas;
	}
	void setGamintojas(std::string gamintojas)
	{
		Gamintojas = gamintojas;
	}
	std::string getGamintojas()
	{
		return Gamintojas;
	}
	void setKaina(double kaina)
	{
		Kaina = kaina;
	}
	double getKaina()
	{
		return Kaina;
	}
	void setData(int metai, int menuo, int diena)
	{
		Metai = metai;
		Menuo = menuo;
		Diena = diena;
	}
	int getMetai()
	{
		return Metai;
	}
	int getMenuo()
	{
		return Menuo;
	}
	int getDiena()
	{
		return Diena;
	}
	void setKiekis(int kiekis)
	{
		Kiekis = kiekis;
	}
	int getKiekis()
	{
		return Kiekis;
	}
	void Skait(std::ifstream &fd);
	void Iterpti(std::string pavadinimas, std::string gamintojas, double kaina, int metai, int menuo, int diena, int kiekis);
	void Spausd(std::ofstream &fs);
};
class Pirkejas
{
private:
	std::string Vardas;
	std::string Pavarde;
	int Telefonas;
	std::string GyvenamojiVieta;
public:
	void setVardas(std::string vardas)
	{
		Vardas = vardas;
	}
	std::string getVardas()
	{
		return Vardas;
	}
	void setPavarde(std::string pavarde)
	{
		Pavarde = pavarde;
	}
	std::string getPavarde()
	{
		return Pavarde;
	}
	void setTelefonas(int telefonas)
	{
		Telefonas = telefonas;
	}
	int getTelefonas()
	{
		return Telefonas;
	}
	void setGyvVieta(std::string gyvvieta)
	{
		GyvenamojiVieta = gyvvieta;
	}
	std::string getGyvVieta()
	{
		return GyvenamojiVieta;
	}
	void Skait(std::ifstream &fd);
	void Iterpti(std::string vardas, std::string pavarde, int telefonas, std::string gyvvieta);
	void Spausd(std::ofstream &fs);
};
class NupirktaPreke
{
private:
	std::string PrekesPavadinimas;
	std::string PirkejoVardas;
	int Kiekis;
	double Kaina;
public:
	std::string getPavadinimas()
	{
		return PrekesPavadinimas;
	}
	void setPavadinimas(std::string pavadinimas)
	{
		PrekesPavadinimas = pavadinimas;
	}
	std::string getVardas()
	{
		return PirkejoVardas;
	}
	void setVardas(std::string vardas)
	{
		PirkejoVardas = vardas;
	}
	int getKiekis()
	{
		return Kiekis;
	}
	void setKiekis(int kiekis)
	{
		Kiekis = kiekis;
	}
	double getKaina()
	{
		return Kaina;
	}
	void setKaina(double kaina)
	{
		Kaina = kaina;
	}
	void Skait(std::ifstream &fd);
	void Spausd(std::ofstream &fs);
};
class Parduotuve
{
	std::string Vieta;
	int Lentynos;
	int Dydis;
	int Imokos;
	int Ismokos;
public:
	std::string getVieta()
	{
		return Vieta;
	}
	void setVieta(std::string vieta)
	{
		Vieta = vieta;
	}
	int getLentynos()
	{
		return Lentynos;
	}
	void setLentynos(int lentynos)
	{
		Lentynos = lentynos;
	}
	int getDydis()
	{
		return Dydis;
	}
	void setDydis(int dydis)
	{
		Dydis = dydis;
	}
	int getImokos()
	{
		return Imokos;
	}
	void setImokos(int imokos)
	{
		Imokos = imokos;
	}
	int getIsmokos()
	{
		return Ismokos;
	}
	void setIsmokos(int ismokos)
	{
		Ismokos = ismokos;
	}
	void Skait(std::ifstream &fd);
	void Spausd(std::ofstream &fs);
};
class Prekes
{
public:
	Preke prekes[2048];
};
class Pirkejai
{
public:
	Pirkejas pirkejai[2048];
};
class NupirktaPrekes
{
public:
	NupirktaPreke nupirktos[2048];
};
class Parduotuves
{
public:
	Parduotuve parduotuves[2048];
};
// external variables
//int a;
//int b;
//int c;
//int d;
//int e;
//int f;
//Preke prekes[256];