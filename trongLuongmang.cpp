#include <stdio.h>


int nhapMang(int a[], int n) {              
	for(int i=0; i<n; i++) {
		scanf("%d", &a[i]); 
	} 
} 


int xuatMang(int a[], int n) {			
	printf("Day a: ");
	for(int i=0; i<n; i++) {
		printf("%d  ", a[i]); 
	} 
} 


void tongklonnhat(int a[],int n,int k) {          
	int vitri=0,max=0,s,sum=0;
	for(int j=0;j<=n-k;j++)
	{
		s=0;
		for(int i=j;i<j+k;i++)
		{
			s=s+a[i];
		}
		if(s>max)
		{
			max=s;
			vitri=j;
		}
	}
	printf("\nDay con co khoi luong lon nhat khi k=%d la: ", k);
	for(int q = vitri;q<vitri+k;q++)
	{
		printf("%d  ", a[q]);
		sum=sum+a[q];		
	}
	printf("\nKhoi luong day con lon: %d", sum); 
}



int main() {
	int n, a[n], k;
	printf("Nhap vao do dai day a: ");
	scanf("%d", &n);
	printf("Nhap vao k:"); 
	scanf("%d",&k);
	nhapMang(a, n);
    xuatMang(a, n); 
	tongklonnhat(a, n, k);
	return 0; 
} 

//Tham khao tai leu o: https://daynhauhoc.com/t/bai-toan-tim-tong-lon-nhat-cua-k-phan-tu-lien-tiep-tren-mang/10142/17 
