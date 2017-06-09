#include <stdio.h>

int main (){
	float in;
	do {
		printf("%s\n","Hello! How much change do you need?");
		scanf("%f", &in);
		printf("Made it to the do!\n");
			if (in<0){
				printf("Invalid input. Please try again.\n");
			}
		printf("Made it to the end if the while\n");
	} while (in<0);

	printf("Made it to the beginning of the main\n");
	
	float amount = in;
	int numPennies=0;
	int numDimes=0;
	int numNickels=0;
	int numQuarters=0;
	while (amount>0.24) {
		amount = amount-0.25;
		numQuarters++;
	} 

	printf("Quarters completed! Number: ");
	printf("%i%s",numQuarters, "\n");
	printf("%s%f\n","Amount is ",amount);
	while (amount>0.09) {
		amount = amount-0.10;
		numDimes++;
	} 

	printf("dimes completed! Number: ");
	printf("%i%s",numDimes,"\n");

	while(amount>0.04) {
		amount = amount-0.05;
		numNickels++;
	} 

	printf("nickles completed! Number: ");
	printf("%i%s",numNickels, "\n");

	while (amount>0) {
		amount = amount-0.01;
		numPennies++;
	} 

	printf("pennies completed! Number: ");
	printf("%i%s",numPennies, "\n");	
	
	int coins = numPennies+numDimes+numNickels+numQuarters;
	printf("Total number of coins is: ");
	printf("%i%s",coins, "\n");

	return (0);
}