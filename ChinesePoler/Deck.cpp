#include "Deck.h"

Deck::Deck(CardManager* cardmanager)
{
	//カードの状態を初期化
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 14; j++)
		{
			if (i == 0 || j == 0)
			{
				printf("error deckinit\n");
				break;
			}
			oneDeck[i][j] = 0;
		}
	}
	for (int i = 0; i < 52; i++)
	{
		//カードの状態の初期化
		card[i] = new Card(this, i % 13 + 1, i / 13 + 1, cardmanager->GetModel(i / 13 + 1, i % 13 + 1),VGet(i*2,i*0.1,0));
	}
}
Deck::~Deck()
{
	//カードの削除
	for (int i = 1; i < 52; i++)
	{
		delete(card[i]);
		card[i] = NULL;
	}
}
//存在しているかどうかをチェックしてから生成させる
void Deck::CreatDeck(int number, int suit)
{
	oneDeck[suit][number] = 1;
}
void Deck::Draw()
{
	for (int i = 1; i < 52; i++)
	{
			card[i]->Draw();
	}
}
//カードが存在しているかしていないかを取得
//存在していないなら0を返す
//存在しているならカードの状態を数値化したものを返す
//カードの状態がおかしかったり予期せぬエラーが出たときは-1を返す
int Deck::CheckDeck(int number, int suit)
{
	//numberかsuitが0ならばそんなカードは存在しないので-1を返す
	if (number == 0 || suit == 0)
	{
		printf("CheckDeck Error:カードのナンバーかスートが0です\n");
		return -1;
	}
	//カードが存在していない状態である0の時はカードが生成できるので0を返す
	if (oneDeck[suit][number] == 0)
	{
		printf("Deck Check Clear: %d,%d Creat Card\n",suit,number);
		return 0;
	}
	//カードが存在している状態によって返す値が変わる
	if (oneDeck[suit][number] == 1 || oneDeck[suit][number] == 2 || oneDeck[suit][number] == 3)
	{
		printf("Deck Check Exist:Deck in this Card Created\n");
		return oneDeck[suit][number];
	}
	//ここまで来たら何がおかしいのかわからないのでとりあえず-1を返す
	printf("Deck Check Error:NotExists suit:%d,number:%d,deck:%d\n",suit,number,oneDeck[suit][number]);
	return -1;
}

void Deck::Update()
{
	for (int i = 1; i < 52; i++)
	{
			card[i]->Update();
	}
}

