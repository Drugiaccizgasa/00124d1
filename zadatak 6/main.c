#include <stdio.h>

int main(){
	
	int a;
	scanf("%d",&a);
	int s = a/100;
	int d = (a/10)%10;
	int j = a % 10;
	printf("%d\n%d\n%d\n",s,d,j);
	printf("%d\n",s+d+j);
	printf("%f\n",(s+d+j)/3.0);
	system("pause");
	
}
