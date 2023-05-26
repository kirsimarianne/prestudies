#include <iostream>

// Exercise 2.3.

int main()
{
    std::cout << "Enter the price for the memebrship card: ";
    double price_mbrship {};
    std::cin >> price_mbrship;
    std::cout << "Enter the price for a single visit: ";
    double price_single {};
    std::cin >> price_single;
    std::cout << "Enter the amount of times visiting to the gym in a year" << std::endl;
    int visits {};
    std::cin >> visits;

    if(price_single * visits >= price_mbrship)
    {
        std::cout << "It is worth to buy a memebership." << std::endl;
    }
    else
    {
        std::cout << "It is not worth to buy a memebership." << std::endl;
    }

    return 0;
}
