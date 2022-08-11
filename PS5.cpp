#include "PS5.h"
using namespace std;
PS5::PS5(int RAM_Volume, int weight, int power) : Devices(RAM_Volume), Appliances(weight, power)
{
}

void PS5::ShowSpec()
{
	cout << "PS5: Вес: " << _weight << "кг;\n Емкость RAM: " << _RAM_Volume << "Gb;\n Мощность БП: " << _power << "Ватт\n";

}
