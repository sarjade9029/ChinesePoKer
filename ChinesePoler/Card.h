#pragma once
#include "DxLib.h"
#include "Deck.h"

class Deck;

class Card
{
public:
	Card(Deck* deck,int num, int suitnum,int SorceModelHundle,VECTOR Pos);
	~Card();
	void showCard();	//�J�[�h������
	void Draw();//�`��
	void Update();//�ʒu
	const VECTOR& GetPos()const { return pos; }
	void SetPos(const VECTOR set) { pos = set; }
	int getNumber() { return number; }
	int getSuit() { return suit; }
private:
	int number;			//�i���o�[�ő��13������A
	int suit;	//�X�[�g�A�}�[�N�̂��ƃX�y�[�h����ԋ���
	VECTOR pos;
	int modelHundle;	//���f���̊i�[
};