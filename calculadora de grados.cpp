#include<stdio.h>

int main(){
	float celsius= 16, fahrenheit=86;
	printf("temperatura en celcius %f\n",celsius);
	fahrenheit= celsius*(9/5.0)+32;
	printf("tempertura en fahrenheit %f\n",fahrenheit);
	printf("\n");
	
	printf("fahrenheit %f\n",fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("celcius %f\n",celsius);
	
	return 0;
}
