#include<stdio.h>

int main(){
	
	int number,i;
	int key=0;
	int arr[]={2,6,3,1,8,6};
	printf("moi nhap so can kiem tra: ");
	scanf("%d", &number);
  for( i=0;i<sizeof(arr)/sizeof(int);i++){
    	if (arr[i]==number){
    		key++;
		}
    	
	}
	if(key!=0){
		printf("phan tu nam o vi tri %d",key);
	}else{
		printf("phan tu khong co trong mang");
	}
  
  
  
   return 0;
}

