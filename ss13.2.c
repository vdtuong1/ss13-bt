#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	char num1;
	char num2;
	char deleteChar;
	do{
		printf("            menu\n");
		printf("1.Nhap vao chuoi ky tu\n");
		printf("2.In ra noi dung chuoi\n");
		printf("3.Nhap vao 1 ky tu va dem so lan xuat hien trong chuoi\n");
		printf("4.Nhap vao 2 ky tu, thay the cac ky tu thu 2 trong chuoi thanh ky tu thu nhat\n");
		printf("5.nhap vao mot ky tu , xoa cac ky tu trong chuoi\n");
		printf("6.Thoat\n");
		printf("vui long nhap lua chon cua ban\n");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("nhap vao chuoi ky tu:\n");
				getchar();
				char a[10000];
				gets(a);
				break;
			case 2:
				printf("Noi dung vua nhap la: %s\n",a);
				break;
			case 3:
				{
				char ch;
				printf("nhap vao 1 ky tu bat ky:");
				scanf("%s",&ch);
				int cout=0;
				for(int i=0;i<strlen(a);i++){
					if(a[i]==ch){
						cout++;
					}
				}
				printf("so luong ky tu trong chuoi la '%c':%d\n",ch,cout);
				}
				break;
			case 4:
                printf("Nhap vao 2 ky tu\n: ");
                scanf(" %c %c", &num1, &num2);
                if (strlen(a) >= 2) {
                    if(a[1]==num2){
                    	a[1]=num1;
					}
                }
				break;
			case 5:
                printf("Nhap vào 1 ky tu de xoa: ");
                scanf(" %c", &deleteChar);
                for (int i = 0; i < strlen(a); i++) {
                    if (a[i] == deleteChar) {
                        for (int j = i; j < strlen(a); j++) {
                            a[j] = a[j + 1];
                        }
                        i--;
                    }
                }
				break;
			case 6:
				exit(0);
			default:
				printf("vui long nhap tu 1-7\n");	
		}
	}while(1==1);
	return 0;
}
	
