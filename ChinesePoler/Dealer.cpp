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
	//��{�������z��͍̂ŏ��̈��̂�
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
		//�ꉞplayer
	}
	if (Action == 1)
	{
		//�G�l�~�[�P
	}
	if (Action == 2)
	{
		//�G�l�~�[�Q
	}
	if (Action == 3)
	{
		//�G�l�~�[�R
	}
	for (int i = 0; i < 20; i++)
	{
		setStarthand(ActionActor, i, ActionActor->Gethinumber(), ActionActor->Gethisuit(),);

	}
}
