#include <iostream>
#include <cstdlib>
using namespace std;

auto main() -> int{
int a = 0;
int silnia = 1;

cout <<"Silnia:";
cin >>a;

for (a=a;a>1;a--) {
silnia = silnia*a;
}

cout <<"Silnia =";
cout <<silnia;

return 0;
}

