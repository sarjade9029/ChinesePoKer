#pragma once
#include "DxLib.h"
#include "Card.h"
#include "CardManager.h"

class CardManager;
class Card;

//�f�b�L�͕������݂���\��������̂ł�����card�̃��f����ǂݍ���ł���Ɖ��x���ǂݍ���ł��܂����ƂɂȂ�
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
	int CheckDeck(int number, int suit);//0���݂��Ă��Ȃ�,1���g�p�������݂��Ă���,2�g�p���ő��݂��Ă���,3�g�p���ł��ď�ɂ���,4�g�p�ς݂ő��݂��Ă���
	void Update();
	Card* card[52];
private:
	int m_oneDeck[5][14];//0~4,0~13
};

