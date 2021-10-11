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
	
	if((a*a+b*b) == (c*c)){
	std::cout << "Trojkat jest w porzadku";
	}
	else if((a*a+c*c) == (b*b)){
	std::cout << "Trojkat jest w porzadku";
        }
	else if((b*b+c*c) == (a*a)){
	std::cout << "Trojkat jest w porzadku";
        }
	else{
	std::cout << "Trojkat nie jest w porzadku";
	}
	return 0;
}
