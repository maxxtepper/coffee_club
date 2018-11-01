#include "Transaction.h"

Transaction::Transaction(std::string type, float value, std::string note) {
	type_ = type;
	value_ = value;
	note_ = note;
}

Transaction::~Transaction() {
}

std::string Transaction::getType() {
	return type_;
}

float Transaction::getValue() {
	return value_;
}

std::string Transaction::getNote() {
	return note_;
}
