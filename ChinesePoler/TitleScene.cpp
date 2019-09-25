#include "TitleScene.h"
TitleScene::TitleScene()
{
}
TitleScene::~TitleScene()
{
}
SceneBase * TitleScene::update()
{
	return new GameScene;
}
void TitleScene::draw()
{
	ClearDrawScreen();
}
