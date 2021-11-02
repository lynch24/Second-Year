#include <stdio.h> 
#include <stdlib.h> 

int main (int argc, char  **argv) 
{
	int input = atoi(argv[1]);
	
	FILE* fptr; 

	/*Creates the random numbers txt file which my algorithms will take*/
	fptr = fopen("numbers.txt", "w");
	int num; 
	if (fptr == NULL) { 
		printf("ERROR"); 
		exit(1); 
	} 
  	for (num = 0; num < input; num++)
  	{
		/*to generate random numbers. Max value = 2 x input*/
		int val = rand() % (input * 2); 

		/*Print output to file*/
		fprintf(fptr, "%d ", val); 
	} 

	/*Closes random_numbers.txt and if successful will display message in print statement*/
	fclose(fptr); 
	printf("%d Random Numbers Generated\n", input); 

	return 0;
}