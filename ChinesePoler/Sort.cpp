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
void Sort::handsort(ObjectBase * nowActor, int* handcardNumber, int* handcardSuit)
{
	int tmpnumber;
	int tmpsuit;
	//�i���o�[�̃\�[�g
	for (int j = 5; j > 0; j--)
	{
		for (int i = 1; i < j; i++)
		{
			printf("�\�[�g�O1����number%dsuit%d\n2����number%dsuit%d\n",
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
			printf("�\�[�g��1����number%dsuit%d\n2����number%dsuit%d\n",
				nowActor->GethandNumber(i - 1, handcardNumber),
				nowActor->GethandSuit(i - 1, handcardSuit),
				nowActor->GethandNumber(i, handcardNumber),
				nowActor->GethandSuit(i, handcardSuit));
		}
	}
	//�X�[�g�̃\�[�g
	for (int j = 5; j > 0; j--)
	{
		for (int i = 1; i < j; i++)
		{
			printf("�\�[�g�O1����number%dsuit%d\n2����number%dsuit%d\n",
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
			printf("�\�[�g��1����number%dsuit%d\n2����number%dsuit%d\n",
				nowActor->GethandNumber(i - 1, handcardNumber),
				nowActor->GethandSuit(i - 1, handcardSuit),
				nowActor->GethandNumber(i, handcardNumber),
				nowActor->GethandSuit(i, handcardSuit));
		}
	}
}
