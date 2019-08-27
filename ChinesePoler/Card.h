#pragma once
#include "DxLib.h"
#include "Deck.h"

class Deck;

class Card
{
public:
	Card(Deck* deck,int num, int suitnum,int SorceModelHundle,VECTOR Pos);
	~Card();
	void showCard();	//カードを見る
	void Draw();//描画
	void Update();//位置
	const VECTOR& GetPos()const { return pos; }
	void SetPos(const VECTOR set) { pos = set; }
	int getNumber() { return number; }
	int getSuit() { return suit; }
private:
	int number;			//ナンバー最大は13強さはA
	int suit;	//スート、マークのことスペードが一番強い
	VECTOR pos;
	int modelHundle;	//モデルの格納
};