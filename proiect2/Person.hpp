#pragma once
#include<stdio.h>
#include<string>
#include "Role.hpp"
#include<vector>
class Person {
	std::string mEmail, mName, mLastName, mCnp;
	std::vector<Role*> mRole;
public:
	Person(std::string, std::string, std::string, std::string);
	void set_mName(std::string);
	void set_mCnp(std::string);
	void set_mEmail(std::string);
	void set_mLastName(std::string);
	void newRole(Role*);
	std::string get_mName();
	std::string get_mCnp();
	std::string get_mEmail();
	std::string get_mLastName();
	friend std::istream& operator>>(std::istream& in, Person& Pers);//functie citire
	friend std::ostream& operator<<(std::ostream& out, Person& Pers);


};
