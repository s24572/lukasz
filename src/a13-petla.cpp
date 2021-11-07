#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
for(int i=;i<n;i++)
{
for(int j=0; j<n;j++)
if(i<=j)
cout<<"*";
cout << endl;
}
}