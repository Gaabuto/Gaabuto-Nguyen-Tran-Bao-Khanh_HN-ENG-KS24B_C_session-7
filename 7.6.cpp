#include <stdio.h>

int main(){
	int a,i, array[5] = {12,3,4,1,2};
	for (i = 0; i < 5; i ++){
		if(array[i] % 2 == 0){
			array[i] = array[i] + 3;
		}else{
			array[i] = array[i] + 2;
		}
		
		printf("%d ", array[i]);
	}
	return 0;
}
