#include<stdio.h>
#include<stdlib.h>



int main() {

	int DataSize;
	printf("Please enter the DataSize:(limited : 1000)\n");
	scanf_s("%d", &DataSize);

	int input[1000] = {0};
	int i;
	int maxi = 0;
	
	printf("Please enter the numbers: ");
	for (i = 0; i < DataSize; i++) {
		scanf_s("%d", &input[i]);
	}

	maxi = input[0];

	for (i = 0; i < DataSize; i++) {
		if (maxi < input[i]) {
			maxi = input[i];
			//printf("maxi = %d\n\n", maxi);
		}
	}

	printf("The maximum of array is %d\n\n",maxi);

	system("pause");
	return 0;

}

