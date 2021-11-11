#include<unistd.h>
#include<stdio.h>
int main (int argc, char **argv){
	float L,l,P;
	printf("donner la longueur: \n ");
	scanf("%f",&L);
	printf("donner la largeur:\n ");
	scanf("%f",&l);
	P=2*(L+l);
	printf("la circonférence la rectangle est %f",P);
	
	
	return 0;
}
