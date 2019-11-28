#include<stdio.h>
#include<stdlib.h>

char input[1000];


int main() {

	gets(input);
	
	printf("­ì¦r¦ê: %s\n\n", input);

	printf("·s¦r¦ê: ");

	for (int i = 1000; i >= 0; i--) {
		if (input[i] != NULL)
			printf("%c", input[i]);
	}
	printf("\n");

	system("pause");
	return 0;

}