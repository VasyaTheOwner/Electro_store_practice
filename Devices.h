#pragma once
#include <iostream>
#include "IElectronics.h"
using namespace std;


class Devices : virtual public IElectronics
{
public:
    Devices(int RAM_Volume);
    
    void ShowSpec() override;
protected:
    int _RAM_Volume;
};

class Audio_Player final : public Devices
{
public:
    Audio_Player(int RAM_Volume, int Battery_capacity);
    void ShowSpec() override;
private:
    int _Battery_capacity;
};

class TV_Set final : public Devices
{
public:
    TV_Set(int RAM_Volume, int Screen_Size_IN_inch);
	
    void ShowSpec() override;
private:
    int _Screen_Size_IN_inch;
};