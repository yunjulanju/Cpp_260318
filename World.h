#pragma once

class UPlayer;
class UMonster;
class UDestination;
class UWall;
class UFloor;

class UWorld
{
public:
	UWorld();
	~UWorld();

	UWall* Walls;
	UFloor* Floors;
	UDestination* Destinations;
	UPlayer* Players;
	UMonster* Monsters;

	int XSize = 10;
	int YSize = 10;

	void GameOver();
};

