#include"stdafx.h"
#include<iostream>
#include <ctime>
#include"class.h"
#include <iomanip>
#include<string>



using namespace std;

void rozgrywka::menu()
{


	cout << "**********WITAJ W GRZE KAMIEN PAPIER NOZYCE********" << endl;


	cout << setw(110) << right << "Zasady gry wygladaja nastepujaco:\n";
	cout << "Aby rozpoczac gre wybierz 1" << setw(78) << right << "Kamien bije Nozyce\n";
	cout << "Aby wyjsc wcisnij 2" << setw(86) << right << "Nozyce bija Papier\n";
	cout << setw(105) << right << "Papier bije Kamien\n";
pomylka:
	cout << "Wybor opcji nr:"; cin >> wybor1;


	switch (wybor1)
	{
	case 1:
		cout << "\nPostepuj wedlug instrukcji" << endl;
		break;
	case 2:
		exit(0);
		break;
	default:
		cout << "\nWprowadziles niepoprawne znaki wybierz jeszcze raz:\n";
		goto pomylka;
		break;
	}
}

void rozgrywka::wybor_gracza()
{
pomylka2:
	cout << "Wybierz co chcesz wyrzucic wciskajac odpowiedni kalwisz:" << endl;
	cout << "1. Kamien\n2. Papier\n3. Nozyce" << endl;
	cout << "Wybor opcji nr:"; cin >> gracz;

	switch (gracz)
	{
	case 1:
		cout << "Wybrales Kamien\nKomputer wybral ";
		break;
	case 2:
		cout << "Wybrales Papier\nKomputer wybral ";
		break;
	case 3:
		cout << "Wybrales Nozyce\nKomputer wybral ";
		break;
	default:
		cout << "Wprowadziles niepoprawne znaki wybierz jeszcze raz:\n";
		goto pomylka2;
		break;
	}
}

void rozgrywka::wybor_komputera()
{
	char* symbol[3] = { "Kamien","Papier","Nozyce" };

	srand(time(0));
	a = rand() % 3;
	cout << symbol[a] << endl;

}

void rozgrywka::zliczanie()
{
	if ((gracz == 1 && a == 0) || (gracz == 2 && a == 1) || (gracz == 3 && a == 2))
	{
		cout << "Runda zakonczyla sie remisem\n" << endl;
		remis++;

	}
	if ((gracz == 1 && a == 2) || (gracz == 2 && a == 0) || (gracz == 3 && a == 1))
	{
		cout << "Gratulacje wygrales te runde !\n" << endl;
		PunktyGracza++;

	}
	if ((gracz == 1 && a == 1) || (gracz == 2 && a == 2) || (gracz == 3 && a == 0)) {
		cout << "Te rude wygral komputer \n" << endl;
		PunktyKomputera++;
	}


}



void rozgrywka::wyniki_koncowe()
{
	cout << "****PODSUMOWANIE ROZGRYWKI****\n" << endl;
	cout << "Remisy            " << remis << endl;
	cout << "Wygrane komputera " << PunktyKomputera << endl;
	cout << "Wygrane gracza    " << PunktyGracza << endl;


	if ((PunktyKomputera >= 2) || (PunktyKomputera == 1 && remis == 2))
	{
		cout << "Niestety gre wygral komputer\n" << endl;
	}
	else if ((remis == 3) || (remis == 1 && PunktyKomputera == 1 && PunktyGracza == 1))
	{
		cout << "Gra zakonczyla sie remisem\n" << endl;
	}
	else { cout << "Gratuluje wygrales !\n" << endl; }
}