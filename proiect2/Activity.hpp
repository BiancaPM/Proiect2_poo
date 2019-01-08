#pragma once
#include<stdio.h>
#include<string>
#include "Room.hpp"
#include "Person.hpp"
class Activity {

protected:
	Room* mLocation;
	Person* mOwner;
	std::string mDescription;
public:
	void set_Location(Room *);
	void set_Owner(Person *);
	friend std::ostream& operator<<(std::ostream& out, Activity& Act);
};
