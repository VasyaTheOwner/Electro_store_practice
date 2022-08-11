#include <iostream>
#include <string>
#include "Appliances.h"
#include "Devices.h"
#include "PS5.h"
using namespace std;


int main()
{
	system("chcp 1251>nul");
	IElectronics* grocery[5]{};

	grocery[0] = new Audio_Player(512, 3000);
	grocery[1] = new TV_Set(2024, 46);
	grocery[2] = new ElectroGrill(5, 3000, 300);
	grocery[3] = new Electro_Teapot(1, 2000, 3);
	grocery[4] = new PS5(5000, 3, 800);

	bool open = true;
	while (open)
	{
	start:
		cout << "Выберите продукт : 1 - Аудиоплеер, 2 - Телевизор, 3 - Электрогриль, 4 - Чайник, 5 - Игровая консоль, 0 чтобы выйти\n";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			grocery[0]->ShowSpec();
			break;

		case 2:
			grocery[1]->ShowSpec();
			break;

		case 3:
			grocery[2]->ShowSpec();
			break;

		case 4:
			grocery[3]->ShowSpec();
			break;

		case 5:
			grocery[4]->ShowSpec();
			break;

		case 0:
			open = false;
			break;

		default:
			goto start;//cout << "Выберите продукт от 1 до 5 или 0, чтобы выйти" << endl;
			break;
		}
	}
	delete grocery[0];
	delete grocery[1];
	delete grocery[2];
	delete grocery[3];
	delete grocery[4];

	return 0;
}