#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <fstream>
#include <string>

class Transaction {
	public:
		Transaction(int id, std::string type, float value, std::string note);
		~Transaction();

		int getId();
		std::string getType();
		float getValue();
		std::string getNote();

	private:
		int id_;
		std::string type_;
		float value_;
		std::string note_;
};

#endif
