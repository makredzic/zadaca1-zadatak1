#include <iostream>

namespace Menu {
  void main_menu() {
    std::cout<<"Welcome to the Unit converter. Please enter one of the following options:\n\t1. Temperature\n\t2. Speed\n\t3. Length\n\t4. Weight\n\t5. Fuel economy\n";
  };

  void temperature_menu() {
    std::cout<<"Please choose the converter:\n\t1. Celsius to Fahrenheit\n\t2. Fahrenheit to Celsius\n\t3. Celsius to Kelvin\n\t4. Kelvin to Celsius\n\t5. Fahrenheit to Kelvin\n\t6. Kelvin to Fahrenheit\n";
  }

  int get_choice() {
    std::cout<<"Your choice: ";
    unsigned short x;
    std::cin>>x;
    return x;
  }
}


int main() {
  using namespace Menu;
  using std::string;

  bool to_loop;
  unsigned short choice;

  main_menu();
  do {
    to_loop = false;
    choice = get_choice();

      if (choice == 1) {
      temperature_menu();
    } else 
    
    if (choice == 2) {
      std::cout<<"Not implemented yet.\n";
    } else 
  
    if (choice == 3) {
      std::cout<<"Not implemented yet.\n";
    } else

    if (choice == 4) {
      std::cout<<"Not implemented yet.\n";
    } else  
  
    if (choice == 5) {
      std::cout<<"Not implemented yet.\n";
    } else {
      std::cout<<"Wrong choice.\n";
      to_loop = true;
    }
  } while (to_loop);

  std::cout<<"End of program!\n";
  return 0;
}
