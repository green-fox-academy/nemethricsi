#include "Anagram.h"
#include <gtest/gtest.h>

TEST(anagram_check, anagrams){
    EXPECT_EQ(areTheyAnagrams("apple", "pplea"), 1);
}

TEST(anagram_check, not_anagrams){
    EXPECT_EQ(areTheyAnagrams("apple", "prlea"), 0);
}

TEST(anagram_check, empty_string){
    EXPECT_EQ(areTheyAnagrams("apple", ""), 0);
}

TEST(anagram_check, empty_strings){
    EXPECT_EQ(areTheyAnagrams("", ""), 1);
}

TEST(anagram_check, empty_string_whitespace){
    EXPECT_EQ(areTheyAnagrams(" ", ""), 0);
}