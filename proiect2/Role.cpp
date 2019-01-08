#include "pch.h"
#include "Role.hpp"

Role::Role(RoleType Typ): _mType(Typ) {}

std::string Role::get_mName() {
	return this->_mName;
}
void Role::set_mName() {
	this->_mName;
}
RoleType Role::get_mType()
{
	return this->_mType;
}

