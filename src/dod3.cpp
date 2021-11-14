#include <iostream>
using namespace std;

int main()
{
int p=0,n;
cin>> n;
for(int i=2; i*i<n;i++)
{
if(n%i==0)
{
cout <<"nie jest pierwsza";
break;

}
p++;
}
cout << "jest liczba pierwsza," << " wykonano:" <<
p;
return 0;
}


