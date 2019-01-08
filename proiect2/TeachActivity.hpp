#pragma once
#include"Activity.hpp"
#include "Person.hpp"
#include "Room.hpp"
class TeachActivity: public Activity{
public:
	TeachActivity(std::string, Person *,Room *);

};
