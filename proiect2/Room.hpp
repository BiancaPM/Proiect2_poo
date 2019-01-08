#pragma once
#include <iostream>
#include <cstdio>
class Room {
	int mRoomNr, mFloor;
public:
	Room(int, int);
	void set_RoomNr(int);
	void set_Floor(int);
	int get_RoomNr();
	int get_Floor();
	friend std::ostream& operator<<(std::ostream& out, Room& room);
};