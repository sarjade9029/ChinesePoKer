#pragma once
#include "DxLib.h"
#include "ObjectBase.h"
#include "Player.h"
#include "Computer.h"
#include "Card.h"
//ボタンの位置の次から
//一枚づつ順に配る
//最低二人最高四人人数＊五枚刻みで配る
//キャラへのアクセスが必須
//updateで配る

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

