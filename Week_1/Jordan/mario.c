#include <stdio.h>

int main (){
	int height;
	printf("How tall should the pyramid be: ");
	scanf("%i", &height);
	if(height<0||height>24){
		printf("Try again!\n");
		printf("How tall should the pyramid be: ");
		scanf("%i", &height);
	}
	int numSpaces = height-1;
	int numHashes = 2;
	for(int i=0; i<height; i++){
		for (int j=0; j<numSpaces; j++){
			printf(" ");
		}
		for (int k=0; k<numHashes; k++){
			printf("#");
		}
		printf("\n");
		numSpaces--;
		numHashes++;
	}
	return (0);
}

//   ##
//  ###
// ####
//#####