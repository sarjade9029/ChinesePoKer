#pragma once
#include "Player.h"
#include "Enemy.h"
#include "DxLib.h"
#include "ObjectBase.h"

class Sort
{
public:
	Sort();
	~Sort();
	void handsort(ObjectBase * nowActor, int* handcardNumber, int* handcardSuit);
private:


};
