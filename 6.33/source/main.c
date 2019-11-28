#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);

int main(void)
{
	int search, ans;
	int data[] = { 3, 7, 14, 20, 23, 32, 41, 44, 56, 57, 73, 89, 93 };

	printf("請輸入欲搜尋的資料: ");
	scanf_s("%d", &search);

	// 呼叫函式進行搜尋

	//printf("%d\n%d\n%d\n\n", sizeof(data), sizeof(int), sizeof(data) / sizeof(int));

	ans = binarysearch(data, search, sizeof(data) / sizeof(int));	//這邊會需要 sizeof(data)/sizeof(int) 是為求資料的"個數" ，但因為共同都是int，一個int占4bit，所以要除以sizeof(int)

	if (ans < 0)
	{
		printf("Data Didn't Found %d\n", search);
	}
	else
	{
		printf("在第 %d 筆資料找到 %d\n", ans + 1, search);
	}

	system("pause");
}

int binarysearch(int data[], int search, int n)
{
	int low = 0, high = n - 1;			//用二分法持續地將資料陣列分半尋找，類似遊戲[終極密碼]

	while (low <= high)
	{
		int mid = (low + high) / 2;		//找中間值

		if (data[mid] == search)
		{
			return mid;					//就會找到那個他，水! :)		
		}
		else if (data[mid] > search)
		{
			high = mid - 1;				//欲查詢資料可能在靠低值段區塊，把大值界線拉下來。
		}
		else if (data[mid] < search)
		{
			low = mid + 1;				//欲查詢資料可能在靠高值段區塊，把小值界線拉上來。
		}
	}

	return -1; //真的找不到的結果。
}