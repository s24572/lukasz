#include <iostream>
#include <string>

auto ask_user_for_integer ( std::string const prompt ) -> int
{
if ( not prompt.empty ()) {
std::cout << prompt ;
}
auto value = std::string {};
std::getline ( std::cin , value );
return std::stoi ( value );
}

auto main () -> int 
{
        auto const a = ask_user_for_integer("a=");
        auto const b = ask_user_for_integer("b=");
        auto const c = ask_user_for_integer("c=");

if(a>b && a>c){
std::cout <<"Najwieksza jest liczba a = " << a;
}
else if(b>a && b>c){
std::cout <<"Najwieksza jest liczba b = " << b;
}
else{
std::cout <<"Najwieksza jest liczba c = " << c;
}

return 0;
}
