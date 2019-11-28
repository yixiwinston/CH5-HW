#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void DR();

int times[11] = { 0 };	//2,3,4,5,6,7,8,9,10,11,12

int main() {
	
	int i;

	srand(time(NULL));
	
	DR();

	printf("數字:");
	for(i=2;i<=12;i++)
		printf("%10d",i);
	printf("\n");

	printf("次數:");
	for (i = 2; i <= 12; i++)
		printf("%10d", times[i-2]);
	printf("\n");

	printf("比例:");
		for (i = 2; i <= 12; i++)
			printf("%10.3f", ((float)times[i - 2] / 36000));
	printf("\n");

	system("pause");
	return 0;

}
void DR() {

	int DR1,DR2;
	int T;
	int c;

	for (c = 0; c < 36000; c++) {

		DR1 = 1 + rand() % 6;
		DR2 = 1 + rand() % 6;
		T = DR1 + DR2;

		switch (T) {
		case 2:
			times[0]++;
			break;
		case 3:
			times[1]++;
			break;
		case 4:
			times[2]++;
			break;
		case 5:
			times[3]++;
			break;
		case 6:
			times[4]++;
			break;
		case 7:
			times[5]++;
			break;
		case 8:
			times[6]++;
			break;
		case 9:
			times[7]++;
			break;
		case 10:
			times[8]++;
			break;
		case 11:
			times[9]++;
			break;
		case 12:
			times[10]++;
			break;
		default:

			break;
		}

	}


}
