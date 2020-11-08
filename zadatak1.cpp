#include <iostream>

namespace Menu {
  void main_menu() {
    std::cout<<"Welcome to the Unit converter. Please enter one of the following options:\n\t1. Temperature\n\t2. Speed\n\t3. Length\n\t4. Weight\n\t5. Fuel economy\n";
  };

  void temperature_menu() {
    std::cout<<"Please choose the converter:\n\t1. Celsius to Fahrenheit\n\t2. Fahrenheit to Celsius\n\t3. Celsius to Kelvin\n\t4. Kelvin to Celsius\n\t5. Fahrenheit to Kelvin\n\t6. Kelvin to Fahrenheit\n";
  }

}


int main() {
  using namespace Menu;
  using std::string;

  unsigned short choice;

  main_menu();
  std::cout<<"Your choice: ";
  std::cin>>choice;

  if (choice == 1) {
    temperature_menu();
  } else std::cout<<"Not implemented yet.\n";
  
  std::cout<<"End of program!\n";
  return 0;
}
