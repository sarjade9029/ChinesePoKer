#pragma once
#include "SceneBase.h"
#include "GameScene.h"
class TitleScene :public SceneBase
{
public:
	TitleScene();
	~TitleScene();
	SceneBase* update();
	void draw();
};