#pragma once
#include<stdio.h>
#include<string>
typedef enum {
	STUDENT_ROLE,
	TEACHER_ROLE,
	GUEST_ROLE,
	ADMINISTRATION_ROLE
} RoleType;
class Role {
protected:
	std::string _mName;
	RoleType _mType;
public:
	Role(RoleType);
	std::string get_mName();
	void set_mName();
	RoleType get_mType();

	
};
