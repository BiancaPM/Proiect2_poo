#include "Person.hpp"

Person::Person(std::string _mEmail, std::string _mName, std::string _mLastName, std::string _mCnp)
{
	mName = _mName;
	mEmail = _mEmail;
	mLastName = _mLastName;
	mCnp = _mCnp;

}

void Person::set_mName(std::string _mName)
{
	mName = _mName;
}

void Person::set_mCnp(std::string _mCnp)
{
	mCnp = _mCnp;
}

void Person::set_mEmail(std::string _mEmail)
{
	mEmail = _mEmail;

}

void Person::set_mLastName(std::string _mLastName)
{
	mLastName = _mLastName;
}

std::string Person::get_mName()
{
	return mName;
}

std::string Person::get_mCnp()
{
	return mCnp;
}

std::string Person::get_mEmail()
{
	return mEmail;
}

std::string Person::get_mLastName()
{
	return mLastName;
}

std::istream & operator>>(std::istream & in, Person & Pers)
{
	// TODO: insert return statement here
	in >> Pers.mEmail >> Pers.mCnp >> Pers.mLastName >> Pers.mName;
	return in;
}

std::ostream & operator<<(std::ostream & out, Person & Pers)
{
	// TODO: insert return statement here
	out << Pers.mCnp << Pers.mEmail << Pers.mLastName << Pers.mName;
	return out;
}
