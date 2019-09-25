#pragma once
#include "DxLib.h"
class SceneBase
{
public:
	SceneBase() {};
	virtual~SceneBase() {};
	virtual SceneBase* update() = 0;
	virtual void init() = 0;
	virtual void draw() = 0;

};