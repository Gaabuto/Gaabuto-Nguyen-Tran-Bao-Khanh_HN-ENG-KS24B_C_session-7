#include <stdio.h>

int main(){
	int a,i, array[5] = {12,3,4,1,2};
	
	for ( i = 0; i < 5; i ++){
		if(array[i] % 2 == 0){
		printf("%d\n", array[i]);
		a = 1;
		}
	
	}
	
	if (!a){
		printf("mang k co so chan");
	}
	
	
	
	return 0;

}
