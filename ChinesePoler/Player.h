#pragma once
#include "ObjectBase.h"
class Player:protected ObjectBase
{
public:
	Player();//実質init
	~Player();
	void Update();
	//drawはカードのみなのでいらない
private:
};