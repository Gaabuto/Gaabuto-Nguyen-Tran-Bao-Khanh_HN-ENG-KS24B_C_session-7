#include <stdio.h>

int main(){
	int i, array[5];
	for (i = 0 ; i < 5 ; i ++){
	printf("moi ban nhap phan tu cua mang: ");
	scanf("%d", &array[i]);
	}
	printf("5 phan tu cua mang ban da nhap la: ");
	for (i = 0 ; i < 5 ; i ++){
	printf("%d ", array[i]);
	}
	
	
	return 0;
}
