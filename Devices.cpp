#include "Devices.h"
#include <iostream>
#include <string>


Devices::Devices(int RAM_Volume) : _RAM_Volume(RAM_Volume)
{
}

void Devices::ShowSpec()
{}


Audio_Player::Audio_Player(int RAM_Volume, int Battery_capacity) : Devices(RAM_Volume), _Battery_capacity(Battery_capacity)
{
}

void Audio_Player::ShowSpec()
{
	cout << "Аудиоплеер: объем памяти " << _RAM_Volume << "  Mb;\n емкость батареи : " << _Battery_capacity << " mAh\n ";
}

TV_Set::TV_Set(int RAM_Volume, int Screen_Size_IN_inch) : Devices(RAM_Volume), _Screen_Size_IN_inch(Screen_Size_IN_inch)
{
}

void TV_Set::ShowSpec()
{
	cout << " Телевизор: размер экрана в дюймах: " << _Screen_Size_IN_inch << "\n Обьем памяти: " << _RAM_Volume << " Mb\n";
}