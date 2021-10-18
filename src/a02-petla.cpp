#include <iostream>
#include <string>
#include <cstdlib>

auto main()->int {

int a = 0;
int b = 0;
int c = 0;

int e = 0;
int d = 0;
int f = 0;
int stala = 0;

std::cout<<"a= ";
std::cin>>a;
std::cout<<"b= ";
std::cin>>b;
std::cout<<"c= ";
std::cin>>c;
stala = c;

while (e < 6){
std::cout<< a;
a++;
e++;
}

while (d < 6){
b--;
std::cout<<b;
d++;
}

if (c == 0){
std::cout<<"niepoprawne c";
goto skok; 
}

while (f < 6){
if (c%stala == 0){
std::cout<<c;
}
c++;
f++;
}

skok:
return 0;
}







