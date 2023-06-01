#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <map>

int get_sum(const std::vector<int> &vect)
{
    int sum {};
    return std::accumulate(vect.begin(), vect.end(), sum);
}

double get_average(std::size_t size, double sum)
{
    double average {sum/size};
    return round(average*100.0)/100.0;
}

int get_maximum(const std::vector<int> &vect)
{
    return vect.back();
}

int get_minimum(const std::vector<int> &vect)
{
    return vect.front();
}

/* Add integers to a map as a key.
 * Operator ++ gives value 1 to a key that occurs first time
 * and increases the value by 1 if the key already exists.
 * Loop through the map to find the most frequent value.
 */
int get_most_frequent(const std::vector<int> &vect)
{
    std::map<int, int> frequencyMap;

    for(int number : vect)
    {
        frequencyMap[number]++;
    }

    int mostFrequent {0};
    int maxCount {0};

    for(const auto& pair : frequencyMap)
    {
        if(pair.second > maxCount)
        {
            maxCount = pair.second;
            mostFrequent = pair.first;
        }
    }

    return mostFrequent;
}

int get_difference(int max, int min)
{
    return max-min;
}

/* Read file of integers from command line.
 * Return 1 if wrong amount of arguments in command line
 * or opening file failed.
 * Store integers to vector and sort vector.
 * Print data.
 */
int main(int argc, char** argv)
{
    // Check amount of arguments
    if(argc != 2)
    {
        std::cout << "Please give filename as a comman-line argument" << std::endl;
        return 1;
    }

    // Create an input file stream
    std::ifstream file(argv[1]);

    if(!file.is_open())
    {
        std::cout << "Failed to open the file" << std::endl;
        return 1;
    }

    int number; // Variable to hold each number as it is read
    std::vector<int> vect;    // Vector to store variables
    while(file >> number)
    {
        vect.push_back(number);
    }
    file.close();

    std::sort(vect.begin(), vect.end());

    int sum {get_sum(vect)};    
    int max {get_maximum(vect)};
    int min {get_minimum(vect)};
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << get_average((vect.size()-1), double(sum)) << std::endl;
    std::cout << "Maximum: " << max << std::endl;
    std::cout << "Minimum: " << min << std::endl; 
    std::cout << "Most frequent: " << get_most_frequent(vect) << std::endl;
    std::cout << "Difference between maximum and minimum: " << get_difference(max, min) << std::endl;

    return 0;
}
