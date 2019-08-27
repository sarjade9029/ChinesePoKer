#include "ObjectBase.h"



ObjectBase::ObjectBase()
{
	hiHandNumber[5] = 0;
	middleHandNumber[5] = 0;
	lowHandNumber[3] = 0;
	hiHandSuit[5] = 0;
	middleHandSuit[5] = 0;
	lowHandSuit[3] = 0;
	startHnadNumber[5] = 0;
	startHnadSuit[3] = 0;
	nextHnadNumber = 0;
	nextHnadSuit = 0;
}


ObjectBase::~ObjectBase()
{
}

int ObjectBase::GethandNumber(int handcard)
{
	return handcard;
}

int ObjectBase::GethandNumber(int n, int* handcard)
{
	return handcard[n];
}

int ObjectBase::GethandSuit(int handcard)
{
	return handcard;
}

int ObjectBase::GethandSuit(int n, int* handcard)
{
	return handcard[n];
}

void ObjectBase::SethandNumber(int i, int n, int* handcard)
{
	handcard[i] = n;
}

void ObjectBase::SethandSuit(int i, int n, int* handcard)
{
	handcard[i] = n;
}

void ObjectBase::setStarthand(int dealcard, Card *card)
{
	//基本複数枚配るのは最初の一回のみ
	for (int i = 0; i < 4; i++)
	{
		if (startHnadNumber[i] == 0)
		{
			startHnadNumber[i] = card[dealcard].getNumber();
			startHnadSuit[i] = card[dealcard].getSuit();
			printf("%d%d", GethandNumber(i, startHnadNumber),GethandSuit(i, startHnadSuit));
		}
	}
}

void ObjectBase::setNextCard(int dealcard, Card * card)
{
	nextHnadNumber = card[dealcard].getNumber();
	nextHnadSuit = card[dealcard].getSuit();
	printf("%d%d", GethandNumber(nextHnadNumber), GethandSuit(nextHnadSuit));
}

void ObjectBase::setSelectMyHnad(int * handcard)
{
	for (int i = 0; i < 4; i++)
	{
		if (handcard[i] == 0)
		{
			SethandNumber(i, nextHnadNumber, handcard);
			SethandSuit(i, nextHnadSuit, handcard);
			printf("%d枚目に,ポインタ%p,number%d,suit%dが入った", i, handcard, nextHnadNumber, nextHnadSuit);
			nextHnadNumber = 0;
			nextHnadSuit = 0;
		}
	}
}

void ObjectBase::setSelectMyHand(int * handcard, int n)
{
	for (int i = 0; i < 4; i++)
	{
		if (handcard[i] == 0)
		{
			SethandNumber(i, startHnadNumber[n], handcard);
			SethandSuit(i, startHnadSuit[n], handcard);
			printf("%d枚目のカードが%d枚目に,ポインタ%p,number%d,suit%dが入った", n, i, handcard, startHnadNumber[i], startHnadSuit[i]);
			startHnadNumber[n] = 0;
			startHnadSuit[n] = 0;
		}
	}
}
