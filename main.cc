#include <iostream>
#include <string>
#include <fstream>
#include "User.h"

int main (int argc, char* argv[]) {
	std::string name0 = "Maxx";
	User user0(name0);

	std::string nameG = user0.getName();
	std::cout << nameG << std::endl;

	int id = 0;
	std::string type = "cash";
	float value = 10;
	std::string note = "paid 2 cups/day";

	Transaction trans0(id,type,value,note);

	int idG = trans0.getId();
	std::string typeG = trans0.getType();
	float valueG = trans0.getValue();
	std::string noteG = trans0.getNote();

	std::cout << idG << std::endl;
	std::cout << typeG << std::endl;
	std::cout << valueG << std::endl;
	std::cout << noteG << std::endl;

	return 0;
}
