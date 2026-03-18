#include "World.h"
#include "Destination.h"
#include "Player.h"
#include "Monster.h"
#include "Wall.h"
#include "Floor.h"


UWorld::UWorld()
{
	Walls->Shape = '*';
	Walls->X = 0;
	Walls->Y = 0;

	Floors->Shape = ' ';
	Floors->X = 1;
	Floors->Y = 1;

	Destinations->Shape = 'D';
	Destinations->X = 7;
	Destinations->Y = 8;

	Players->Shape = 'P';
	Players->X = 1;
	Players->Y = 1;

	Monsters->Shape = 'M';
	Monsters->X = 8;
	Monsters->Y = 8;

}

UWorld::~UWorld()
{

}

void UWorld::GameOver()
{
}
