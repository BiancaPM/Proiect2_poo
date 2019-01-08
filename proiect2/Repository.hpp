#pragma once
#include "Role.hpp"
#include <stdlib.h>

template<class Type>
class Repository {
public:
	Repository();
	void adding(Type*);
	Type* l_add();
	void del(int);
protected:
	Type** mVector;
	int mSizeV;

};

template<class Type>
inline Repository<Type>::Repository()
{
	mVector = 0;
	mSizeV = 0;
}

template<class Type>
inline void Repository<Type>::adding(Type * ob)
{
	mVector = (Type**)realloc(mVector, sizeof(Type*) * (mSizeV + 1));//realocam spatiu de tip Type*
	mVector[mSizeV++] = ob;
}

template<class Type>
inline Type * Repository<Type>::l_add()
{
	return mVector[mSizeV-1];//merge de la 0
}

template<class Type>
inline void Repository<Type>::del(int position)
{
	if (position < mSizeV)
	{
		delete mVector[position];//il sterge din memorie
		for (int j = position; j < mSizeV - 1; j++)
			mVector[j] = mVector[j + 1];
		mSizeV--;

	}
	else throw std::invalid_argument("Eroare");
}
