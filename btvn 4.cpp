#include<stdio.h>

int main(){
	int n ;
	printf("so phan tu :");
	scanf("%d",&n);
	int arr[n];
	int i;
	float sum = 0;
	for(i = 0 ; i <n ; i++){
		printf("phan tu thu %d :" , i);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	float average = sum/n;
	printf(" gia tri trung binh cua cac phan tu %.2f :", average);
	return 0 ;
	
	
	
}
