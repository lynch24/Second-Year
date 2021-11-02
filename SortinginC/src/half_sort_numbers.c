    #include <stdio.h> 
    #include <stdlib.h> 
    #include <time.h>
/*
Author: Ciara Lynch
*/
    int main (int argc, char  **argv) 
    {
        /*Declaring my variables*/
        int *input; 
        int j,i;
        int tmp;
        FILE* fptr; 
        /*Takes amount of numbers users wants from command line*/
        input=malloc(sizeof(int)*atoi(argv[1]));
        /*Creates the random numbers txt file which my algorithms will take*/
        fptr = fopen("numbers.txt", "w");
        int num;
        if (fptr == NULL) { 
            printf("ERROR"); 
            exit(1); 
        } 
        for (num = 0; num < atoi(argv[1]); num++)
        {
            /*to generate half sorted numbers*/
            int val = rand() % 1000;
            input[num] = val;

            
            
        }
        /* The following foo loop helps the program generate half sorted numbers from users input*/
            for(j=0;j<atoi(argv[1])/2;j++)
            {
                if(input[j]>input[j+1])
                {
                    tmp=input[j];
                    input[j]=input[j+1];
                    input[j+1]=tmp;
                }
            }
        /*Message printed when numbers generated*/
        printf("%d Half Sorted Numbers Generated\n",atoi(argv[1]));
        for(i=0;i<atoi(argv[1]);i++)
        {   srand(time(NULL));
            /*Print output to file*/
            fprintf(fptr, "%d\n", input[i]);
        }
        /*closes file when complete*/
        fclose(fptr);

        return 0;
    }


