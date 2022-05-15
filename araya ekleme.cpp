#include <stdio.h>
void intertionsort(int dizi[], int n){
	int ekle, k, i;
	for(i=1; i<n; i++){
		ekle=dizi[i];
		for(k=i-1; k>=0 && ekle<= dizi[k]; k--)
			dizi[k+1]=dizi[k];
			dizi[k+1]= ekle;
		
	}}

	
int main() {
	int i=0;
	int dizi[5];
	
	printf("siralamak istediðiniz 5 sayiyi giriniz:\n");
	while(i<5){
		scanf("%d", &dizi[i]);
		i++;
	}
	i=0;
	intertionsort(dizi, 5);
	
	while(i<5){
		printf("%d", dizi[i]);
		i++;
	}
	return 0;
}
