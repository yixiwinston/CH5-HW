#include<stdio.h>
#include<stdlib.h>

int cubebyvalue(int n);

int main() {

	int num = 5;
	printf("The original number is %d\n\n", num);

	num = cubebyvalue(num);

	printf("The new number is %d\n\n", num);

	system("pause");
	return 0;

}

int cubebyvalue(int n) {

	return n * n * n;

}
