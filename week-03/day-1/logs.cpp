#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP addresses.
// Write a function that returns the GET / POST request ratio.

std::vector<std::string> collectColumnData(std::string file, int position);

std::vector<std::string> removeDuplicates(std::vector<std::string> vec);

bool contains(std::vector<std::string> vec, std::string word);

double showGetPostRatio(std::vector<std::string> vec);

int main()
{

    std::vector<std::string> uniqueIpAdresses;
    std::vector<std::string> requests;
    int columnOfIpAddresses = 9;
    int columnOfRequests = 12;


    uniqueIpAdresses = removeDuplicates(collectColumnData("../log.txt", columnOfIpAddresses));

    requests = collectColumnData("../log.txt", columnOfRequests);

    std::cout << "GET/POST Ratio: " << showGetPostRatio(requests) << std::endl;

    return 0;
}

std::vector<std::string> collectColumnData(std::string file, int position)
{
    std::fstream myLog(file, std::ios::in);
    std::vector<std::string> vector;
    if (myLog.is_open()) {
        std::string line;
        while (std::getline(myLog, line)) {
            std::istringstream ss(line);
            std::string ip;
            for (int i = 0; i < position; ++i) {
                std::getline(ss, ip, ' ');
            }
            vector.push_back(ip);
        }
        myLog.close();
    }
    return vector;
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

double showGetPostRatio(std::vector<std::string> vec)
{
    int numberOfGet = 0;
    int numberOfPost = 0;

    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == "POST") {
            numberOfPost++;
        } else if (vec[i] == "GET") {
            numberOfGet++;
        }
    }
    return static_cast<double>(numberOfGet) / numberOfPost;
}