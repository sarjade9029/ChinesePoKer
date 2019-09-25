#include "Card.h"
Card::Card(Deck* deck, int num, int suitnum, int SorceModelHundle,VECTOR Pos)
{
	m_number = num;
	m_suit = suitnum;
	if (deck->CheckDeck(m_number,m_suit))
	{
		//�f�b�L�ɓ����J�[�h�����݂��Ă��Ȃ��Ȃ玩����o�^
		deck->CreatDeck(m_number, m_suit);
	}
	m_modelHundle = MV1DuplicateModel(SorceModelHundle);
	if (m_modelHundle < 0)
	{
		printf("�f�[�^�ǂݍ��݂Ɏ��s. sourceId:%d\n", m_modelHundle);
	}
	m_pos = Pos;
	printf("x:%f,y:%f,z:%f\n", m_pos.x, m_pos.y, m_pos.z);
}
Card::~Card()
{
	MV1DeleteModel(m_modelHundle);
}
void Card::showCard()
{
	printf("number:%d,suit:%d\n",m_number, m_suit);
}
void Card::Draw()
{
	MV1DrawModel(m_modelHundle);
}
void Card::Update()
{	
	MV1SetPosition(m_modelHundle, m_pos);
}