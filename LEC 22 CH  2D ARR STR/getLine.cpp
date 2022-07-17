#include <iostream>
#include <istream>
#include <string>
using namespace std;

int main() {

  std::string name;
  std::cout << "Please, enter your full name: " << endl;
  std::getline (std::cin,name);
  std::cout << "Hello, " << name << "!\n";
      return 0;
}