#include "ObjectBase.h"
ObjectBase::ObjectBase()
{
	m_hiHandNumber[5] = 0;
	m_middleHandNumber[5] = 0;
	m_lowHandNumber[3] = 0;
	m_hiHandSuit[5] = 0;
	m_middleHandSuit[5] = 0;
	m_lowHandSuit[3] = 0;
	m_startHandNumber[5] = 0;
	m_startHandSuit[3] = 0;
	m_nextHandNumber = 0;
	m_nextHandSuit = 0;
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
			SethandNumber(i, m_nextHandNumber, handcardNumber);
			SethandSuit(i, m_nextHandSuit, handcardSuit);
			printf("%d枚目に,ポインタ%p,number%d,suit%dが入った", i, handcardNumber, m_nextHandNumber, m_nextHandSuit);
			m_nextHandNumber = 0;
			m_nextHandSuit = 0;
		}
	}
}
void ObjectBase::setSelectMyHand(int *handcardNumber, int* handcardSuit, int n)
{
	for (int i = 0; i < 4; i++)
	{
		if (handcardNumber[i] == 0)
		{
			SethandNumber(i, m_startHandNumber[n], handcardNumber);
			SethandSuit(i, m_startHandSuit[n], handcardSuit);
			printf("%d枚目のカードが%d枚目に,ポインタ%p,number%d,suit%dが入った", n, i, handcardNumber, m_startHandNumber[i], m_startHandSuit[i]);
			m_startHandNumber[n] = 0;
			m_startHandSuit[n] = 0;
		}
	}
}
