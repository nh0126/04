#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	int inputx, inputy;

	printf("input two integers : ");
	scanf("%i %i", &inputx, &inputy);
	
	printf("+ result is %i \n", inputx + inputy);
  	printf("- result is %i \n", inputx - inputy);
  	printf("* result is %i \n", inputx * inputy);
  	printf("/ result is %i \n", inputx / inputy);
  	printf("%% result is %i \n", inputx % inputy);

	system("PAUSE");
	return 0;
}
