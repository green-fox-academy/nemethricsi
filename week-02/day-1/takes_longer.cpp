#include <iostream>
#include <string>

// When saving this quote a disk error has occured. Please fix it.
// Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

int main(int argc, char* args[])
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");

    std::string quoteToInsert = " always takes longer than ";

    quote.replace(quote.find("you")-1, 1, quoteToInsert);

    std::cout << quote << std::endl;
    return 0;
}