#include<stdio.h> 

int main (){
	int n , i ; 
	printf("so phan tu ");
	scanf("%d",&n);
	 
	int arr[n];
	for( i=0 ; i<n ; i++){
		printf("cac phan tu trong mang la %d " , i);
		scanf("%d", &arr[i]); 
	} 
	printf("tong hop cac phan tu la :");
	for( i = 0 ; i < n ; i++){
		printf("%d",arr[i]); 
	} 
	printf("\n") ;
}
