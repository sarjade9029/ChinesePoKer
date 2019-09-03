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
	const VECTOR& GetPos()const { return m_pos; }
	void SetPos(const VECTOR set) { m_pos = set; }
	int getNumber() { return m_number; }
	int getSuit() { return m_suit; }
private:
	int m_number;			//�i���o�[�ő��13������A
	int m_suit;	//�X�[�g�A�}�[�N�̂��ƃX�y�[�h����ԋ���
	VECTOR m_pos;
	int m_modelHundle;	//���f���̊i�[
};