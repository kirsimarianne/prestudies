#include <iostream>
#include <vector>

// Exercise 2.6.


void print_vector(const std::vector<int>& vect)
{
    for(int tmp : vect)
    {
        std::cout << tmp << " ";
    }
}

int main()
{
    std::cout << "The program prints 10 first fibonacci values." << std::endl;
    std::vector<int> fibonacci_vect(10);        

    fibonacci_vect.at(0) = 0;
    fibonacci_vect.at(1) = 1;

    for(unsigned i=2; i < fibonacci_vect.size(); i++)
    {
        fibonacci_vect.at(i) = fibonacci_vect.at(i-1) + fibonacci_vect.at(i-2);    
    }

    print_vector(fibonacci_vect);

    return 0;
}