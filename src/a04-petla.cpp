#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>

bool pierwsza(int a)
{
if(a < 2)
 return false;

for(int i=2; i*i<=a; i++)
if (a%i==0)
return false;
return true;
}

auto main() -> int
{
int a;

 std::cout<<"Podaj liczbe:";
 std::cin>>a;

if(pierwsza(a))
std::cout<<"Liczba" <<a<<" jest pierwsza";
else
std::cout<<"Liczba" <<a<<" nie jest pierwsza";
std::cout<<"\n";

return  0;

}





