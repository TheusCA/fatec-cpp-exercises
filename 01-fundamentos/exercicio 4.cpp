#include <iostream>
#include <cmath>
 
 
int main()
{
 
 int a,b;
  
  std::cout<< "Digite um numero: ";
  std::cin>> a;
  
  
  if(a < 0)
  {
  	b = (a * 3);
  std::cout<< "Como o numero e negativo, seu triplo e: " <<b<< ".";
  }
  else
  {
  	b = (a * 2);
  	std::cout<< "Como o numero e positivo, seu dobro e: " <<b<< ".";
  }
  
  
  
    return 0;
}
