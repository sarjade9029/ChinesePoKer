#pragma once
//rename objectbase
class ObjectBase
{
public:
	ObjectBase();
	~ObjectBase();
	int GethandNumber(int n);
	int GethandSuit(int n);
	void SethandNumber(int i,int n);
	void SethandSuit(int i,int n);
private:
	int handNumber[5];	//
	int handSuit[5];	//
	int point;			//�ꎎ�����̎����I��HP
	int Score;			//�ꏟ�����̏��s�����߂链�_
	
};

