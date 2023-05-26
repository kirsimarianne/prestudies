#include <iostream>

//Exercise 2.5.

int main()
{
    std::cout << "Enter Finnish personal number: ";
    long int personal_number {};
    std::cin >> personal_number;
    
    if(personal_number%2 == 0)
    {
        std::cout << "Female" << std::endl;
    }
    else
    {
        std::cout << "Male" << std::endl;
    }

    return 0;
}