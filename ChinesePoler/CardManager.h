#pragma once
#include "DxLib.h"
#include <stdio.h>
#include "Card.h"
#include "Deck.h"
class Deck;
#define MAX_DECK 7
class CardManager
{
public:
	CardManager();
	~CardManager();
	void CreatCard();
	void Draw();
	void Update();
	int GetModel(int suit, int number) { return m_cardModel[suit][number]; }
	int GetDeckNumber() { return m_useDeck; }
private:
	int m_cardModel[5][14];
	int m_useDeck = 1;//0ÇÕç≈èâ
	Deck* deck[MAX_DECK];
};

