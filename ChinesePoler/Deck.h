#pragma once
#include "DxLib.h"
#include "Card.h"
#include "CardManager.h"

class CardManager;
class Card;

//デッキは複数存在する可能性があるのでここでcardのモデルを読み込んでいると何度も読み込んでしまうことになる
class Deck
{
public:
	Deck(CardManager* cardmanager);
	~Deck();
	void CreatDeck(int number,int suit);
	void useDeck(int number, int suit);
	void putDeck(int number, int suit);
	void usedDeck(int number, int suit);
	void Draw();
	int CheckDeck(int number, int suit);//0存在していない,1未使用だが存在している,2使用中で存在している,3使用中でいて場にある,4使用済みで存在している
	void Update();
	Card* card[52];
private:
	int m_oneDeck[5][14];//0~4,0~13
};

