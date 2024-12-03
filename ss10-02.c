#include<stdio.h>

int main(){
	int i,j,temp;
	int arr[]={2,34,7,45,8,9};
    int size=sizeof(arr)/sizeof(int);
    for(i=0;i<size;i++){
    	for(j=0;j<size-i-1;j++){
    		if(arr[j+1]<arr[j]){
    			temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
    				
			}
		}	
	}
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
   return 0;
}

