#include "Sort.h"
Sort::Sort()
{
	printf("�\�[�g���n�߂܂���");
}
Sort::~Sort()
{
	printf("�\�[�g���I�����܂���");
}
//(statusbase*nowactor,int* handcard)
void Sort::handsort(ObjectBase * nowActor, int* handcard)
{
	int tmpnumber;
	int tmpsuit;
	//�i���o�[�̃\�[�g
	for (int j = 5; j > 0; j--)
	{
		for (int i = 1; i < j; i++)
		{
			printf("�\�[�g�O1����number%dsuit%d\n2����number%dsuit%d\n", nowActor->GethandNumber(i - 1, handcard), nowActor->GethandSuit(i - 1, handcard), nowActor->GethandNumber(i, handcard), nowActor->GethandSuit(i, handcard));
			if (nowActor->GethandNumber(i - 1, handcard) > nowActor->GethandNumber(i, handcard))
			{
				tmpnumber = nowActor->GethandNumber(i, handcard);
				tmpsuit = nowActor->GethandSuit(i, handcard);

				nowActor->SethandNumber(i, nowActor->GethandNumber(i - 1, handcard), handcard);
				nowActor->SethandSuit(i, nowActor->GethandSuit(i - 1, handcard), handcard);

				nowActor->SethandNumber(i - 1, tmpnumber, handcard);
				nowActor->SethandSuit(i - 1, tmpsuit, handcard);
			}

		}
	}
	//�X�[�g�̃\�[�g
	for (int j = 5; j > 0; j--)
	{
		for (int i = 1; i < j; i++)
		{
			if (nowActor->GethandSuit(i - 1, handcard) == nowActor->GethandSuit(i, handcard))
			{
				tmpnumber = nowActor->GethandNumber(i, handcard);
				tmpsuit = nowActor->GethandSuit(i, handcard);

				nowActor->SethandNumber(i, nowActor->GethandNumber(i - 1, handcard), handcard);
				nowActor->SethandSuit(i, nowActor->GethandSuit(i - 1, handcard), handcard);

				nowActor->SethandNumber(i - 1, tmpnumber, handcard);
				nowActor->SethandSuit(i - 1, tmpsuit, handcard);
			}
		}
	}
}
