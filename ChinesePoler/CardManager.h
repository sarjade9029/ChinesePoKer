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
	int GetModel(int suit, int number) { return cardModel[suit][number]; }
	int GetDeckNumber() { return useDeck; }
private:
	int cardModel[5][14];
	int useDeck = 1;//0ÇÕç≈èâ
	Deck* deck[MAX_DECK];
};

