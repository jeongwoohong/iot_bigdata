#include <stdio.h>
#include <stdlib.h>
#define MAX_BOOK_NUMBER 3


typedef struct {
	char Person[10];
	char title[20];
	char pages[5];
}Books_info;

void main() {
	Books_info* Library[MAX_BOOK_NUMBER];
	int index;
	
	for (index = 0; index < MAX_BOOK_NUMBER; index++) {
		Library[index] = malloc(sizeof(Books_info));
	}

	printf("���� ����\n");

	for (index = 0; index < MAX_BOOK_NUMBER; index++) {
		fputs("���� : ", stdout);
		gets(Library[index]->Person);
		fputs("���� : ", stdout);
		gets(Library[index]->title);
		fputs("������ �� : ", stdout);
		gets(Library[index]->pages);
	}

	for (index = 0; index < MAX_BOOK_NUMBER; index++) {
		printf("\n���� : %s\n���� : %s\n������ �� : %s\n",
			Library[index]->Person, Library[index]->title, Library[index]->pages);
	}
	for (index = 0; index < MAX_BOOK_NUMBER; index++) {
		free(Library[index]);
 	}
}