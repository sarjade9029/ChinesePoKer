#pragma once
#include "Card.h"
#include "ObjectBase.h"
class Hand
{
public:
	Hand();
	~Hand();
	int HighCard                 (ObjectBase *nowActor,int* handcard);			//16~54		|			0
	int OnePair                  (ObjectBase *nowActor,int* handcard);			//11~59		|	10~46	100
	int TowPair                  (ObjectBase *nowActor,int* handcard);			//9~61		|	6~36	200
	int ThreeCard                (ObjectBase *nowActor,int* handcard);			//8~62		|	6~36	300
	int Straight                 (ObjectBase *nowActor,int* handcard);			//15~55		|			400
	int flush                    (ObjectBase *nowActor,int* handcardSuit);				//8~62		|			500
	int FullHouse                (ObjectBase *nowActor,int* handcard);			//7~63		|	3~25	600
	int FourCard                 (ObjectBase *nowActor,int* handcard);			//6~64		|	3~25	700
	int StraitFlush              (ObjectBase *nowActor,int* handcardNumber, int*handcardSuit);		//15~50		|			800
	int RoyalStraightFlush       (ObjectBase *nowActor,int* handcardNumber, int*handcardSuit);	//1			|			900
	int standardScore = 100;//100
};