#include"stdafx.h"
#include<iostream>
#include"class.h"




using namespace std;

int main()
{
	rozgrywka z1;
	while (1)
	{
		z1.menu();
		for (int i = 0; i < 3; i++)
		{
			z1.wybor_gracza();
			z1.wybor_komputera();
			z1.zliczanie();
		}
		z1.wyniki_koncowe();
	}


	return 0;
}