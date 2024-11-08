#include <stdio.h>

void crash() {
	char *test = NULL;
	int i = 0;
	for(i = 0; i < 100000; i++) {
		printf("%c", test[i]);
	}
}

int main(int argc, char *argv[]) {
	int age = 10;
	int height = 72;

	printf("I am %d inches tall. \n\a", height);
	crash();
	crash();	

	return 0;
}
