/*CSCI 182 - Baseball Assignment
Baseball.cpp


Landon Reekstin
v1.0 2/18/2020 */


#include <iostream>
#include <iomanip>
#include <fstream>
#include "Player.h"

#define MAX_PLAYER_COUNT 15

using namespace std;



int main()
{
	// Start by reading in the files
	ifstream inFile;

	inFile.open("BoxScore.txt");
	if (!inFile) {
		cout << "Unable to open file";
		exit(1); // terminate with error
	}


	Player Team[MAX_PLAYER_COUNT];

	// Put all the player names into an array, then print them to the screen
	char tempName[80];
	int nHits;
	int nWalks;
	int nOuts;
	float nBattingAvg;
	int importCount = 0;

	// Read the input file for each player
	while (!inFile.eof() && importCount < MAX_PLAYER_COUNT) {
		// Read in line
		inFile >> tempName >> nHits >> nWalks >> nOuts >> nBattingAvg;


		// Write to Fleet's Structure here
		Team[importCount].playerName = tempName;
		Team[importCount].hits = nHits;
		Team[importCount].walks = nWalks;
		Team[importCount].outs = nOuts;
		Team[importCount].battingAvg = nBattingAvg;

		importCount++;
	}
	// Close the input file
	inFile.close();

	for (int i = 0; i < MAX_PLAYER_COUNT; i++)
	{
		cout << Team[i].playerName << " " << Team[i].hits << " " << Team[i].walks << " " << Team[i].outs << " " << Team[i].battingAvg << endl;
	}

}
