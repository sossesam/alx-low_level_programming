#include<stdio.h>

int main () {
	printf("Size of long:%d bytes\n", sizeof(long));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of char: %zu byte\n", sizeof(char));
	printf("Size of lonng long: %d byte\n", sizeof(long long));

	return 0;
}
