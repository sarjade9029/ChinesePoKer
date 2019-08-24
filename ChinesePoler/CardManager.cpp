#include "CardManager.h"

CardManager::CardManager()
{
	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 14; j++)
		{
			//モデルの初期化
			cardModel[i][j] = 0;
			//デッキの初期化
			deck[MAX_DECK] = NULL;
		}
	}
}
CardManager::~CardManager()
{
	for (int i = 0; i < (useDeck+1); i++)
	{
		//カードの状態の削除
		delete(deck[i]);
		deck[i] = NULL;
	}
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 14; j++)
		{
			//モデルの削除
			MV1DeleteModel(cardModel[i][j]);
		}
	}
}

void CardManager::CreatCard()
{
	//モデル読み込み
	char filename[256];
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 14; j++)
		{
			//data内のxファイルのx番を読む
			sprintf_s(filename, "data/%d/%d.mqo", i, j);
			//モデルの読み込み
			cardModel[i][j] = MV1LoadModel(filename);
		}
	}
	for (int i = 1; i < (useDeck+1); i++)
	{
		if (i == 0)
		{
			printf("error creatDeck\n");
		}
		deck[i] = new Deck(this);
	}
}

void CardManager::Draw()
{
	for (int i = 1; i < (useDeck+1); i++)
	{
		deck[i]->Draw();
	}
}

void CardManager::Update()
{
	for (int i = 1; i < (useDeck + 1); i++)
	{
		deck[i]->Update();
	}
}
