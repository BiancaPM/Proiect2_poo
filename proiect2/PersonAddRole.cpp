#include "pch.h"
#include "PersonAddRole.hpp"

void PersonAddRole::AddSt(Person * ob)
{
	StudentRole* rol = new StudentRole();
	ob->newRole(rol);
}

void PersonAddRole::AddTc(Person * ob)
{
	TeacherRole* rol = new TeacherRole();
	ob->newRole(rol);

}
