#include <iostream>

using namespace std;

/* CLASSES */

class Car {
public:
    // atrributes
    string make;
    int age;
    int hpwer;

    // methods
    void overview() {
        cout << "The " << make << " car is " << age << " years old and has " << hpwer << " horse power." << endl;
    }
}; // needs a semicolon


class Computer {
private:  // private access specifier (inaccessible outside the class)
  int password;
  
public:   // private access specifier (accessible outside the class)
  double price;

  // constructor (with default parameters)
  Computer(int pass = 0, double dollars = 1000.00) {
    password = pass;
    price = dollars;
  }

  int getPassword() {
    return password;
  }

  void setPassword(int new_password) {
    password = new_password;
  }
};

// Inheritance (derived class)
class Mac: public Computer {
public:
    const string make;
    const int year;

    // use member initializer list
    Mac(int pass = 0, string name = "air", int y = 2000) 
        : Computer(pass, 1500), make(name), year(y) {}

    string system() {
        return "ios";
    }
};

// Mmeber initializer lists (to initialize to const variables)
class Book {
    private:
    const std::string title;
    const int pages;
    public:
    Book() 
        : title("Diary"), pages(100) {} // Member initializer list
};


int main() {
    Car fast;

    fast.make = "bugatti";
    fast.age = 5;
    fast.hpwer = 1600;

    fast.overview();

    Computer dell(1444, 500.99);

    cout << dell.price << endl;
  
    dell.price = 469.99;

    // Uncomment the line below to see the error
    // dell.password = 12345;

    dell.setPassword(12345);
    cout << dell.getPassword() << endl;

    Mac my_mac(2345, "pro", 2023);

    cout << "------ MY MACBOOK ------\n" <<"system: " << my_mac.system() << "\npassword: " << my_mac.getPassword() 
    << "\nmake: " << my_mac.make << "\nprice: " << my_mac.price  << "\nyear: " << my_mac.year << endl;

    

    return 0;
}