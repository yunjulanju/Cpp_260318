#pragma once

class UPlayer;
class UMonster;
class UDestination;

class UWorld
{
public:
	UWorld();
	~UWorld();

	char Wall = '*';
	char Floor = ' ';
	UDestination* Destinations;

	UPlayer* Players;
	UMonster* Monsters;

	int XSize = 10;
	int YSize = 10;

	void GameOver();
};

