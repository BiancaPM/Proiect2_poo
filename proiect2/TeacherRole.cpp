#include "pch.h"
#include "TeacherRole.hpp"

TeacherRole::TeacherRole(): Role(TEACHER_ROLE)
{
}

void TeacherRole::set_mSubject(std::string Subj)
{
	mSubject = Subj;
}

std::string TeacherRole::get_mSubject()
{
	return mSubject;
}
