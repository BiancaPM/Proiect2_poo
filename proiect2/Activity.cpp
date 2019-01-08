#include "pch.h"
#include "Activity.hpp"
#include <iostream>
#include <cstdio>

void Activity::set_Location(Room * X)
{
	mLocation = X;
}

void Activity::set_Owner(Person * Y)
{
	mOwner = Y;
}

std::ostream & operator<<(std::ostream & out, Activity & Act)
{
	// TODO: insert return statement here
	out << *(Act.mLocation) << *(Act.mOwner) << Act.mDescription;
	return out;
}
