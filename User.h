#ifndef USER_H
#define USER_H

#include <fstream>
#include <string>
#include <stdio.h>

class User {
	public:
		User(std::string name);
		~User();

		std::string getName();
	private:
		std::string name_;
};

#endif
