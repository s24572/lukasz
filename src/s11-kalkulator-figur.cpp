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
	int liczba=0;
	std::cout << "Podaj ktora figure chcesz obliczyc: trojkat = 1, prostokat = 2, trapez = 3 : ";

	if (liczba == 1) {
	std::cout << "Podaj liczbe a =";
        auto const a = ask_user_for_integer("a=");

	std::cout << "Podaj liczbe h =";
        auto const h = ask_user_for_integer("h=");
	
	std::cout<<a*h/2;
	}
	else if (liczba == 2) {
	std::cout << "Podaj liczbe a =";
        auto const a = ask_user_for_integer("a=");
	
	std::cout << "Podaj liczbe b =";
        auto const b = ask_user_for_integer("b=");
	
	std::cout<<a*b;
	}

	else if (liczba == 3) {
	std::cout << "Podaj liczbe a =";
        auto const a = ask_user_for_integer("a=");

        std::cout << "Podaj liczbe b =";
        auto const b = ask_user_for_integer("b=");

	std::cout << "Podaj liczbe h =";
        auto const h = ask_user_for_integer("h=");

	std::cout << "((a+b)*h)/2";
	}

	return 0;
}


