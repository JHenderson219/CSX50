#include <stdio.h>

int main (){
	int minutes;

	printf("How many minutes did you shower: ");
	scanf("%i", &minutes);

	int mult = 12;
	int result = mult*minutes;

	printf("Number of minutes in shower is:%i",result);
	return (0);
}