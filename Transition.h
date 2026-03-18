#pragma once
#include <string>
using namespace std;

class UTransition
{
public:
	UTransition();
	~UTransition();

	int CurrentState;
	string Condition;
	int NextState;
};

