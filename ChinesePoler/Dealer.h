#pragma once
#include "DxLib.h"
#include "ObjectBase.h"
#include "Player.h"
#include "Enemy.h"
#include "Card.h"
#include "Deck.h"
//�{�^���̈ʒu�̎�����
//�ꖇ�Â��ɔz��
//�Œ��l�ō��l�l�l�����ܖ����݂Ŕz��
//�L�����ւ̃A�N�Z�X���K�{
//update�Ŕz��
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

