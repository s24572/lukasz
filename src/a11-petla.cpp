#include <iostream>
#include <string>
auto pyt(std::string txt)->int
{
    int n;
    std::cout<<txt<<"\n";
    std::cin>>n;
    return n;
}
auto main()->int
{
    int a;
    int i=1;
    a=pyt("Podaj bok prostokata: ");
    while(i<=a)
    {
        if(i==1 || i==2)
        {
            for(int b=1; b<=a; b++)
            std::cout<<"*";
        }
        std::cout<<"\n";
            i++;
        }
    return 0;
}