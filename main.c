#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	int input;
    int sec, min, hr;

	printf("input the second : ");
    scanf("%i", &input);
	
	sec = input % 60;
    min = (input/60)%60;
    hr = input/3600;

    printf("The time for %i second is %i : %i : %i \n", input, hr, min, sec);
	
	system("PAUSE");
	return 0;
}
