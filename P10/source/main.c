#include<stdio.h>
#include<stdlib.h>
void cubebyreference(int *nPtr);

int main() {

	int num = 5;
	printf("The original number is %d\n\n", num);

	cubebyreference(&num);

	printf("The new number is %d\n\n", num);

	system("pause");
	return 0;

}

void cubebyreference(int *nPtr){

*nPtr = *nPtr * *nPtr * *nPtr;

}