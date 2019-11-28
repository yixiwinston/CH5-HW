#include<stdio.h>
#include<stdlib.h>



int main() {

	int a;
	int* aPtr;

	a = 7;
	aPtr = &a; 
	//aPtr 為 a 的 "位址"
	//*aPtr 為 指向 a 的值
	printf("The address of a is %p"
		   "\nThe value of aPtr is %p",&a,aPtr);

	printf("\n\nThe value of a is %d"
		"\nThe value of *aPtr is %d", a, *aPtr);

	printf("\n\nShowing that * and & are complements of "
		"each other \n&*aPtr = %p"
		"\n*&aPtr = %p\n", &*aPtr, *&aPtr);

	system("pause");
	return 0;

}

