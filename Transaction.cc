#include "Transaction.h"

Transaction::Transaction(int id, std::string type, float value, std::string note) {
	id_ = id;
	type_ = type;
	value_ = value;
	note_ = note;
}

Transaction::~Transaction() {
}

int Transaction::getId() {
	return id_;
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
