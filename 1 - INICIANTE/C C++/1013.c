#include <stdio.h>

int main(){

	int a,b,c,d;
	
	scanf("%d %d %d", &a,&b,&c);
	
	d = a;
	
	if (a<b && c<b){
		d = b;
	};
	if (c>b && c>a){
		d = c;
	};
	
	printf("%d eh o maior\n", d);

    return 0;
}