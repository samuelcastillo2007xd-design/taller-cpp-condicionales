#include <iostream>
#include <iomanip>

int main() {
    double celcius;

    std::cout<<"ingrese temperatura celcius: \n";
    std::cin>>celcius;
    
   char x;
   
   std::cout<<"elija la formula que desee utilizar, (´K´elvin, ´R´ankine, ´F´ahremheit): \n";
   std::cin>>x;
   
   std::cout << std::fixed << std::setprecision(2);

   if (x = 'F') {
       
   std::cout<< " formula  (celcius * 9/5 + 32)"<<std::endl;
   std::cout<< "=: \n"<<(celcius * 9/5 + 32);
   }
   else if (x = 'K') {
      
       std::cout<< "formula (celcius + 273.15)"<<std::endl;
       std::cout<<"=: \n"<<(celcius+ 273.15);
       
   }
       else if (x = 'R') {
           
        std::cout<< "formula (celcius + 273.15 * 9/5)"<<std::endl;
        std::cout<<"= \n"<<(celcius + 273.15 * 9/5);
       }
   
   return 0;
}
