#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP addresses.
// Write a function that returns the GET / POST request ratio.

std::vector<std::string> readMyVector(std::string file);

std::vector<std::string> removeDuplicates(std::vector<std::string> vec);

bool contains(std::vector<std::string> vec, std::string word);

int main()
{

    std::vector<std::string> uniqueIpAdresses;

    uniqueIpAdresses = removeDuplicates(readMyVector("../log.txt"));

    for (int i = 0; i < uniqueIpAdresses.size(); ++i) {
        std::cout << uniqueIpAdresses[i] << std::endl;
    }

    return 0;
}

std::vector<std::string> readMyVector(std::string file)
{
    std::fstream myLog(file, std::ios::in);
    std::vector<std::string> ipAddresses;
    if (myLog.is_open()) {
        std::string line;
        while (std::getline(myLog, line)) {
            std::istringstream ss(line);
            std::string ip;
            for (int i = 0; i < 9; ++i) {
                std::getline(ss, ip, ' ');
            }
            ipAddresses.push_back(ip);
        }
        myLog.close();
    }
    return ipAddresses;
}

std::vector<std::string> removeDuplicates(std::vector<std::string> vec)
{
    std::vector<std::string> uniqueVec;
    for (int i = 0; i < vec.size(); ++i) {
        if (!contains(uniqueVec, vec[i])) {
            uniqueVec.push_back(vec[i]);
        }
    }
    return uniqueVec;
}

bool contains(std::vector<std::string> vec, std::string word)
{
    for (int i = 0; i < vec.size(); ++i) {
        if (word == vec[i]) {
            return true;
        }
    }
    return false;
}