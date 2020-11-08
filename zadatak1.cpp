#include <iostream>
using namespace std;

//Welcome to Unit converter. Please enter one of the following options:
//1. Temperature
//2. Speed
//3. Length
//4. Weight
//5. Fuel economy
//Your choice:

int main() {

  unsigned short choice;
  bool check;

  std::cout<<"Welcome to Unit converter. Please enter one of the following options:\n\t1. Temperature\n\t2. Speed\n\t3. Length\n\t4. Weight\n\t5. Fuel economy\n";
  do {  
    check = true;
    std::cout<<"Your choice: ";
    std::cin>>choice;

    if(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5) {
      check = false;
      std::cout<<"Please type the appropriate number.\n";
    }

  } while(!check);

  std::cout<<"End of program!\n";
  
  
  
  return 0;
}
