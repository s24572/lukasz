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
    a=pyt("Podaj bok kwadratu: ");
    while(i<=a)
    {
        if(i==1 || i==a)
        {
            for(int b=1; b<=a; b++)
            std::cout<<"*";
        }else
    {
        std::cout<<"*";
        for(int c=1;c<=a-2;c++)
        std::cout<<" ";
        std::cout<<"*";
    }
    std::cout<<"\n";
            i++;
        }
    return 0;
}