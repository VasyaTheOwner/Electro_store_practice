#pragma once
#include "Devices.h"
#include "Appliances.h" 
#include "IElectronics.h"

class PS5 final : public Appliances, Devices
{
public:
    PS5(int Battery_capacity, int weight, int RAM_Volume);

    void ShowSpec() override;
};
