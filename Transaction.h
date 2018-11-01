#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <fstream>
#include <string>

class Transaction {
	public:
		Transaction(std::string type, float value, std::string note);
		~Transaction();

		std::string getType();
		float getValue();
		std::string getNote();

	private:
		std::string type_;
		float value_;
		std::string note_;
};

#endif
