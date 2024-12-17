#include<stdio.h>
#include<ctype.h>
void enterString(char *string){
	int len=strlen(string);
	printf("Moi ban nhap vao mot chuoi bat ki\n");
	fgets(string,100,stdin);
	string[strcspn(string,"\n")]='\0';
}
void printfString(char *string){
	printf("%s",string);
}
void countAlpha(char *string,int *countAlphabet){
	for(int i=0;string[i]!='\0';i++){
		if(isalpha(string[i])){
			(*countAlphabet)++;
		}
	}
}
void countDigits(char *string,int *countDigit){
	for(int i=0;string[i]!='\0';i++){
		if(isdigit(string[i])){
			(*countDigit)++;
		}
	}
}
void countSpecalCharacters(char *string,int *countSpecalCharacter){
	for(int i=0;string[i]!='\0';i++){
		if(!isdigit(string[i])&&!isalpha(string[i])){
			(*countSpecalCharacter)++;
		}
	}
}
int main(){
	int select;//lua chon
	int countAlphabet=0;
	int countSpcChar=0;
	int countDigit=0;
	int countSpecalCharacter=0;
	char string[100];//chuoi ki tu
	do{
		printf("\n");
		printf("\n");
		printf("----------MENU----------\n");
		printf("Lua chon 1:Nhap vao chuoi\n");
		printf("Lua chon 2:Hien ra chuoi\n");
		printf("Lua chon 3:Dem so luong  chu cai\n");
		printf("Lua chon 4:Dem so chu so\n");
		printf("Lua chon 5:Dem so ki tu dac biet\n");
		printf("Lua chon 6:Thoat\n");
		printf("\n");
		printf("\n");
		printf("Moi nhap vao lua chon\n");
		scanf("%d",&select);
		fflush(stdin);
		switch(select){
			case 1:
				enterString(string); 
				break;
			case 2:
				printfString(string);
				break;
			case 3:
				countAlpha(string,&countAlphabet);
				printf("So ki tu trong chuoi la:%d",countAlphabet); 
				break;
			case 4:
				countDigits(string,&countDigit);
				printf("So ki tu la chu so la:%d",countDigit);
				break;
			case 5:
				countSpecalCharacters(string,&countSpecalCharacter);
				printf("So ki tu dac biet la:%d",countSpecalCharacter);
				break;
			case 6:
				printf("STOP ALL");
				break;
			default :
				printf("Moi ban nhap lai lua chon");
				break;			
		}
	}while(select!=6);
	return 0;
}




