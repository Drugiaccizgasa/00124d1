#include <stdio.h>
int main(){
	double a,b;
	scanf("%lf%lf",&a,&b);
	double c = a+b;
	double ars = (a+b)/2;
	double kv = (a*a)+(b*b);
	printf("%.2lf\n",c);
	printf("%.2lf\n",ars);
	printf("%.2lf\n",kv);
}
