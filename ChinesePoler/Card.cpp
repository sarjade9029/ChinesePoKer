#include "Card.h"

Card::Card(Deck* deck, int num, int suitnum, int SorceModelHundle,VECTOR Pos)
{
	number = num;
	suit = suitnum;
	if (deck->CheckDeck(number,suit))
	{
		//デッキに同じカードが存在していないなら自分を登録
		deck->CreatDeck(number, suit);
	}
	modelHundle = MV1DuplicateModel(SorceModelHundle);
	if (modelHundle < 0)
	{
		printf("データ読み込みに失敗. sourceId:%d\n", modelHundle);
	}
	pos = Pos;
	printf("x:%f,y:%f,z:%f\n", pos.x, pos.y, pos.z);
}
Card::~Card()
{
	MV1DeleteModel(modelHundle);
}
void Card::showCard()
{
	printf("number:%d,suit:%d\n",number, suit);
}
void Card::Draw()
{
		MV1DrawModel(modelHundle);
}
void Card::Update()
{	
	MV1SetPosition(modelHundle, pos);

}

