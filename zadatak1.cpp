#include <iostream>
//test comment
namespace Menu {
  void main_menu() {
    std::cout<<"Welcome to the Unit converter. Please enter one of the following options:\n\t1. Temperature\n\t2. Speed\n\t3. Length\n\t4. Weight\n\t5. Fuel economy\n";
  };

  void temperature_menu() {
    std::cout<<"Please choose the converter:\n\t1. Celsius to Fahrenheit\n\t2. Fahrenheit to Celsius\n\t3. Celsius to Kelvin\n\t4. Kelvin to Celsius\n\t5. Fahrenheit to Kelvin\n\t6. Kelvin to Fahrenheit\n";
  }

  void speed_menu() {
    std::cout<<"Please choose the converter:\n\t1. Kilometers to Miles\n\t2. Miles to Kilometers\n";
  }

  void length_menu() {
    std::cout<<"Not implemented yet.\n";
  }

  void weight_menu() {
    std::cout<<"Not implemented yet.\n";
  }

  void fuel_menu() {
    std::cout<<"Not implemented yet.\n";
  }

  int get_choice() {

    std::cout<<"Your choice: ";
    unsigned short x;

    if (!(std::cin>>x)) {
      std::cout<<"Error: Invalid entry. Program closed.\n";
      std::cin.clear();
      //cin.clear() is not enough to prevent infinite loop on bad entry 
      return 0;
    }

    return x;
  }
}


//temperature converters
namespace converters {
  float cels_fahr(float cels) {
    double result = 1.8*cels + 32;
    return result;
  }

  float fahr_cels(float fahr) {
    float result = (fahr-32)/1.8;
    return result;
  }

  float cels_kelv(float cels) {
    return cels+273.15;
  }

  float kelv_cels(float kelv) {
    return kelv-273.15;
  }

  float fahr_kelv(float fahr) {
    float result = (fahr-32)/1.8 + 273.15;
    return result;
  }

  float kelv_fahr(float kelv) {
    float result = (kelv-273.15)*1.8 + 32;
    return result;
  }

  float km_m(float km) {
    return km/1.60934;
  }

  float m_km(float m) {
    return m*1.60934;
  }
}

namespace MenuManager {
  
  using namespace Menu;
  using namespace converters;
  
  void call_menu(unsigned short x) {
    
    if (x == 1) {
      temperature_menu();
      unsigned short choice = get_choice();
     
      if (choice == 1) {
        float c;
        do{
          std::cout<<"Enter the temperature in celsius: ";
          std::cin>>c;
        
          if (c < -273.15) {
            std::cout<<"Too low (<273.15c).\n";
          }
        } while (c < -273.15);
        std::cout<<c<<" degrees celsius is "<<cels_fahr(c)<<" degrees fahrenheit.\n";
      } else

      if (choice == 2) {
        float f;
        do{
          std::cout<<"Enter the temperature in degrees Fahrenheits: ";
          std::cin>>f; 
          if (f < -459.67) {
            std::cout<<"Too low (<-459.67).\n";
          }

        } while (f < -459.67);
        std::cout<<f<<" degrees Fahrenheits is "<<fahr_cels(f)<<" degrees celsius.\n";
      } else 

      if (choice == 3) {
        float c;
        do{
          std::cout<<"Enter the temperature in degrees celsius: ";
          std::cin>>c; 
          if (c < -273.15) {
            std::cout<<"Too low (< -273.15).\n";
          }
        } while (c < -273.15);
        std::cout<<c<<" degrees Celsius is "<<cels_kelv(c)<<" Kelvin.\n";
      } else 

      if (choice == 4) {
        float k;
        do{
          std::cout<<"Enter the temperature in kelvin: ";
          std::cin>>k; 
          if (k < 0) {
            std::cout<<"Too low (<0).\n";
          }
        } while (k < 0);
        std::cout<<k<<" kelvin is "<<kelv_cels(k)<<" degrees Celsius.\n";
      } else 
     
      if (choice == 5) {
        float f;
        do{
          std::cout<<"Enter the temperature in degrees Fahrenheits: ";
          std::cin>>f; 
          if (f < -459.67) {
            std::cout<<"Too low (<-459.67).\n";
          }
        } while (f < -459.67);
        std::cout<<f<<" degrees Fahrenheits is "<<fahr_kelv(f)<<" Kelvin.\n";
      } else

      if (choice == 6) {
        float k;
        do{
          std::cout<<"Enter the temperature in kelvin: ";
          std::cin>>k; 
          if (k < 0) {
            std::cout<<"Too low (<0).\n";
          }
        } while (k < 0);
        std::cout<<k<<" kelvin is "<<kelv_fahr(k)<<" degrees Fahrenheits.\n";
      } else {
        std::cout<<"Invalid choice.\n";
        call_menu(x);
      }
        
    } else

    if (x == 2) {
      speed_menu();

      unsigned short choice = get_choice();
      if (choice == 1) {
        float km;
        do {
          std::cout<<"Enter an amount in kilometers: ";
          std::cin>>km;
          if (km <= 0) {
            std::cout<<"Please enter a positive number.\n";
          }
        } while(km <= 0);
        std::cout<<km<<" kilometers is "<<km_m(km)<<" miles.\n";
      } else

      if (choice == 2) {
        
        float m;
        
        do {
          std::cout<<"Enter an amount in miles: ";
          std::cin>>m;
          if (m <= 0) std::cout<<"Please enter a positive number.\n";
        } while(m<=0);
        
        std::cout<<m<<" miles is "<<m_km(m)<<" kilometers.\n";

      } else {
        std::cout<<"Invalid choice.\n";
        call_menu(x);
      }

      
    } else 

    if (x == 3) {
      length_menu();
    } else 

    if (x == 4) {
      weight_menu();
    } else

    if (x == 5) {
      fuel_menu();
    }
  }
}

int main() {
  using namespace Menu;
  using namespace MenuManager;

  using std::string;

  bool to_loop;
  unsigned short choice;
  do {
    main_menu();
    do {
      to_loop = false;
      choice = get_choice();

      if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5) { 
        std::cout<<"Wrong choice.\n";
        to_loop = true;
      }

    } while (to_loop);

    call_menu(choice);
  
    std::cout<<"Use converter again?\n\t1. Yes\n\t2. No\nInput: ";
    std::cin>>choice;
  } while (choice == 1);

  return 0;
}
