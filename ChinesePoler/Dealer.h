#pragma once
#include "DxLib.h"
#include "ObjectBase.h"
#include "Player.h"
#include "Enemy.h"
#include "Card.h"
#include "Deck.h"
class Card* card;
class Deck* deck;
class Player* player;
class Enemy* enemy[3];
class Dealer
{
public:
	Dealer();
	~Dealer();
	void setStarthand(ObjectBase* nowActor, int dealcard, int * handcardNumber, int* handcardSuit, Card* card,Deck* deck);
	void setNextCard(ObjectBase* nowActor, int dealcard, int handcardNumber, int handcardSuit, Card* card,Deck* deck);
	void Update();
	void actionShift();
	bool selectedcard(Deck* deck);
	bool selectedcard(Deck* deck,int dealcard);
private:
	int m_button;
	int m_Action;
	int m_NextCard;
	bool m_startDeal;
	bool m_stopDeal;
	bool m_stopDealnext;
	ObjectBase* ActionActor;
	ObjectBase* prevActionActor;
};