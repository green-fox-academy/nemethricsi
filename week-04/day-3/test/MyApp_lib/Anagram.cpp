#include "Anagram.h"
#include <iostream>
#include <string>
#include <map>

std::map<char, int> Anagram::stringToMap(std::string word){
    std::map<char, int> mapWord;
    for (int i = 0; i < word.size(); ++i) {
        if(mapWord.find(word.at(i)) != mapWord.end()){
            mapWord.insert(std::make_pair(word.at(i), 1));
        } else {
            mapWord[word.at(i)] += 1;
        }
    }
    return mapWord;
}

bool Anagram::areTheyAnagrams(std::string word1, std::string word2)
{
    if(word1.size() != word2.size()) {
        return false;
    }

    std::map<char, int> map1 = stringToMap(word1);
    std::map<char, int> map2 = stringToMap(word2);

    if(map1.size() != map2.size()){
        return false;
    }

    std::map<char, int>::iterator it;
    for (it = map1.begin(); it != map1.end() ; ++it) {
        if(!(map2.find(it->first) != map2.end() && it->second == map2[it->first])){
            return false;
        }
    }
    return true;
}
