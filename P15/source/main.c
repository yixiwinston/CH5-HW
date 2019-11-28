#include<stdio.h>
#include<stdlib.h>
#define size 10

void BS(int* const array, const int s);
void swap(int* ele1Ptr, int* ele2Ptr);

int main() {

	int a[size] = {2,6,4,7,10,12,89,68,45,37};
	int i;

	printf("Data itens in original order\n");

	for (i = 0; i < size; i++)
		printf("%4d",a[i]);

	BS(a, size);

	printf("\n\nData itens in ascending order\n");

	for (i = 0; i < size; i++)
		printf("%4d", a[i]);

	printf("\n");

	system("pause");
	return 0;

}

void BS(int* const array, const int s) {

	int pass,j;

	for (pass = 0; pass < s; pass ++ ) {
		for (j = 0; j < s - 1; j++) {
			if (array[j] > array[j + 1]) {
				swap(&array[j], &array[j + 1]);
			}
		}
	}


}

void swap(int* ele1Ptr, int* ele2Ptr) {

	int temp;
	temp = *ele1Ptr;
	*ele1Ptr = *ele2Ptr;
	*ele2Ptr = temp;



}

