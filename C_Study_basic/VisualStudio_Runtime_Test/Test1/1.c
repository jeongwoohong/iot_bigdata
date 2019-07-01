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

	printf("도서 정보\n");

	for (index = 0; index < MAX_BOOK_NUMBER; index++) {
		fputs("저자 : ", stdout);
		gets(Library[index]->Person);
		fputs("제목 : ", stdout);
		gets(Library[index]->title);
		fputs("페이지 수 : ", stdout);
		gets(Library[index]->pages);
	}

	for (index = 0; index < MAX_BOOK_NUMBER; index++) {
		printf("\n저자 : %s\n제목 : %s\n페이지 수 : %s\n",
			Library[index]->Person, Library[index]->title, Library[index]->pages);
	}
	for (index = 0; index < MAX_BOOK_NUMBER; index++) {
		free(Library[index]);
 	}
}