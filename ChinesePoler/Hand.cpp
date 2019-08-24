#include "Hand.h"



Hand::Hand()
{
	standardScore = 100;
}
Hand::~Hand()
{
}
int Hand::HighCard(Card *card)//(statusbase*nowactor,int* handcard)
{
	playercard.number[0];//player�Œ肶��Ȃ���now_actor�ɂ��Ď��R�Ɏw��ł���悤�ɂ���
	standardScore = standardScore * 0;
	return palyercard.number[0]+standardScore;
}
int Hand::OnePair(Card * card)
{
	for (int i = 0; i < 4; i++)
	{
		if(playercard.number[i] == playercard.number[i])
		{
			standardScore = standardScore * 1;
			return playercard.number[i]+standardScore;
		}
	}
	return -1;
}
int Hand::TowPair(Card * card)
{
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (playercard.number[i] == playercard.number[i])
		{
			count++;
		}
	}
	standardScore = standardScore * 2;
	return 0;
}
int Hand::ThreeCard(Card * card)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 3;
	return 0;
}
int Hand::Straight(Card * card)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 4;
	return 0;
}
int Hand::flush(Card * card)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 5;
	return 0;
}
int Hand::FullHouse(Card * card)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 6;
	return 0;
}
int Hand::FourCard(Card * card)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 7;
	return 0;
}
int Hand::StraitFlush(Card * card)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 8;
	return 0;
}
int Hand::RoyalStraightFlush(Card * card)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 9;
	return 0;
}
int Hand::fiveCard(Card * card)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 10;
	return 0;
}