#include "Hand.h"



Hand::Hand()
{
	standardScore = 100;
}
Hand::~Hand()
{
}
int Hand::HighCard(ObjectBase *nowActor, int* handcard)
{
	nowActor->GethandNumber(5,handcard);
	if (nowActor->GethandNumber(1, handcard) == 1)
	{
		return nowActor->GethandNumber(1, handcard) + standardScore * 0;
	}
	return nowActor->GethandNumber(1, handcard) +standardScore * 0;
}
int Hand::OnePair(ObjectBase *nowActor, int* handcard)
{
	for (int i = 0; i < 3; i++)
	{
		if(nowActor->GethandNumber(i, handcard) == nowActor->GethandNumber(i+1, handcard))
		{
			if (nowActor->GethandNumber(i, handcard) == 1)
			{
				return nowActor->GethandNumber(i, handcard) + 13 +standardScore * 1;
			}
			standardScore = standardScore * 1;
			return nowActor->GethandNumber(i, handcard) + standardScore * 1;
		}
	}
	return -1;
}
int Hand::TowPair(ObjectBase *nowActor, int* handcard)
{
	int count = 0;
	int num = 0;
	for (int i = 0; i < 3; i++)
	{
		if (nowActor->GethandNumber(i, handcard) == nowActor->GethandNumber(i + 1, handcard) && num == 0)
		{
			count++;
		}
		if (nowActor->GethandNumber(i, handcard) == 1)
		{
			count++;
			num = nowActor->GethandNumber(i, handcard) + 13;
		}
		if (nowActor->GethandNumber(i, handcard) == nowActor->GethandNumber(i + 1, handcard) && num != 0)
		{
			return (nowActor->GethandNumber(i, handcard) + num) + standardScore * 2;
		}
	}
	return 0;
}
int Hand::ThreeCard(ObjectBase *nowActor, int* handcard)
{
	for (int i = 0; i < 3; i++)
	{
		if (nowActor->GethandNumber(i, handcard) == nowActor->GethandNumber(i + 2, handcard))
		{
			if (nowActor->GethandNumber(i, handcard) == 1)
			{
				return nowActor->GethandNumber(i, handcard) + 13 + standardScore * 3;
			}
			return nowActor->GethandNumber(i, handcard) + standardScore * 3;
		}
	}
	return 0;
}
int Hand::Straight(ObjectBase *nowActor, int* handcard)
{
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (nowActor->GethandNumber(i, handcard) == 1 && nowActor->GethandNumber(i + 1, handcard) == 10)
		{
			count++;
			continue;
		}
		if (nowActor->GethandNumber(i, handcard) == nowActor->GethandNumber(i + 1, handcard))
		{
			count++;
		}
		if (count == 4)
		{
			return nowActor->GethandNumber(i, handcard) + standardScore * 4;
		}
	}
	
	return 0;
}
int Hand::flush(ObjectBase *nowActor, int* handcardSuit)
{
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (nowActor->GethandSuit(i, handcardSuit) == nowActor->GethandSuit(i + 1, handcardSuit))
		{
			count++;
		}
		if (count == 4)
		{
			if (nowActor->GethandNumber(1, handcardSuit) == 1)
			{
				return nowActor->GethandNumber(1, handcardSuit) + standardScore * 5;
			}
			return nowActor->GethandNumber(5, handcardSuit) + standardScore * 5;
		}
	}
	return 0;
}
int Hand::FullHouse(ObjectBase *nowActor, int* handcard)
{
	if (((nowActor->GethandNumber(0, handcard) == nowActor->GethandNumber(1, handcard)) 
		&& (nowActor->GethandNumber(2, handcard) == nowActor->GethandNumber(4, handcard)))
		||((nowActor->GethandNumber(0,handcard)==nowActor->GethandNumber(2,handcard))
		&&(nowActor->GethandNumber(3,handcard)==nowActor->GethandNumber(4,handcard))))
	{
		if (nowActor->GethandNumber(0, handcard) == 1)
		{
			return nowActor->GethandNumber(1, handcard) + 13 + nowActor->GethandNumber(4, handcard) + standardScore * 6;
		}
		return nowActor->GethandNumber(1, handcard) + nowActor->GethandNumber(4, handcard) + standardScore * 6;
	}
	return 0;
}
int Hand::FourCard(ObjectBase *nowActor, int* handcard)
{
	for (int i = 0; i < 2; i++)
	{
		if (nowActor->GethandNumber(i, handcard) == nowActor->GethandNumber(i + 3, handcard))
		{
			if (nowActor->GethandNumber(i, handcard) == 1)
			{
				return nowActor->GethandNumber(i, handcard) +13+ standardScore * 7;
			}
			return nowActor->GethandNumber(i, handcard) + standardScore * 7;
		}
	}
	return 0;
}
int Hand::StraitFlush(ObjectBase *nowActor, int* handcardNumber, int*handcardSuit)
{
	if ((Straight(nowActor, handcardNumber) != 0) && (flush(nowActor, handcardSuit) != 0))
	{
		if (nowActor->GethandNumber(0, handcardNumber) == 1)
		{
			return nowActor->GethandNumber(0, handcardNumber) + 13 + standardScore * 8;
		}
		return nowActor->GethandNumber(5, handcardNumber) + standardScore * 8;
	}
	return 0;
}
int Hand::RoyalStraightFlush(ObjectBase *nowActor, int* handcardNumber, int*handcardSuit)
{
	int count = 0;
	if (flush(nowActor, handcardSuit) != 0)
	{
		if (nowActor->GethandNumber(0, handcardNumber) == 1 && nowActor->GethandNumber(1, handcardNumber) == 10)
		{
			count++;
			for (int i = 1; i < 4; i++)
			{
				if (nowActor->GethandNumber(i, handcardNumber) + 1 == nowActor->GethandNumber(i+1, handcardNumber))
				{
					count++;
					if (count == 4)
					{
						return nowActor->GethandNumber(i, handcardNumber) + standardScore * 9;
					}
				}
			}
		}
	}
	return 0;
}