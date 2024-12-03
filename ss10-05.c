#include<stdio.h>
int main(){
	int i,j,temp,num;
	int arr[]={26,3,0,6,8,1,8,};
	 int size=sizeof(arr)/sizeof(int);
	 int key=-1;
	 printf("Moi nhap gia tri muon kiem tra:");
	 scanf("%d", &num);
	 
	for(i=0;i<size;i++){
	 	if (arr[i]==num){
	 		printf("Gia tri %d nam o vi tri %d trong mang\n",num,i);
	 		key++;
	 	}
	}
	if (key==-1){
	 	printf("Gia tri da nhap khong ton tai trong mang");
	}
	return 0;
}

