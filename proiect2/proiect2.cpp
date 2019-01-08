// proiect2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Role.hpp" 
#include "Room.hpp"
#include "Person.hpp"
#include <iostream>
#include "TeachActivity.hpp"
#include "PersonRepository.hpp"
#include "RoomRepository.hpp"




int main()
{
	Person *ob = new Person("bianca.p@gmail.com", "P", "Bianca", "12345");
	Room *r = new Room(110, 1);
	TeachActivity * ac = new TeachActivity("curs poo", ob, r);
	PersonRepository pers;
	RoomRepository room;
	pers.adding(ob);
	std::cout << *(pers.l_add());
	room.adding(r);

    std::cout << *ac; 
}


