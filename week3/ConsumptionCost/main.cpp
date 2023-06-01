#include "main.h"
#include <iostream>

double get_consumption_cost(double distance, double consumption, double fuel_price)
{ 
    double consumption_cost = distance * consumption / 100 * fuel_price;
    return consumption_cost;
}

int main()
{
    std::cout << "Enter the distance: ";
    double distance {};
    std::cin >> distance;
    std::cout << "Enter the consumption/100km: ";
    double consumption {};
    std::cin >> consumption;
    std::cout << "Enter 1, 2 or 3: \n1) E95 \n2) E98 \n3) No fuel (electric car)" << std::endl;
    int fuel_type {};
    std::cin >> fuel_type;

    double fuel_price {};

    if(fuel_type == 1)
    {
        fuel_price = PRICE_95;
    }
    else if(fuel_type == 2)
    {
        fuel_price = PRICE_98;
    }
    else if(fuel_type == 3)
    {
        fuel_price = PRICE_ELECTRIC;
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
    }
    
    double consumption_cost {get_consumption_cost(distance, consumption, fuel_price)};

    std::cout << consumption_cost << "€" << std::endl;


    return 0;
}