#include <stdio.h>

int main(){
	int sec;
	scanf("%d",&sec);
	int h = sec / 3600;
	int m = (sec%3600) / 60;
	int s = (sec%3600) % 60;
	printf("%d h %d m %d s",h,m,s);
}
