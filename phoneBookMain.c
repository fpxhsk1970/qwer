#include <stdio.h>
#include "phone.h"
#define MAX 50
void printAll(User* ptr, int* num);
int searchUser(User* ptr, int* num);
int deleted(User* ptr, int* num);
int insert(User* ptr, int* num);

int main(void) {
	int* selectedNum=0;
	int* userNum = 0;
	printf("��ȭ��ȣ ����"); printf("\n");
	while (1) {
		printf("\n1. ��� 2. ��ü�˻� 3. Ư���ΰ˻� 4. ���� 5. ����\n"); printf("\n");
		printf("�޴�����: ");

		scanf("%d", &selectedNum);
		User* user[MAX];
		
		if (selectedNum == 1) {
			insert(user,&userNum);
		}
		if (selectedNum == 2) {
			printAll(user, &userNum);
		}
		if (selectedNum == 3) {
			searchUser(user, &userNum);
		}
		if (selectedNum == 4) {
			deleted(user, &userNum);
		}
		if (selectedNum == 5) {
			break;
		}
		else if(selectedNum!=1 && selectedNum != 2 && selectedNum != 3 && selectedNum != 4 && selectedNum != 5) {
			printf("�ٽ� �����ϼ���\n");
		}

	}
	
	return 0;
	
}