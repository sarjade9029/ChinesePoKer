#include "CardManager.h"
CardManager::CardManager()
{
	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 14; j++)
		{
			//���f���̏�����
			m_cardModel[i][j] = 0;
			//�f�b�L�̏�����
			deck[MAX_DECK] = NULL;
		}
	}
}
CardManager::~CardManager()
{
	for (int i = 0; i < (m_useDeck+1); i++)
	{
		//�J�[�h�̏�Ԃ̍폜
		delete(deck[i]);
		deck[i] = NULL;
	}
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 14; j++)
		{
			//���f���̍폜
			MV1DeleteModel(m_cardModel[i][j]);
		}
	}
}
void CardManager::CreatCard()
{
	//���f���ǂݍ���
	char filename[256];
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 14; j++)
		{
			//data����x�t�@�C����x�Ԃ�ǂ�
			sprintf_s(filename, "data/%d/%d.mqo", i, j);
			//���f���̓ǂݍ���
			m_cardModel[i][j] = MV1LoadModel(filename);
		}
	}
	for (int i = 1; i < (m_useDeck+1); i++)
	{
		if (i == 0)
		{
			printf("error creatDeck\n");
		}
		//�f�b�L�̐��� ���ꂪ�������ꂽ���_�ŁA�J�[�h�����������
		deck[i] = new Deck(this);
	}
}
void CardManager::Draw()
{
	for (int i = 1; i < (m_useDeck+1); i++)
	{
		deck[i]->Draw();
	}
}
void CardManager::Update()
{
	for (int i = 1; i < (m_useDeck + 1); i++)
	{
		deck[i]->Update();
	}
}