#pragma once
#include "ObjectBase.h"
class Player:public ObjectBase
{
public:
	Player();//実質init
	~Player();
	void Update();
	//drawはカードのみなのでいらない
private:
};

