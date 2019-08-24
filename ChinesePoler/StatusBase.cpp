#include "StatusBase.h"



StatusBase::StatusBase()
{
}


StatusBase::~StatusBase()
{
}

int StatusBase::GethandNumber(int n)
{
	return handNumber[n];
}

int StatusBase::GethandSuit(int n)
{
	return handSuit[n];
}

void StatusBase::SethandNumber(int i, int n)
{
	handNumber[i] = n;
}

void StatusBase::SethandSuit(int i, int n)
{
	handSuit[i] = n;
}



