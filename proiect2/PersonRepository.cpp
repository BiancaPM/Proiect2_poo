#include "pch.h"
#include "PersonRepository.hpp"

Person * PersonRepository::FindmCnp(std::string cnp)
{
	for (int i = 0; i < mSizeV; i++)
		if (mVector[i]->get_mCnp == cnp)
			return mVector[i];

	throw std::invalid_argument("nu exista cnp");
}

void PersonRepository::DelmCnp(std::string cnp)
{
	int poz = 0;
	for(int i=0;i<mSizeV;i++)
		if (mVector[i]->get_mCnp == cnp)
		{
			poz = i;
			break;
		}
	del(poz);
}
