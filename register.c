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
				printf("��й�ȣ: ");
			}
			if(failNum>0 && failNum<3) {
				printf("��й�ȣ(%dȸ����): ", failNum);
			}
			if (failNum==3) {
				printf("��й�ȣ(%dȸ����): ����Ҽ� ����!\n", failNum);
				printf("\n");
				printf("���α׷��� �����մϴ�.\n");
				exit(1);
			}
			
			scanf("%s", inputPassword);
			if (strcmp(inputPassword, password) == 0) {
				printf("����� �̸�: ");
				scanf("%s", ptr[*num].name); 
				printf("��ȭ��ȣ: ");
				scanf("%s", ptr[*num].number); 
				printf("%s ���� ��� �Ϸ�!", ptr[*num].name); printf("\n");
				(*num)++;
				return 0;
			}
				
		}
		
		

	}
	else {
		printf("�뷮 ����!");
		return 0;
	}
	
}