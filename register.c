#include "phone.h"
#include <string.h>
#include <stdio.h>

#define MAX 50
int insert(User* ptr, int* num) {
	char password[9] = "qwer1234";
	char inputPassword[9] = "";
	if (*num < MAX){
		
		for (int failNum = 0; failNum < 4; failNum++) {
			
			if (failNum==0) {
				printf("비밀번호: ");
			}
			if(failNum>0 && failNum<3) {
				printf("비밀번호(%d회실패): ", failNum);
			}
			if (failNum==3) {
				printf("비밀번호(%d회실패): 등록할수 없음!\n", failNum);
				printf("\n");
				printf("프로그램을 종료합니다.\n");
				exit(1);
			}
			
			scanf("%s", inputPassword);
			if (strcmp(inputPassword, password) == 0) {
				printf("등록할 이름: ");
				scanf("%s", ptr[*num].name); 
				printf("전화번호: ");
				scanf("%s", ptr[*num].number); 
				printf("%s 정보 등록 완료!", ptr[*num].name); printf("\n");
				(*num)++;
				return 0;
			}
				
		}
		
		

	}
	else {
		printf("용량 부족!");
		return 0;
	}
	
}