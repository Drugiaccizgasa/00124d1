#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
	
	//Deklaracija
	int sat;
	int min;
	
	//Unos I
	scanf("%d%d",&sat,&min);
	
	//Racunanje
	int sec1 = sat * 60 * 60;
	int sac2 = min * 60;
	double sec = sec1 + sac2;
	//Ispis
	printf("%.0lf sec\n",sec);
	
	//Kraj
	system("pause");
	return 0;
	
}
