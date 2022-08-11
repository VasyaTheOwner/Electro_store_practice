#pragma once
#include <iostream>
#include "IElectronics.h"
using namespace std;
class Appliances : virtual public IElectronics 
{
public:
    Appliances(int weight, int power);
    void ShowSpec() override;
	
protected:
    int _weight; int _power;
};

class ElectroGrill final : public Appliances
{
public:
    ElectroGrill(int weight, int power, int max_heat);
    void ShowSpec() override;

private:
    int _max_heat;
};

class Electro_Teapot final : public Appliances

{

public: 
    Electro_Teapot(int weight,int power, int volume);  
        void ShowSpec() override;

private: 
    int _volume; 
};