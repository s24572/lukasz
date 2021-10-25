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
int stala = 0;

 std::cout<<"Podaj liczbe:";
 std::cin>>a;
 
while(a>0){
if(pierwsza(a)){
stala = stala + a;
a--;
}
else{
a--;
}
}

std::cout <<"Wynik ="<< stala;


return  0;

}



