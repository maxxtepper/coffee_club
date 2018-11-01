#ifndef USER_H
#define USER_H

#include <iostream>
#include <fstream>
#include <string>
#include "Transaction.h"

class User {
	public:
		User(std::string name);
		~User();

		std::string getName();
		Transaction getTransaction(int id);
	private:
		std::string name_;
};

#endif
