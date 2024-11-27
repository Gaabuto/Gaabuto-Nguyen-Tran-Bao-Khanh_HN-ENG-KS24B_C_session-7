#include <stdio.h>

int main(){
	int a,i, minmax[5] = {12,3,4,1,2};
	int max = minmax[0], min = minmax [0];
	
	for (i = 0; i < 5; i ++){
		if ( minmax[i]> max){
			max = minmax[i];
		}
		if(minmax[i]< min){
			min = minmax[i];
		}
	}
	
	printf("so lon nhat trong 5 so la %d\n", max);
	printf("so nho nhat trong 5 so la %d", min);
}
