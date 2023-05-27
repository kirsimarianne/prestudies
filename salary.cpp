#include <iostream>

// Exercise 2.6.

int main()
{
    double salary {1};
    int days {1};
    while(salary < 10000000){
        days++;
        salary = 2*salary;
    }
    
    std::cout << "Days needed: " << days << std::endl;

    return 0;
}
