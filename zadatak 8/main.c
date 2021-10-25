#include <stdio.h>

int main(){
	
	int a,b;
	
	scanf("%d%d",&a,&b);
	
	//prvi
	int j1 = a % 10;
	int d1 = (a/10)%10;
	int s1 = a/100;
	
	//drugi
	int j2 = a % 10;
	int d2 = (a/10)%10;
	int s2 = a/100;
	
	float ars1 = (s1+d1+j1)/3.00;
	int zbr1 = s1+d1+j1;
	
	float ars2 = (s2+d2+j2)/3.00;
	int zbr2 = s2+d2+j2;
	
	int zbir = (s2+d2+j2) + (s1+d1+j1);
	int razlika = (s2+d2+j2) - (s1+d1+j1);
	float zbirars = ((s2+d2+j2)/3.00) + ((s1+d1+j1)/3.00) / 2.00;
	
	printf("ZBIR 1: %d\n ZBIR 2:%d \n ZBIR1+2:%d \n razlika1,2:%d \n Ars1: %f \n Ars2: %f\n zbirars12: %f\n", zbr1 ,zbr2 ,zbir , razlika, ars1, ars2, zbirars);
	
	return 0;

}
