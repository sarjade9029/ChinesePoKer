#pragma once
#include "DxLib.h"
#include "ObjectBase.h"
#include "Player.h"
#include "Enemy.h"
#include "Card.h"
#include "Deck.h"
//ボタンの位置の次から
//一枚づつ順に配る
//最低二人最高四人人数＊五枚刻みで配る
//キャラへのアクセスが必須
//updateで配る
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
private:
	//int card[52];
	int m_button;
	int m_Action;
	int m_NextCard;
	bool m_startDeal;
	ObjectBase* ActionActor;
	ObjectBase* prevActionActor;
};

