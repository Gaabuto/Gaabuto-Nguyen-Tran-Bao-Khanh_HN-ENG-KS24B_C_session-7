#include <stdio.h>

int main(){
	int a,i;
	printf("moi ban nhap so phan tu co trong mang: ");
	scanf("%d", &a);
	int array[a];
	for (i = 0; i < a; i ++){
		printf("moi ban nhap phan tu la so le: ");
		scanf("%d", &array[i]);
		while ( array[i] % 2 == 0){
			printf("ban nhap so chan roi !! moi ban nhap so le:");
			scanf("%d", &array[i]);
		}
	}
	
	
	return 0;
}
