#include "ObjectBase.h"



ObjectBase::ObjectBase()
{
}


ObjectBase::~ObjectBase()
{
}

int ObjectBase::GethandNumber(int n, int* handcard)
{
	return handcard[n];
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



