#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#define MAX_BOOKS_NUMBER 3

typedef struct {
	char person[20];
	char title[30];
	char pages[10];
}Books_info;

void main() {
	int index;
	Library[] = malloc(sizeof(Books_info) * MAX_BOOKS_NUMBER);

	for (index = 0; index < MAX_BOOKS_NUMBER; index++) {
		puts("���� : ");
		gets("%s",Library[index]->person);
		puts("���� : ");
		gets("%s",Library[index]->title);
		puts("������ �� : ");
		gets("%s", Library[index]->pages);
	}
	for (index = 0; index < MAX_BOOKS_NUMBER; index++) {
		printf("\n���� : %s\n���� : %s\n������ �� : %s\n",
			Library[index]->person,Library[index]->title,Library[index]->pages);
	}
	for (index = 0; index < MAX_BOOKS_NUMBER; index++) {
		free(Library[index]);
	}
}