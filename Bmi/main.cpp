#include <iostream>
#include <math.h>
#include "main.h"

// Exercise 2.4.


int main()
{
    std::cout << "Enter the weight in kilograms: ";
    double weight {};
    std::cin >> weight;
    std::cout << "Enter the height in meters: ";
    double height {};
    std::cin >> height;
    
    double bmi {weight/(height*height)};
    double bmi_rounded {round(bmi*10)/10};

    std::cout << "Bmi: " << bmi_rounded <<  std::endl;

    if(bmi > MAX_BMI)
    {
        std::cout << "Bmi is over the maximum" << std::endl;
    }
    else if (bmi < MIN_BMI)
    {
        std::cout << "Bmi is under the minimum" << std::endl;
    }
    else{
        std::cout << "Bmi is normal" << std::endl;
    }
    return 0;
}
