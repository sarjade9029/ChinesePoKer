#include "Hand.h"



Hand::Hand()
{
	standardScore = 100;
}
Hand::~Hand()
{
}
int Hand::HighCard(ObjectBase *nowActor, int* handcard)//(statusbase*nowactor,int* handcard)
{
	playercard.number[0];//playerŒÅ’è‚¶‚á‚È‚­‚Änow_actor‚É‚µ‚ÄŽ©—R‚ÉŽw’è‚Å‚«‚é‚æ‚¤‚É‚·‚é
	standardScore = standardScore * 0;
	return palyercard.number[0]+standardScore;
}
int Hand::OnePair(ObjectBase *nowActor, int* handcard)
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
int Hand::TowPair(ObjectBase *nowActor, int* handcard)
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
int Hand::ThreeCard(ObjectBase *nowActor, int* handcard)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 3;
	return 0;
}
int Hand::Straight(ObjectBase *nowActor, int* handcard)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 4;
	return 0;
}
int Hand::flush(ObjectBase *nowActor, int* handcard)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 5;
	return 0;
}
int Hand::FullHouse(ObjectBase *nowActor, int* handcard)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 6;
	return 0;
}
int Hand::FourCard(ObjectBase *nowActor, int* handcard)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 7;
	return 0;
}
int Hand::StraitFlush(ObjectBase *nowActor, int* handcard)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 8;
	return 0;
}
int Hand::RoyalStraightFlush(ObjectBase *nowActor, int* handcard)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 9;
	return 0;
}
int Hand::fiveCard(ObjectBase *nowActor, int* handcard)
{
	if (!(player.hi[0] == player.hi[4]))
	{
		return -1;
	}
	standardScore = standardScore * 10;
	return 0;
}