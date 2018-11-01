#include "User.h"

User::User(std::string name) {
	name_ = name;
}

User::~User() {
}

std::string User::getName() {
	return name_;
}
