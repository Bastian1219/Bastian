#include<stdio.h>

int main(){
	float a,b,c,d; 
	printf("temperatura en celcius \n");
	scanf("%f", &a);
	printf("temperatura en farenheith \n");
	scanf("%f", &b);
	c= a*9/5+32;
	d= (b-32)*5/9;
	printf("celcius a farenheith \033[1m%f\n\033[0m",c);
	printf("farenheith a celcius \033[1m%f\n\033[0m",d);
	
	
	return 0;
}
