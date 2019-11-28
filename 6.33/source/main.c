#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);

int main(void)
{
	int search, ans;
	int data[] = { 3, 7, 14, 20, 23, 32, 41, 44, 56, 57, 73, 89, 93 };

	printf("�п�J���j�M�����: ");
	scanf_s("%d", &search);

	// �I�s�禡�i��j�M

	//printf("%d\n%d\n%d\n\n", sizeof(data), sizeof(int), sizeof(data) / sizeof(int));

	ans = binarysearch(data, search, sizeof(data) / sizeof(int));	//�o��|�ݭn sizeof(data)/sizeof(int) �O���D��ƪ�"�Ӽ�" �A���]���@�P���Oint�A�@��int�e4bit�A�ҥH�n���Hsizeof(int)

	if (ans < 0)
	{
		printf("Data Didn't Found %d\n", search);
	}
	else
	{
		printf("�b�� %d ����Ƨ�� %d\n", ans + 1, search);
	}

	system("pause");
}

int binarysearch(int data[], int search, int n)
{
	int low = 0, high = n - 1;			//�ΤG���k����a�N��ư}�C���b�M��A�����C��[�׷��K�X]

	while (low <= high)
	{
		int mid = (low + high) / 2;		//�䤤����

		if (data[mid] == search)
		{
			return mid;					//�N�|��쨺�ӥL�A��! :)		
		}
		else if (data[mid] > search)
		{
			high = mid - 1;				//���d�߸�ƥi��b�a�C�Ȭq�϶��A��j�Ȭɽu�ԤU�ӡC
		}
		else if (data[mid] < search)
		{
			low = mid + 1;				//���d�߸�ƥi��b�a���Ȭq�϶��A��p�Ȭɽu�ԤW�ӡC
		}
	}

	return -1; //�u���䤣�쪺���G�C
}