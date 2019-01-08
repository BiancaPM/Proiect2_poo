#pragma once
#include<stdio.h>
#include<string>
#include "Role.hpp"
class TeacherRole: public Role { 
	std::string mSubject;
public:
	TeacherRole();
	void set_mSubject(std::string);
	std::string get_mSubject();
	

};
