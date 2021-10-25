#include <iostream>
#include <cstdlib>
using namespace std;

auto main() -> int{
int a = 0;
int silnia = 1;

cout <<"Silnia:";
cin >>a;

while (a>1) {
silnia = silnia*a;
a--;
}

cout <<"Silnia =";
cout <<silnia;

return 0;
}


