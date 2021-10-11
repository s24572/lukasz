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
        space:

	std::cout <<"Podaj dzialanie: dodawanie to 1 , odejmowanie to 2 , mnozenie to 3, dzielenie to 4 ";
	int metoda = 0;
	std::cin >> metoda;
	
	if(metoda == 1){
	std::cout << a+b;
	}
	else if(metoda == 2 ){
	std::cout << a-b;
	}
	else if(metoda == 3 ){
	std::cout << a*b;
	}
	else if(metoda == 4 ){
	std::cout << a/b;
	}
	else {
	std::cout <<"bledna metoda podaj jeszcze raz poprawna";
	goto space;
	}
	return 0;
}
	
