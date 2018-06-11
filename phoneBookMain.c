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
	printf("전화번호 관리"); printf("\n");
	while (1) {
		printf("\n1. 등록 2. 전체검색 3. 특정인검색 4. 제거 5. 종료\n"); printf("\n");
		printf("메뉴선택: ");

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
			printf("다시 선택하세요\n");
		}

	}
	
	return 0;
	
}