include <iostream>
#include <string>
#include <cstdlib>

auto main()->int {

int a = 0;
int b = 0;

int e = 0;
int d = 0;

std::cout<<"a= ";
std::cin>>a;
std::cout<<"b= ";
std::cin>>b;

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

return;

