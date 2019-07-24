#include <iostream>
#include <string>
#include <map>

std::map<char, int> stringToMap(std::string word);

bool areTheyAnagrams(std::string word1, std::string word2);

int main(int argc, char *args[])
{
    std::string userInput;
    std::string userInput2;
    std::cout << "Type two words: " << std::endl;
    std::cin >> userInput >> userInput2;
    std::cout << "\"" << userInput << "\"" << " and " << "\"" << userInput2 << "\"" << " are Anagrams: "
              << std::boolalpha
              << areTheyAnagrams(userInput, userInput2) << std::endl;

    return 0;
}

std::map<char, int> stringToMap(std::string word)
{
    std::map<char, int> mapWord;
    for (int i = 0; i < word.size(); ++i) {
        if (mapWord.find(word.at(i)) == mapWord.end()) {
            mapWord.insert(std::make_pair(word.at(i), 1));
        } else {
            mapWord[word.at(i)] += 1;
        }
    }
    return mapWord;
}

bool areTheyAnagrams(std::string word1, std::string word2)
{
    if (word1.size() != word2.size()) {
        return false;
    }

    std::map<char, int> map1 = stringToMap(word1);
    std::map<char, int> map2 = stringToMap(word2);

    if (map1.size() != map2.size()) {
        return false;
    }

    std::map<char, int>::iterator it;
    for (it = map1.begin(); it != map1.end(); ++it) {
        if (!(map2.find(it->first) != map2.end() && it->second == map2[it->first])) {
            return false;
        }
    }
    return true;
}