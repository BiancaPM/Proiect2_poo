#include "pch.h"
#include "TeachActivity.hpp"

TeachActivity::TeachActivity(std::string desc, Person * own, Room * rm)
{
	mDescription = desc;
	mOwner = own;
	mLocation = rm;
}
