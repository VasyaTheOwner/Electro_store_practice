#include "PS5.h"
using namespace std;
PS5::PS5(int RAM_Volume, int weight, int power) : Devices(RAM_Volume), Appliances(weight, power)
{
}

void PS5::ShowSpec()
{
	cout << "PS5: ���: " << _weight << "��;\n ������� RAM: " << _RAM_Volume << "Gb;\n �������� ��: " << _power << "����\n";

}
