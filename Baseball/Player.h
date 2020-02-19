#pragma once
#include <iostream>

using namespace std;

class Player
{
public: 
	string playerName;
	int hits;
	int walks;
	int outs;
	float battingAvg = hits / (walks + hits);
};

