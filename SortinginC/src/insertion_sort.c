#include <stdio.h> 
#include <time.h>
#include <stdlib.h> 
/*
Author: Ciara Lynch
Algorithm: Insertion Sort 
*/
void insertionsort(int randnum[], int n);

int main() 
{ 
    /*Assinging the amount of numbers the algorithm will be sorting*/
    int dataset = 100;
    /*Random Numbers array size is equal to dataset*/
    int *randnum = (int*) malloc(dataset * sizeof(int));
    int i = 0, n = 0; 

    clock_t starttime, endtime;   
    double sorttime;  
  
    /*Assigning file fptr*/
    FILE* fptr;  
    /*Opens Text file from either halfsorted or random numbers*/
    fptr = fopen("numbers.txt", "r");  
    
    while (fscanf(fptr, "%d", &randnum[i]) == 1)  
    { 
        n++;  
        i++;  
    } 
  
    /*Starts timer*/
    starttime = clock();

    insertionsort(randnum,n);

    /*Stops timer*/
    endtime = clock();  
    sorttime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC; 
  
    /*prints time and how many numbers sorted by set algorithm*/
    printf("Insertion Sort of %d Numbers = %f seconds\n", n, sorttime);

    /*Prints sorted numbers to its relevant text file*/
    fptr = fopen("insertion_sort.txt", "w");  
    for (i = 0; i < dataset; i++)
        fprintf(fptr,"%d ", randnum[i]);
    /*Closes file*/
    fclose(fptr);
    /*frees memory*/ 
    free(randnum); 
    return 0;
}

void insertionsort(int randnum[], int n)
{
    int i = 1, p, v;
    for (i = 1; i < n ; i++) 
    { 
        p = i;
        v = randnum[i]; 
        while (0 < p && v < randnum[p - 1])
        { 
            randnum[p] = randnum[p - 1];
            p = p - 1; 
        randnum[p] = v;
        } 
    } 
}


/*Refrenced my CA116 python script*/

/*
#!/usr/bin/env python

s = raw_input()
a =[]



while s != "end":
	a.append(int(s))
	s = raw_input()




i = 1
while i < len(a):
   v = a[i]
   p = i
   while 0 < p and v < a[p-1]:
      a[p] = a[p-1]
      p = p - 1
   a[p] = v

   i = i + 1


print a*/