#include <iostream>
#include <string>
#include <map>


int main(int argc, char *args[])
{
    std::map<std::string, std::string> isbnMap = {
            {"978-1-60309-452-8", "A Letter to Jo"},
            {"978-1-60309-459-7", "Lupus"},
            {"978-1-60309-444-3", "Red Panda and Moon Bear"},
            {"978-1-60309-461-0", "The Lab"}
    };

    // adding one pair
    isbnMap.insert(std::make_pair("978-1-00000-222-0", "Test"));

    // isbnMap ["978-1-00000-222-0"] = "Test";                          could also work


    // Print all the key-value pairs in the following format
    //
    // A Letter to Jo (ISBN: 978-1-60309-452-8)

    std::map<std::string, std::string>::iterator it;

    for (it = isbnMap.begin(); it != isbnMap.end(); it++) {
        std::cout << it->second
                  << " (ISBN: "
                  << it->first
                  << ")"
                  << std::endl;
    }

    // Remove the key-value pair with key 978-1-60309-444-3
    isbnMap.erase("978-1-60309-444-3");

    // Remove the key-value pair with value The Lab
    for (it = isbnMap.begin(); it != isbnMap.end(); it++) {
        if ((it->second) == "The Lab") {
            isbnMap.erase(it);
        }
    }

    // Add the following key-value pairs to the map
    // Key	                Value
    // 978-1-60309-450-4	They Called Us Enemy
    // 978-1-60309-453-5	Why Did We Trust Him?

    isbnMap.insert(std::make_pair("978-1-60309-450-4", "They Called Us Enemy"));
    isbnMap.insert(std::make_pair("978-1-60309-453-5", "Why Did We Trust Him?"));


    //Print whether there is an associated value with key 478-0-61159-424-8 or not

    for (it = isbnMap.begin(); it != isbnMap.end(); it++) {
        if (it->first == "478-0-61159-424-8") {
            std::cout << "YES, there is an associated value with key 478-0-61159-424-8." << std::endl;
        }
    }

    // Print the value associated with key 978-1-60309-453-5

    for (it = isbnMap.begin(); it != isbnMap.end(); it++) {
        if (it->first == "978-1-60309-453-5") {
            std::cout << it->second;
        }
    }
    return 0;
}