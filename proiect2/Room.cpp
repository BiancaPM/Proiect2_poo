#include "pch.h"
#include "Room.hpp"

Room::Room(int Nr, int Fl)
{
	mRoomNr = Nr;
	mFloor = Fl;
}

void Room::set_RoomNr(int Nr)
{
	mRoomNr = Nr;
}

void Room::set_Floor(int Fl)
{
	mFloor = Fl;
}

int Room::get_RoomNr()
{
	return mRoomNr;
}

int Room::get_Floor()
{
	return mFloor;
}
