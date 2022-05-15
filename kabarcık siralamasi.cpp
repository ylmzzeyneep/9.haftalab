#include <stdio.h>
void bubblesort(int dizi[], int n){
	int gecici;
	
	for(int i=0; i<n; i++){
		for(int k=0; k<n-1-i; k++){
			if(dizi[k]>dizi[k+1]){
				gecici=dizi[k];
				dizi[k]=dizi[k+1];
				dizi[k+1]=gecici;
			}
		}
	}
}

int main(){
	int i=0;
	int dizi[5];
	
	printf("siralamak istediðiniz 5 sayiyi giriniz:\n");
	while(i<5){
		scanf("%d", &dizi[i]);
		i++;
	}
	i=0;
	bubblesort(dizi, 5);
	
	while(i<5){
		printf("%d", dizi[i]);
		i++;
	}
	return 0;
}


