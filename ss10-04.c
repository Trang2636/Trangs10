#include<stdio.h>
int main(){
	int i,j,min;
	int arr[]={6,26,3,4,8,9};
	int size=sizeof(arr)/sizeof(int);
	 
	for(i=0;i<size;i++){
	 	min = arr[i];
	 	for(j=i+1;j<size;j++){
	 		if(arr[j]<min){
	 			min=arr[j];
	 			arr[j]=arr[i];
	 			arr[i]=min;
	 		}
		}}
	for(i=0;i<size;i++){
	 	printf("%d\n",arr[i]);
	}
	return 0;
}
