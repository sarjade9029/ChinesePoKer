#pragma once
//rename objectbase
class StatusBase
{
public:
	StatusBase();
	~StatusBase();
	int GethandNumber(int n);
	int GethandSuit(int n);
	void SethandNumber(int i,int n);
	void SethandSuit(int i,int n);
private:
	int handNumber[5];	//
	int handSuit[5];	//
	int point;			//êÌÀ¿IÈHP
	int Score;			//êÌsðßé¾_
	
};

