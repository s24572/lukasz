#include <iostream>
#include <algorithm>

auto amin(int a[], int n) -> int
{
    int najmniejsza;
    std::sort(a,a+10);
    najmniejsza = a[0];
    std::cout <<"Najmniejsza liczba to \n>>" << najmniejsza;
    return najmniejsza;
}

auto main() -> int
{
    int tab[10] {32, 231 ,54, 3 , 52 ,-5, 58, 2 ,35, 8};
    amin(tab,1);
    
return 0;
}