#include "World.h"
#include "Destination.h"
#include "Player.h"
#include "Monster.h"


UWorld::UWorld()
{
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
