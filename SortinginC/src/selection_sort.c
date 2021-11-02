#include <stdio.h> 
#include <time.h>
#include <stdlib.h> 

/*
Author: Ciara Lynch
Algorithm: Selection Sort 
*/
void selection_sort(int randnum[], int n);

int main() 
{   /*Assinging the amount of numbers the algorithm will be sorting*/
    int dataset = 100;
    /*Random Numbers array size is equal to dataset*/
    int *randnum = (int*) malloc(dataset * sizeof(int));
    int i = 0, n = 0; 

    clock_t starttime, endtime;   
    double sorttime;  
  
    /*Opens numbers.txt*/
    FILE* fptr;  
    /*Opens Text file from either halfsorted or random numbers*/
    fptr = fopen("numbers.txt", "r");  

    while (fscanf(fptr, "%d", &randnum[i]) == 1)  
    { 
        n++;  
        i++;  
    } 
  
    /*Starts Timer*/
    starttime = clock();

    selection_sort(randnum,n);

    /*Stop Timer*/
    endtime = clock();  
    sorttime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC; 
  
    /*prints time and how many numbers sorted by set algorithm*/
    printf("Selection Sort of %d Numbers = %f seconds\n", n, sorttime);

    /*Prints sorted numbers to its relevant text file*/
    fptr = fopen("selection_sort.txt", "w");  
    for (i = 0; i < dataset; i++)
        fprintf(fptr,"%d ", randnum[i]);
    /*Closes file*/
    fclose(fptr);
    /*frees memory*/  
    free(randnum); 
    return 0;
}

void selection_sort(int randnum[], int n)
{
    int i = 0, j, min, x;
    for (i = 0; i < n - 1; i++) 
    { 
        min = randnum[i]; 
        for (j = i + 1; j < n; j++) { 
            if (randnum[j] < min) { 
                min = randnum[j]; 
                x = j; 
            } 
        } 
  
        /*swap smallest number with current number */
        int swap = randnum[i]; 
        randnum[i] = min; 
        randnum[x] = swap; 
    } 
}


/*Refrenced my CA116 python script*/
/*
#!/usr/bin/env python


def swap(a, i, j):
   tmp = a[i]
   a[i] = a[j]
   a[j] = tmp

def selection_sort(a):
   i = 0
   while i < len(a):
      p = i
      j = i + 1
      while j < len(a):
         if a[j] < a[p]:
            p = j
         j = i + 1
      swap(a, p, i)
      i = i + 1*/