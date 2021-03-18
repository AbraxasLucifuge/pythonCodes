#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("%d\n", argc);
	printf("So you have %s oranges and %s apples.\n", argv[1], argv[2]);
	return 0;
}
