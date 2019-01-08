#include "pch.h"
#include "StudentRole.hpp"

StudentRole::StudentRole():Role(STUDENT_ROLE)
{
}

void StudentRole::set_mGroup(int gr)
{
	mGroup = gr;
}

int StudentRole::get_mGroup()
{
	return mGroup;
}
