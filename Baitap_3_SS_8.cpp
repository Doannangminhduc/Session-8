#include<stdio.h>
int main(){
	int songuyen;
	printf("Nhap 1 so nguyen:");
	scanf("%d",&songuyen);
	int arr[songuyen][songuyen];
	printf("Nhap cac phan tu cho ma tran %d x %d:\n",songuyen,songuyen);
	for(int i=0;i<songuyen;i++){
		for(int j=0;j<songuyen;j++){
			printf("Nhap phan tu [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Ma tran da nhap la:\n");
	for(int i=0;i<songuyen;i++){
		for(int j=0;j<songuyen;j++){
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
