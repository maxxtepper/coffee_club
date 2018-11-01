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
		void addTransaction(std::string type, float value, std::string note);
		void getTransaction
	private:
		std::string name_;
};

#endif
