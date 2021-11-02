#include <stdio.h> 
#include <time.h> 
#include <stdlib.h> 

/*
Author: Ciara Lynch
Algorithm: Quick Sort 
*/

void quick_sort(int randnum[],int first,int last);

int main() 
{ 
    /*Assinging the amount of numbers the algorithm will be sorting*/
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
  
    /*Starts timer for algorithm*/
    starttime = clock();
	quick_sort(randnum, 0, n - 1);

    /*Stops timer*/
    endtime = clock();  
    sorttime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC; 
    
    /*prints time and how many numbers sorted by set algorithm*/
    printf("Quick Sort of %d  Numbers = %f seconds\n", n, sorttime);

    /*Prints sorted numbers to its relevant text file*/
    fptr = fopen("quick_sort.txt", "w");  
    for (i = 0; i < dataset; i++)
        fprintf(fptr,"%d ", randnum[i]);
    /*Closes file*/
    fclose(fptr);
    /*frees memory*/
    free(randnum);  
    
    return 0;
}


void quick_sort(int randnum[],int first,int last)
{
   int i, j, pivot, swap;

   if(first<last)
   {
       /*positions*/
	  pivot=first;
	  i=first;
	  j=last;

	  while(i<j)
	  {
		 while(randnum[i]<=randnum[pivot]&&i<last)
			i++;
		 while(randnum[j]>randnum[pivot])
			j--;
		 if(i<j)
		 {
			swap=randnum[i];
			randnum[i]=randnum[j];
			randnum[j]=swap;
		 }
	  }

	  swap=randnum[pivot];
	  randnum[pivot]=randnum[j];
	  randnum[j]=swap;
	  quick_sort(randnum,first,j-1);
	  quick_sort(randnum,j+1,last);

   }
}

/*Refrenced my CA117 python script*/
/*
def quicksort(A, n, l):

    if n >= l:

        return
    q = partition(A, n, l)
    quicksort(A, n, q - 1)
    quicksort(A, q + 1, l)

def partition(A, n, l):
    q = j = n
    while j < l:
        if A[j] <= A[l]:
            A[q], A[j] = A[j], A[q]
            q += 1
        j += 1
    A[q], A[l] = A[l], A[q]

    return q */