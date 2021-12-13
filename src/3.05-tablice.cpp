#include <iostream>
#include <algorithm>

auto amax(int a[], int n) -> int
{
    int najwieksza;
    std::sort(a,a+10);
    najwieksza = a[9];
    std::cout <<"Najwieksza liczba to \n>>" << najwieksza;
    return najwieksza;
}

auto main() -> int
{
    int tab[10] {32, 231 ,54, 3 , 52 ,-5, 58, 2 ,35, 8};
    amax(tab,1);
    
return 0;
}