#include "Dealer.h"

Dealer::Dealer()
{
	button = 0;
	Action = 0;
}
Dealer::~Dealer()
{
}
void Dealer::setStarthand(ObjectBase* nowActor, int dealcard, int * handcardNumber, int*handcardSuit,Card*card)
{
	//基本複数枚配るのは最初の一回のみ
	for (int i = 0; i < 4; i++)
	{
		if (handcardNumber[i] == 0)
		{
			handcardNumber[i] = card[dealcard].getNumber();
			handcardSuit[i] = card[dealcard].getSuit();
			printf("%d%d", nowActor->GethandNumber(i, handcardNumber), nowActor->GethandSuit(i, handcardSuit));
		}
	}
}

void Dealer::setNextCard(ObjectBase* nowActor, int dealcard, int handcardNumber, int handcardSuit, Card*card)
{
	handcardNumber = card[dealcard].getNumber();
	handcardSuit = card[dealcard].getSuit();
	printf("%d%d", nowActor->GethandNumber(handcardNumber), nowActor->GethandSuit(handcardSuit));
}

void Dealer::Update()
{
	Action = button;
	if (Action == 0)
	{
		//ActionActor = 
		//一応player
	}
	if (Action == 1)
	{
		//エネミー１
	}
	if (Action == 2)
	{
		//エネミー２
	}
	if (Action == 3)
	{
		//エネミー３
	}
	for (int i = 0; i < 20; i++)
	{
		setStarthand(ActionActor, i, ActionActor->Gethinumber(), ActionActor->Gethisuit(),);

	}
}
