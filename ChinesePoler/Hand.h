#pragma once
#include "Card.h"
#include "StatusBase.h"

class Hand
{
public:
	Hand();
	~Hand();
	
	int HighCard(StatusBase *nowActor);			//16~54		|			0
	int OnePair(StatusBase *nowActor);			//11~59		|	10~46	100
	int TowPair(StatusBase *nowActor);			//9~61		|	6~36	200
	int ThreeCard(StatusBase *nowActor);			//8~62		|	6~36	300
	int Straight(StatusBase *nowActor);			//15~55		|			400
	int flush(StatusBase *nowActor);				//8~62		|			500
	int FullHouse(StatusBase *nowActor);			//7~63		|	3~25	600
	int FourCard(StatusBase *nowActor);			//6~64		|	3~25	700
	int StraitFlush(StatusBase *nowActor);		//15~50		|			800
	int RoyalStraightFlush(StatusBase *nowActor);	//1			|			900
	int fiveCard(StatusBase *nowActor);			//5~65		|	1~13	1000
private:
	int standardScore;//100
};