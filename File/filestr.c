#include <stdio.h>

struct st{
	char a[5];
	int x;
	int y;
};

int main() {
	FILE *fd;
	struct st st1;
	fd = fopen("new.txt", "w+");
	for(int i=0; i<3; i++) {
		fgets(st1.a, 5, stdin);
		scanf("%d%d", &st1.x, &st1.y);
		fprintf(fd, "%s %d %d", st1.a, st1.x, st1.y);
	}

	fclose(fd);
	return 0;
}
