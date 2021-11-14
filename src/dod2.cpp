#include <iostream>
using namespace std;

int main()
{

int rok = 0;
int miesiac = 0;
int dzien;
cout << "Podaj rok: ";
cin >> rok;
cout << "Podaj miesiac: ";
cin >> miesiac;
if (miesiac == 4 || miesiac == 6 || miesiac == 9 || miesiac == 11)
dzien = 30;

else if (miesiac == 2 )
{
bool przestepny = (rok % 4 == 0 && rok % 100 !=0) || (rok % 400 == 0);

if (przestepny == 0)
dzien = 28;
else
dzien = 29;
}
else
dzien = 31;
cout<<dzien;

return 0;
}
