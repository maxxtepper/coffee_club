#ifndef USER_H
#define USER_H

#include <iostream>
#include <fstream>
#include <string>

class User {
	public:
		User(std::string name);
		~User();

		std::string getName();
	private:
		std::string name_;
};

#endif
