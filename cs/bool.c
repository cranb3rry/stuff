#include <stdio.h>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
	int i;
	for (i = 0; i < len; i++)
		printf(" %.2x", start[i]);
		printf("\n");
}

int main()
{
	show_bytes("12345", 6);
	return 0;
}
