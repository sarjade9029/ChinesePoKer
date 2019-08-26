#include "ObjectBase.h"



ObjectBase::ObjectBase()
{
}


ObjectBase::~ObjectBase()
{
}

int ObjectBase::GethandNumber(int n)
{
	return handNumber[n];
}

int ObjectBase::GethandSuit(int n)
{
	return handSuit[n];
}

void ObjectBase::SethandNumber(int i, int n)
{
	handNumber[i] = n;
}

void ObjectBase::SethandSuit(int i, int n)
{
	handSuit[i] = n;
}



