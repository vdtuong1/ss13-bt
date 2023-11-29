#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	int cout;
	do{
		printf("            menu\n");
		printf("1. nhap vao chuoi ky tu\n");
		printf("2. In ra do dai va noi dung chuoi vua nhap\n");
		printf("3. In ra chuoi dao nguoc\n");
		printf("4. In ra so luong chu cai trong chuoi\n");
		printf("5. In ra so luong chu so trong chuoi\n");
		printf("6. In ra so luong ky tu dac biet trong chuoi\n");
		printf("7. thoat\n");
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
				printf("Do dai cua chuoi ky tu la: %d\n",strlen(a));
				break;
			case 3:
				printf("chuoi dao nguoc la:%s\n",strrev(a));
				break;
			case 4:
				for(int i=0;i<strlen(a);i++){
					if(isalpha(a[i])){
						cout++;
					}
				}
				printf("so luong chu cai trong chuoi:%d\n",cout);
				break;
			case 5:
				for(int i=0;i<strlen(a);i++){
					if(isdigit(a[i])){
						cout++;
					}
				}
				printf("so luong chu so trong chuoi:%d\n",cout);
				break;
			case 6:
				for(int i=0;i<strlen(a);i++){
					if(!isalnum(a[i])){
						cout++;
					}
				}
				printf("so luong ky tu dac biet trong chuoi:%d\n",cout);
				break;
			case 7:
				exit(0);
			default:
				printf("vui long nhap tu 1-7");	
		}
	}while(1==1);
	return 0;
}
	
