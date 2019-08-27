#pragma once
#include "Card.h"
class ObjectBase
{
public:
	ObjectBase();
	~ObjectBase();
	int GethandNumber(int handcard);
	int GethandNumber(int n,int*handcard);
	int GethandSuit(int handcard);
	int GethandSuit(int n,int* handcard);
	void SethandNumber(int i,int n,int* handcard);
	void SethandSuit(int i,int n,int* handcard);
	void setStarthand(int dealcard,Card *card);
	void setNextCard(int dealcard,Card *card);
	void setSelectMyHnad(int *handcard);
	void setSelectMyHand(int *handcard, int n);
private:
	int hiHandNumber[5];		//
	int middleHandNumber[5];	//
	int lowHandNumber[3];		//
	int hiHandSuit[5];			//
	int middleHandSuit[5];		//
	int lowHandSuit[3];			//
	int startHnadNumber[5];		//
	int startHnadSuit[5];		//
	int nextHnadNumber;			//
	int nextHnadSuit;			//
	int point;					//ˆê‡–ˆ‚ÌÀ¿“I‚ÈHP
	int Score;					//ˆêŸ•‰–ˆ‚ÌŸ”s‚ğŒˆ‚ß‚é“¾“_
};

