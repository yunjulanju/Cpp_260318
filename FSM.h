#pragma once
#include <string>

using namespace std;

class UState;
class UTransition;

class UFSM
{
public:
	UFSM();
	~UFSM();

	UState* States; //주소값만 저장해
	UTransition* Transitions;

	void Process(int CurrentState, string CurrentCondition);

	string GetStateName(int InID);

};

