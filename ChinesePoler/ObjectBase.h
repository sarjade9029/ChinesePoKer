#pragma once
//rename objectbase
class ObjectBase
{
public:
	ObjectBase();
	~ObjectBase();
	int GethandNumber(int n,int*handcard);
	int GethandSuit(int n,int* handcard);
	void SethandNumber(int i,int n,int* handcard);
	void SethandSuit(int i,int n,int* handcard);
private:
	int handNumber[5];	//
	int handSuit[5];	//
	int point;			//�ꎎ�����̎����I��HP
	int Score;			//�ꏟ�����̏��s�����߂链�_
	
};

