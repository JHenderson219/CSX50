#include <stdio.h>

int main (){
	char hash = '#';
	int height;
	printf("How tall should the pyramid be: ");
	scanf("%i", &height);

	for(int i=0; i<height; i++){
		printf("\n");
		for (int j=0; j<i; j++){
			printf("#");
		}
	}
	return (0);
}