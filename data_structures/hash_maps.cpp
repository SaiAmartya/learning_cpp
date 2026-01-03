#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

// When declaring ensure to state the type of both key and value


int main() {
    
    unordered_map<string, string> last_names(
        {{"Sai Amartya", "B.L"}, 
        {"Dhairya", "Shah"}}); // declaring w/ initializer list

    cout << last_names["Sai Amartya"] << endl;

    unordered_map<string, int> country_codes; // without initializer list

    country_codes.insert({"USA", 1});
    country_codes["India"] = 91; // another way to insert (if the key doesn't already exist)
    country_codes["UK"] = 44;
    country_codes["Australia"] = 61;

    country_codes.erase("USA"); // removes key-value pair with key "USA"

    // Checking for element
    if (country_codes.count("India")) {
        cout << "India is present with code: " << country_codes["India"] << endl;
    } else {
        cout << "India is not present" << endl;
    }

    // to prevent [] operator from inserting a new key if it doesn't exist
    // .at() will throw an out_of_range exception instead
    try {
        cout << country_codes.at("USA") << endl;
    } catch (out_of_range& e) {
        cout << "Key not found!" << endl;
    }

    // Iterating through a hash map
    // reminder: "auto" keyword automatically infers the type of "pair"
    for (auto pair: country_codes) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Unordered vs Ordered Hash Maps: ordered maps sort integer keys in ascending order
}