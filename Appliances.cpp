#include "Appliances.h"
#include <iostream>
#include <string>

Appliances::Appliances(int weight, int power) : _weight(weight), _power(power)
{}

void Appliances::ShowSpec() {}

ElectroGrill::ElectroGrill(int weight, int power, int max_heat) : Appliances(weight, power), _max_heat(max_heat)
{
}

void ElectroGrill::ShowSpec()
{
	cout << " Электрогриль, Мощность: " << _power << " ватт;\n Вес : " << _weight << " кг\n";
}

Electro_Teapot::Electro_Teapot(int weight, int power, int volume) : Appliances(weight, power), _volume(volume)
{
}

void Electro_Teapot::ShowSpec()
{
	cout << " Чайник, Обьем: " << _volume << " Литров;\n Вес: " << _weight << " кг\n Мощность: " << _power << " ватт\n";
}