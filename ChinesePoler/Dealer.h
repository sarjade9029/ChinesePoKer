#pragma once
#include "DxLib.h"
#include "ObjectBase.h"
#include "Player.h"
#include "Computer.h"
#include "Card.h"
//�{�^���̈ʒu�̎�����
//�ꖇ�Â��ɔz��
//�Œ��l�ō��l�l�l�����ܖ����݂Ŕz��
//�L�����ւ̃A�N�Z�X���K�{
//update�Ŕz��

class Dealer
{
public:
	Dealer();
	~Dealer();
	void setStarthand(ObjectBase* nowActor, int dealcard, int * handcardNumber, int*handcardSuit, Card*card);
	void setNextCard(ObjectBase* nowActor, int dealcard, int handcardNumber, int handcardSuit, Card*card);
	void Update();
private:
	int card[52];
	int button;
	int Action;
	ObjectBase* ActionActor;
};

