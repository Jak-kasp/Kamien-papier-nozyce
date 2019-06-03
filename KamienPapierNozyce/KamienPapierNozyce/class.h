#include"stdafx.h"
#include<iostream>
#include<string>

using namespace std;


class rozgrywka {
private:
	int wybor1, wybor2;
	int gracz;
	int remis = 0;
	int a;
	int PunktyKomputera = 0;
	int PunktyGracza = 0;
	char* symbol[3] = { "Kamien","Papier","Nozyce" };

public:

	void menu();
	void wybor_gracza();
	void wybor_komputera();
	void zliczanie();
	void wyniki_koncowe();
};
