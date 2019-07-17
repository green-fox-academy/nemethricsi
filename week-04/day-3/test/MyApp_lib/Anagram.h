#ifndef MYAPP_ANAGRAM_H
#define MYAPP_ANAGRAM_H
#include "Anagram.h"
#include <iostream>
#include <string>
#include <map>

class Anagram
{
public:
    std::map<char, int> stringToMap(std::string word);

    bool areTheyAnagrams(std::string word1, std::string word2);

};

#endif //MYAPP_ANAGRAM_H
