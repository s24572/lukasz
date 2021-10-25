#include <iostream>
#include <cstdlib>
using namespace std;

auto main() -> int{
int a = 0;
int silnia = 1;

cout <<"Silnia:";
cin >>a;
do {
silnia = silnia*a;
a--;
}while(a>1);

cout <<"Silnia =";
cout <<silnia;

return 0;
}


