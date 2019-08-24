#include "GameScene.h"
#include "CardManager.h"
#include "Camera.h"

Camera*camera = new Camera();
CardManager* cardManager = new CardManager();
class Card *card;
GameScene::GameScene()
{
}


GameScene::~GameScene()
{
}

SceneBase * GameScene::update()
{

	camera->Update();
	cardManager->Update();
	return this;
}

void GameScene::init()
{
	//“®‚¢‚Ä‚Í‚¢‚é
	cardManager->CreatCard();
}

void GameScene::draw()
{

	ClearDrawScreen();
	cardManager->Draw();
}
