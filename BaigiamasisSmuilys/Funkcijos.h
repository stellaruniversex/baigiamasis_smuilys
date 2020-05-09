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
};
class Parduotuve
{
	std::string Vieta;
	int Lentynos;
	int Dydis;
	int Imokos;
	int Ismokos;
	void Skait(std::ifstream &fd);
};
// external variables
//int a;
//int b;
//int c;
//int d;
//int e;
//int f;
//Preke prekes[256];