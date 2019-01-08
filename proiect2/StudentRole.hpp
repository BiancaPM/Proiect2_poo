#pragma once
#include<stdio.h>
#include<string>
#include "Role.hpp"
class StudentRole: public Role{
	int mGroup;
public:
	StudentRole();
	void set_mGroup(int);
	int get_mGroup();
	};
