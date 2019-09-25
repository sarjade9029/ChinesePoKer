#include "Deck.h"
Deck::Deck(CardManager* cardmanager)
{
	//�J�[�h�̏�Ԃ�������
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 14; j++)
		{
			if (i == 0 || j == 0)
			{
				printf("error deckinit\n");
				break;
			}
			m_oneDeck[i][j] = 0;
		}
	}
	for (int i = 0; i < 52; i++)
	{
		//�J�[�h�̐���
		card[i] = new Card(this, i % 13 + 1, i / 13 + 1, cardmanager->GetModel(i / 13 + 1, i % 13 + 1),VGet(i*2,i*0.1,0));
	}
}
Deck::~Deck()
{
	//�J�[�h�̍폜
	for (int i = 1; i < 52; i++)
	{
		delete(card[i]);
		card[i] = NULL;
	}
}
//���݂��Ă��邩�ǂ������`�F�b�N���Ă��琶��������
void Deck::CreatDeck(int number, int suit)
{
	m_oneDeck[suit][number] = 1;
}
void Deck::useDeck(int number, int suit)
{
	m_oneDeck[suit][number] = 2;
}
void Deck::putDeck(int number, int suit)
{
	m_oneDeck[suit][number] = 3;
}
void Deck::usedDeck(int number, int suit)
{
	m_oneDeck[suit][number] = 4;
}
void Deck::Draw()
{
	for (int i = 1; i < 52; i++)
	{
			card[i]->Draw();
	}
}
int Deck::CheckDeck(int number, int suit)
{
	//number��suit��0�Ȃ�΂���ȃJ�[�h�͑��݂��Ȃ��̂�-1��Ԃ�
	if (number == 0 || suit == 0)
	{
		printf("CheckDeck Error:�J�[�h�̃i���o�[���X�[�g��0�ł�\n");
		return -1;
	}
	//�J�[�h�����݂��Ă��Ȃ���Ԃł���0�̎��̓J�[�h�������ł���̂�0��Ԃ�
	if (m_oneDeck[suit][number] == 0)
	{
		printf("Deck Check Clear: %d,%d Creat Card\n",suit,number);
		return 0;
	}
	//�J�[�h�����݂��Ă����Ԃɂ���ĕԂ��l���ς��
	if (m_oneDeck[suit][number] == 1 || m_oneDeck[suit][number] == 2 || m_oneDeck[suit][number] == 3 || m_oneDeck[suit][number] == 4)
	{
		printf("Deck Check Exist:Deck in this Card Created\n");
		return m_oneDeck[suit][number];
	}
	//�����܂ŗ����牽�����������̂��킩��Ȃ��̂łƂ肠����-1��Ԃ�
	printf("Deck Check Error:NotExists suit:%d,number:%d,deck:%d\n",suit,number,m_oneDeck[suit][number]);
	return -1;
}
void Deck::Update()
{
	for (int i = 1; i < 52; i++)
	{
			card[i]->Update();
	}
}