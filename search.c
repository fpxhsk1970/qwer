#include "phone.h"
#include <stdio.h>
#include <string.h>

void printAll(User* ptr,int* num) {
	printf("<< ��ȭ��ȣ��� >>\n");
	for (int i = 0; i < (*num);i++) {
		printf("%s %s\n",ptr[i].name,ptr[i].number);
	}
}

int searchUser(User* ptr, int* num) {
	char name[30]="";
	if ((*num)>0) {
		printf("�˻��� �̸�: ");
		scanf("%s", name); printf("\n");
		for (int i = 0; i < (*num);i++) {
			if (strcmp(name, ptr[i].name) == 0) {
				printf("%s\t%s\n",ptr[i].name, ptr[i].number);
				return 0;
			}
		}
		printf("���� ����Դϴ�\n");
		return 0;
	}
	else {
		printf("�˻��� ����� �����ϴ�\n");
		return 0;
	}
}