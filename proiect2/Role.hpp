#pragma once
#include<stdio.h>
#include<string>
typedef enum {
	STUDENT_ROLE,TEACHER_ROLE,GUEST_ROLE,ADMINISTRATION_ROLE
}RoleType;
class Role {
protected:
	std::string _mName, _mType;
public:
	Role(RoleType type): _mType(type){}//constructor
	~Role //destructor
	string get_mName() {
		return this->_mName;
	}
	void set_mName() {
		this->_mName=
	}
	string get_mType()
	{
		return this->_Mtype
	}
	Role &operator>>

	
};
