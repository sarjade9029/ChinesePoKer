#include "DxLib.h"
#include "Game.h"
#include "TitleScene.h"
int		WINAPI		myWinMain(HINSTANCE hInstance, HINSTANCE hPreInst, LPSTR     CmdLine, int CmdShow)
{
	// �X�N���[���Z�b�g
	GAMEINSTANCE.setScreen(800, 600, false);
	GAMEINSTANCE.setFirstScene(new GameScene);
	// �Q�[���J�n
	GAMEINSTANCE.Run();
	return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
// �R���\�[����ʂ���Windows�̂���@�ɔ�Ԃ��߂̃R�[�h
////////////////////////////////////////////////////////////////////////////////////////
void windowOpen()
{
	HINSTANCE hInstance = GetModuleHandle(0);
	int      iCmdShow = SW_SHOWDEFAULT;

	myWinMain(hInstance, NULL, NULL, iCmdShow);
}
// DOS�����̃G���g���[�|�C���g
int main(void)
{
	windowOpen();
	return 0;
}
// �E�B���h�E�V�X�e���̎��̃G���g���[�|�C���g
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	main();
	return 0;
}