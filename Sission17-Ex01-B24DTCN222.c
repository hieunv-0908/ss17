#include<stdio.h>
void size_elm(int arr[],int *size){
	printf("Moi nhap vao do dai cua mang\n");
	scanf("%d",size);
	printf("Moi nhap vao tung phan tu trong mang\n");
	for (int i=0;i<*size;i++){
		scanf("%d",&*(arr+i));
	}
}
void print(int arr[],int *size){
	printf("Mang cua ban dang co la:\n");
	for(int i=0;i<*size;i++){
		printf("Arr[%d]: %d\n",i,*(arr+i));
	}
}
void lenght(int arr[],int *size){
	*size=sizeof(arr)/sizeof(arr[0]);
}
void summ(int arr[],int *size,int *sum){
	for(int i=0;i<*size;i++){
		*sum+=*(arr+i);
	}
}
void max(int arr[],int *maxIndex,int *size){
	for(int i=1;i<*size;i++){
		if(*(arr + *maxIndex)< *(arr+i)){
			*maxIndex=i;
		}
	}
}


int main(){
	int select;//lua chon
	int arr[100];// mang
	int size;//kich thuoc thuc te cua mang
	int sum=0;//tong cac phan tu trong mang
	int maxIndex=0;
	do{
		printf("\n");
		printf("\n");
		printf("----------MENU----------\n");
		printf("Lua chon 1:Nhap vao so phan tu va tung phan tu\n");
		printf("Lua chon 2:Hien thi cac phan tu trong mang\n");
		printf("Lua chon 3:Tinh do dai mang\n");
		printf("Lua chon 4:Tinh tong cac phan tu cua mang\n");
		printf("Lua chon 5:Hien thi phan tu lon nhat\n");
		printf("Lua chon 6:Thoat\n");
		printf("Moi nhap vao lua chon\n");
		scanf("%d",&select);
		switch(select){
			case 1:
				size_elm(arr,&size);
				break;
			case 2:
				print(arr,&size);
				break;
			case 3:
				 lenght(arr,&size);
				 printf("Mang co do dai la: %d",size);
				break;
			case 4:
				summ(arr,&size,&sum);
				printf("Tong cac phan tu trong mang: %d",sum);
				break;
			case 5:
				max(arr,&maxIndex,&size);
				printf("Phan tu lon nhat trong mang la: %d, o vi tri %d",arr[maxIndex],maxIndex);
				break;
			default :
				printf("Moi ban nhap lai lua chon");
				break;			
		}
	}while(select!=6);
	return 0;
}
