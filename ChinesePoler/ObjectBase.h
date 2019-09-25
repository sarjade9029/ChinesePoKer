#pragma once
#include "Card.h"
class ObjectBase
{
public:
	ObjectBase();
	~ObjectBase();
	int GethandNumber(int handcardNumber);
	int GethandNumber(int n, int*handcardNumber);
	int GethandSuit(int handcardSuit);
	int GethandSuit(int n, int* handcardSuit);
	void SethandNumber(int i,int n,int* handcardNumber);
	void SethandSuit(int i,int n,int* handcardSuit);
	void setSelectMyHnad(int *handcardNumber,int* handcardSuit);
	void setSelectMyHand(int *handcardNumber,int* handcardSuit, int n);
	int* Getstartnumber() { return m_startHandNumber; }
	int* Getstartsuit() { return m_startHandSuit; }
	int Getnextnumber() { return m_nextHandNumber; }
	int Getnextsuit() { return m_nextHandSuit; }
protected:
	int m_hiHandNumber[5];			//
	int m_middleHandNumber[5];		//
	int m_lowHandNumber[3];			//
	int m_hiHandSuit[5];			//
	int m_middleHandSuit[5];		//
	int m_lowHandSuit[3];			//
	int m_startHandNumber[5];		//
	int m_startHandSuit[5];			//
	int m_nextHandNumber;			//
	int m_nextHandSuit;				//
	int m_point;					//ˆê‡–ˆ‚ÌÀ¿“I‚ÈHP
	int m_Score;					//ˆêŸ•‰–ˆ‚ÌŸ”s‚ğŒˆ‚ß‚é“¾“_
	int m_wins;						//
};