#include <stdio.h>

void main(){
	int a = 0, resultn = 0, n = 2;
	scanf("%d", &a);
	for (; n<a; n++){
		if (a%n==0){
		break;
		}
	}
	if (n==a) puts("Good");
}
