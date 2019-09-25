#include "Dealer.h"
Dealer::Dealer()
{
	m_button = 0;
	m_Action = 0;
	m_NextCard = 0;
	m_startDeal = true;
	m_stopDeal = false;
}
Dealer::~Dealer()
{
}
void Dealer::setStarthand(ObjectBase* nowActor, int dealcard, int * handcardNumber, int* handcardSuit,Card* card,Deck* deck)
{
	if (handcardNumber[(dealcard % 4)] == 0)
	{
		if (deck->CheckDeck(dealcard, dealcard) == 1)
		{
			handcardNumber[(dealcard % 4)] = card[dealcard].getNumber();
			handcardSuit[(dealcard % 4)] = card[dealcard].getSuit();
			deck->useDeck(dealcard, dealcard);
			card->SetPos(VGet((dealcard % 4), dealcard, (dealcard / 4)));
			printf("%d%d", nowActor->GethandNumber((dealcard % 4), handcardNumber), nowActor->GethandSuit((dealcard % 4), handcardSuit));
			m_NextCard++;
		}
	}
}
void Dealer::setNextCard(ObjectBase* nowActor, int dealcard, int handcardNumber, int handcardSuit, Card* card,Deck* deck)
{
	if (handcardNumber == 0)
	{
		if (deck->CheckDeck(dealcard, dealcard) == 1)
		{
			handcardNumber = card[dealcard].getNumber();
			handcardSuit = card[dealcard].getSuit();
			deck->useDeck(dealcard, dealcard);
			card->SetPos(VGet(5.0f, 5.0f, 5.0f));
			printf("%d%d", nowActor->GethandNumber(handcardNumber), nowActor->GethandSuit(handcardSuit));
			m_NextCard++;
		}
	}
}
void Dealer::Update()
{
	if (m_stopDeal == false && m_stopDealnext == false)
	{
		if (m_startDeal == true)
		{
			for (int i = 0; i < 20; i++)
			{
				//ここはすべて配ってから止まる
				m_Action = m_button;
				m_Action = (i % 4) + m_button;
				actionShift();
				setStarthand(ActionActor, i, ActionActor->Getstartnumber(), ActionActor->Getstartsuit(), card, deck);
				m_startDeal = false;
			}
			m_stopDeal = true;
		}
		else
		{
			//ここは一枚ごとに止まる
			actionShift();
			setNextCard(ActionActor, m_NextCard, ActionActor->Getnextnumber(), ActionActor->Getnextsuit(), card, deck);
			//stopdeal
			m_stopDealnext = true;
		}
	}
	if (m_startDeal == true)
	{
		m_stopDeal = selectedcard(deck);
	}
	if (m_stopDealnext == true)
	{
		m_stopDealnext = selectedcard(deck, m_NextCard);
	}
}
void Dealer::actionShift()
{
	if (m_Action == 0)
	{
		ActionActor = player;
		//一応player
	}
	if (m_Action == 1)
	{
		ActionActor = enemy[0];
		//エネミー１
	}
	if (m_Action == 2)
	{
		ActionActor = enemy[1];
		//エネミー２
	}
	if (m_Action == 3)
	{
		ActionActor = enemy[2];
		//エネミー３
	}
}
bool Dealer::selectedcard(Deck* deck)
{
	int count = 0;
	for (int i = 0; i < 20; i++)
	{
		if (deck->CheckDeck(i, i) == 3)
		{
			count++;
		}
	}
	if (count == 20)
	{
		return false;
	}
	return true;
}
bool Dealer::selectedcard(Deck * deck, int dealcard)
{
	bool check = false;
	if (deck->CheckDeck(dealcard - 1, dealcard - 1) == 3)
	{
		check = true;
	}
	if (check == true)
	{
		return false;
	}
	return true;
}