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
	const VECTOR& GetPos()const { return m_pos; }
	void SetPos(const VECTOR set) { m_pos = set; }
	int getNumber() { return m_number; }
	int getSuit() { return m_suit; }
private:
	int m_number;			//ナンバー最大は13強さはA
	int m_suit;	//スート、マークのことスペードが一番強い
	VECTOR m_pos;
	int m_modelHundle;	//モデルの格納
};