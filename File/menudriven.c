#include <stdio.h>
#include <stdlib.h>
struct record {
	char name[10];
	int age;
	int roll;	
};

int main() {
	struct record r;
	int c,d;
	int s = sizeof(r);
	FILE *fd, *fr;
	char a[30];
	printf("1. New record\n");
	printf("2. Delete record\n");
	printf("3. List records\n");
	printf("4. Modify records\n");
	printf("Enter the option you want to select:\n");
	scanf("%d", &c);
	switch(c) {
		case 1:	
			printf("Enter name, age, roll no:\n");
			scanf("%s %d %d", r.name, &r.age, &r.roll);
			fd = fopen("data.dat", "a+b");
			fwrite(&r, s, 1, fd);
			break;
		case 2:
			printf("Enter roll no to delete:\n");
			scanf("%d", &d);
			fd = fopen("data.dat", "rb");
			fr = fopen("tmp.dat", "w+b");		
			while(fread(&r, s, 1, fd)) {
				if(r.roll != d) {
					fwrite(&r, s, 1, fr);
				}
			}
			fclose(fr);
			remove("data.dat");
			rename("tmp.dat", "data.dat");
			break;
		case 3:
			fd = fopen("data.dat", "rb");
			while(fread(&r, s, 1, fd)) {
				printf("%s %d %d\n", r.name, r.age, r.roll);
			}	
			break;
		case 4:
			printf("Enter the roll no to modify:\n");
			scanf("%d", &d);
			fd = fopen("data.dat", "rb+");
			while(fread(&r, s, 1, fd)) {
				if(r.roll == d) {
					printf("Found record, Add changes(Name, age, roll):\n");
					scanf("%s %d %d", r.name, &r.age, &r.roll);
					fseek(fd, -s, SEEK_CUR);
					fwrite(&r, s, 1, fd);
					break;
				}
			}
			break;
			
	}
	fclose(fd);
	return 0;
}
