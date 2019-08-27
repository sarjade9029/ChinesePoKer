#pragma once
#include "Card.h"
class ObjectBase
{
public:
	ObjectBase();
	~ObjectBase();
	int GethandNumber(int handcardNumber);
	int GethandNumber(int n,int*handcardNumber);
	int GethandSuit(int handcardSuit);
	int GethandSuit(int n,int* handcardSuit);
	int* Gethinumber() { return hiHandNumber; }
	int* Getmiddlenumber() { return middleHandNumber; }
	int* Getlownumber() { return lowHandNumber; }
	int* Gethisuit() { return hiHandSuit; }
	int* Getmiddlesuit() { return middleHandSuit; }
	int* Getlowsuit() { return lowHandSuit; }
	void SethandNumber(int i,int n,int* handcardNumber);
	void SethandSuit(int i,int n,int* handcardSuit);
	void setSelectMyHnad(int *handcardNumber,int* handcardSuit);
	void setSelectMyHand(int *handcardNumber,int* handcardSuit, int n);
private:
	int hiHandNumber[5];		//
	int middleHandNumber[5];	//
	int lowHandNumber[3];		//
	int hiHandSuit[5];			//
	int middleHandSuit[5];		//
	int lowHandSuit[3];			//
	int startHandNumber[5];		//
	int startHandSuit[5];		//
	int nextHandNumber;			//
	int nextHandSuit;			//
	int point;					//ˆê‡–ˆ‚ÌÀ¿“I‚ÈHP
	int Score;					//ˆêŸ•‰–ˆ‚ÌŸ”s‚ğŒˆ‚ß‚é“¾“_
	int wins;					//
};

