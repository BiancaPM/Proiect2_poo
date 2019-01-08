#pragma once
#include "Person.hpp"
#include "Repository.hpp"
class PersonRepository: public Repository<Person>{
public:
	Person* FindmCnp(std::string);
	void DelmCnp(std::string);
};
