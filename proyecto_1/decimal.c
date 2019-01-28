#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<conio.h>
int b,d=0,e=0,c=0;

int main(){
	
	printf("Numero Binario");
	scanf("%i",b);
	while(b>=10){
		c=0;
		while(b>=10){
			b=b-10;
			c++;
		}
		d=d+b*pow(2,e);
		e++;
		b=c;
	}
	d=d+c*pow(2,e);
	printf("El valor a decimal es %i",d);
	getch();
}
