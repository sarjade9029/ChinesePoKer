#include "Sort.h"
Sort::Sort()
{
	printf("ソートを始めました");
}
Sort::~Sort()
{
	printf("ソートを終了しました");
}
//(statusbase*nowactor,int* handcard)
void Sort::handsort(ObjectBase * nowActor, int* handcardNumber, int* handcardSuit)
{
	int tmpnumber;
	int tmpsuit;
	//ナンバーのソート
	for (int j = 5; j > 0; j--)
	{
		for (int i = 1; i < j; i++)
		{
			printf("ソート前1枚目number%dsuit%d\n2枚目number%dsuit%d\n",
				nowActor->GethandNumber(i - 1, handcardNumber),
				nowActor->GethandSuit(i - 1, handcardSuit),
				nowActor->GethandNumber(i, handcardNumber),
				nowActor->GethandSuit(i, handcardSuit));
			if (nowActor->GethandNumber(i - 1, handcardNumber) > nowActor->GethandNumber(i, handcardNumber))
			{
				tmpnumber = nowActor->GethandNumber(i, handcardNumber);
				tmpsuit = nowActor->GethandSuit(i, handcardSuit);

				nowActor->SethandNumber(i, nowActor->GethandNumber(i - 1, handcardNumber), handcardNumber);
				nowActor->SethandSuit(i, nowActor->GethandSuit(i - 1, handcardSuit), handcardSuit);

				nowActor->SethandNumber(i - 1, tmpnumber, handcardNumber);
				nowActor->SethandSuit(i - 1, tmpsuit, handcardSuit);
			}
			printf("ソート後1枚目number%dsuit%d\n2枚目number%dsuit%d\n",
				nowActor->GethandNumber(i - 1, handcardNumber),
				nowActor->GethandSuit(i - 1, handcardSuit),
				nowActor->GethandNumber(i, handcardNumber),
				nowActor->GethandSuit(i, handcardSuit));
		}
	}
	//スートのソート
	for (int j = 5; j > 0; j--)
	{
		for (int i = 1; i < j; i++)
		{
			printf("ソート前1枚目number%dsuit%d\n2枚目number%dsuit%d\n",
				nowActor->GethandNumber(i - 1, handcardNumber),
				nowActor->GethandSuit(i - 1, handcardSuit),
				nowActor->GethandNumber(i, handcardNumber),
				nowActor->GethandSuit(i, handcardSuit));
			if (nowActor->GethandSuit(i - 1, handcardSuit) == nowActor->GethandSuit(i, handcardSuit))
			{
				tmpnumber = nowActor->GethandNumber(i, handcardNumber);
				tmpsuit = nowActor->GethandSuit(i, handcardSuit);

				nowActor->SethandNumber(i, nowActor->GethandNumber(i - 1, handcardNumber), handcardNumber);
				nowActor->SethandSuit(i, nowActor->GethandSuit(i - 1, handcardSuit), handcardSuit);

				nowActor->SethandNumber(i - 1, tmpnumber, handcardNumber);
				nowActor->SethandSuit(i - 1, tmpsuit, handcardSuit);
			}
			printf("ソート後1枚目number%dsuit%d\n2枚目number%dsuit%d\n",
				nowActor->GethandNumber(i - 1, handcardNumber),
				nowActor->GethandSuit(i - 1, handcardSuit),
				nowActor->GethandNumber(i, handcardNumber),
				nowActor->GethandSuit(i, handcardSuit));
		}
	}
}
