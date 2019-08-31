#include "ObjectBase.h"



ObjectBase::ObjectBase()
{
	hiHandNumber[5] = 0;
	middleHandNumber[5] = 0;
	lowHandNumber[3] = 0;
	hiHandSuit[5] = 0;
	middleHandSuit[5] = 0;
	lowHandSuit[3] = 0;
	startHandNumber[5] = 0;
	startHandSuit[3] = 0;
	nextHandNumber = 0;
	nextHandSuit = 0;
}


ObjectBase::~ObjectBase()
{
}

int ObjectBase::GethandNumber(int handcardNumber)
{
	return handcardNumber;
}

int ObjectBase::GethandNumber(int n, int* handcardNumber)
{
	return handcardNumber[n];
}

int ObjectBase::GethandSuit(int handcardSuit)
{
	return handcardSuit;
}

int ObjectBase::GethandSuit(int n, int* handcardSuit)
{
	return handcardSuit[n];
}

void ObjectBase::SethandNumber(int i, int n, int* handcardNumber)
{
	handcardNumber[i] = n;
}

void ObjectBase::SethandSuit(int i, int n, int* handcardSuit)
{
	handcardSuit[i] = n;
}

void ObjectBase::setSelectMyHnad(int *handcardNumber, int* handcardSuit)
{
	for (int i = 0; i < 4; i++)
	{
		if (handcardNumber[i] == 0)
		{
			SethandNumber(i, nextHandNumber, handcardNumber);
			SethandSuit(i, nextHandSuit, handcardSuit);
			printf("%d枚目に,ポインタ%p,number%d,suit%dが入った", i, handcardNumber, nextHandNumber, nextHandSuit);
			nextHandNumber = 0;
			nextHandSuit = 0;
		}
	}
}

void ObjectBase::setSelectMyHand(int *handcardNumber, int* handcardSuit, int n)
{
	for (int i = 0; i < 4; i++)
	{
		if (handcardNumber[i] == 0)
		{
			SethandNumber(i, startHandNumber[n], handcardNumber);
			SethandSuit(i, startHandSuit[n], handcardSuit);
			printf("%d枚目のカードが%d枚目に,ポインタ%p,number%d,suit%dが入った", n, i, handcardNumber, startHandNumber[i], startHandSuit[i]);
			startHandNumber[n] = 0;
			startHandSuit[n] = 0;
		}
	}
}
