#include <iostream>
#include <string>
#include <fstream>
#include "User.h"

int main (int argc, char* argv[]) {
	std::string name0 = "Maxx";
	User user0(name0);

	std::string nameG = user0.getName();
	std::cout << nameG << std::endl;

	return 0;
}
