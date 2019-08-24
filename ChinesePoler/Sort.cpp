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
void Sort::handsort(StatusBase * nowActor)
{
	int tmpnumber;
	int tmpsuit;
	//ナンバーのソート
	for (int j = 5; j > 0; j--)
	{
		for (int i = 1; i < j; i++)
		{
			if (nowActor->GethandNumber(i - 1) > nowActor->GethandNumber(i))
			{
				tmpnumber = nowActor->GethandNumber(i);
				tmpsuit = nowActor->GethandSuit(i);

				nowActor->SethandNumber(i, nowActor->GethandNumber(i - 1));
				nowActor->SethandSuit(i, nowActor->GethandSuit(i - 1));

				nowActor->SethandNumber(i - 1, tmpnumber);
				nowActor->SethandSuit(i - 1, tmpsuit);
			}
		}
		
	}
	//スートのソート
	for (int j = 5; j > 0; j--)
	{
		for (int i = 1; i < j; i++)
		{
			if (nowActor->GethandSuit(i - 1) == nowActor->GethandSuit(i))
			{
				tmpnumber = nowActor->GethandNumber(i);
				tmpsuit = nowActor->GethandSuit(i);

				nowActor->SethandNumber(i, nowActor->GethandNumber(i - 1));
				nowActor->SethandSuit(i, nowActor->GethandSuit(i - 1));

				nowActor->SethandNumber(i - 1, tmpnumber);
				nowActor->SethandSuit(i - 1, tmpsuit);
			}
		}
	}
}
