#include "phone.h"
#include <string.h>
#include <stdio.h>
#define MAX 50

int deleted(User* ptr,int* num) {
	char name[30];

	if ((*num) > 0) {
		printf("������ �̸�: ");
		scanf("%s", name); printf("\n");
		for (int i = 0; i < MAX; i++) {
			if (strcmp(name,ptr[i].name)==0) {
				if (i<(*num)-1) {
					for (int j = i; j < (*num);j++) {
						strcpy(ptr[j].name,ptr[j+1].name);
						strcpy(ptr[j].number, ptr[j + 1].number);
					}
					*ptr[(*num) - 1].name = NULL;
					*ptr[(*num) - 1].number = NULL;
				}
				else {
					*ptr[(*num) - 1].name = NULL;
					*ptr[(*num) - 1].number = NULL;
				}
				printf("%s ���ſϷ�\n",name);
				(*num)--;
				return 0;
				
			}
		}
		printf("����ڰ� �����ϴ�\n");
		return 0;

	}
	printf("������ �����ϴ�\n");
	return 0;
}