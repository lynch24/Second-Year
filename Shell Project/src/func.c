#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX 300 
//Author: Ciara Lynch
//Student Number: 19353946
//Project One CA216 Shell Enviroment
//Purpose: This C file holds all relevant functions for my project
/* References:
    1. https://www.tutorialspoint.com/c_standard_library/c_function_strncmp.htm (see ls and echo function)
    2. https://www.tutorialspoint.com/c_standard_library/c_function_strncat.htm (see ls and echo function)
    I used the strcmp function here as I first experimented with a while loop, I was looking
    for it to check the first to letters of input in this case "ls" and "echo". However when began to break
    other functions I have built. so I decided to use the built in string functions strncat and strncmp please
    see links above.
*/


//Prints the shell enviroment.
void shell_env(){
    char dir[100];      //Storing dir in a array.
    getcwd(dir,100);    //Gets current working directory.
    printf("\033[0;36m"); //Changes text to blue.
    printf("%s $ ",dir); //Prints the current working directory.
    printf("\033[0;37m"); //Converts text to white.

}
//Displays help menu.
int help(char cmd[]){

    if(strcmp(cmd,"help\n") == 0){ //Compares help string to command entered.

    system("more ../manual/readme"); //Using more here as in a normal terminal it displays file and i have path specified to manual directory
    }
    return 0;
}

//Displays list of all directories.
int dir(char cmd[]){
    if((strcmp(cmd, "dir\n") == 0)) {   //Compares dir string to command entered.
    system("ls -l");    //Lists all files in directory user is in
    }
    return 0;
}

//Deals with all ls commands, not asked for but deals with all!
int ls(char cmd[]){
	
	if((strncmp(&cmd[0],"l",1) == 0)&& strncmp(&cmd[2],"s",1))  //Compares string to command entered, also compares cmd at index zero amd two making sure it l/s and sees if its one character.

	{
	   system(cmd); //Rather than system ls using cmd as it will read what users input eg ls ~ lists all the contents of your home directory
	}
	return 0;
}
//Clears screen.
int clear(char cmd[]){

    if(strcmp(cmd, "clr &\n") == 0){ //Compares cmd to clear
        int clears = fork(); //Naming fork to match command,program splits child process goes on from this line
        if(clears == 0){
            system("clear");
            exit(0); //Forefully exits this process
        }
        }        

    if(strcmp(cmd,"clr\n") == 0){//Compares clr string to command entered
    system("clear");   //System clear and clears screen
    }
    wait(NULL);  //Allows child process to fully execute.
    return 0;
}


//Prints working directory.
int pwd(char cmd[]){

    if(strcmp(cmd, "pwd &\n") == 0){    //Compares pwd to the command entered
        int prinwd = fork();    //Naming fork to match command,program splits child process goes on from this line
        if(prinwd == 0){
            system("pwd");
            exit(0);    //Forefully exits this process
        }
        }        

    if(strcmp(cmd,"pwd\n") == 0){   //Compares string to command entered
    system("pwd");   
    }
    wait(NULL);  //Allows child process to fully execute.
    return 0;
}
//Echos what user enters on command line.
int echo(char cmd[])
{
    char str[5] = "";   
    //Checks the first four letters
    for(int i = 0; i < 4; i++)
    {
    	strncat(str, &cmd[i], 1);
    }
    //Compares the string to the whats entered on the command line in this case echo
    if(strcmp(str, "echo") == 0)
    {
    	//For loop that help user enter things to echo
    	for(int item = 5; item < strlen(cmd); item++)
    	{
    	   printf("%c", cmd[item]); //Takes the arg and echos it to newline
	}
    }
    return 0;
}

//Quit function. 
int quit(char cmd[]){
	if(strcmp(cmd,"quit\n") == 0){  //Compares string to command entered.
    printf("Ok Exiting\n");     //Message displayed when quit is entered
    sleep(1);   //Sleeps for 1 
    printf("..\n");     //Displays after it sleeps for one.
	exit(0);    //No system call so you have to forcefully exit the shell.
	}
    return 0;
}

//Environ function.
int environ(char cmd[]){

    if(strcmp(cmd, "environ &\n") == 0){
        int enviroment = fork(); //Naming forks to match commands, program splits child process goes on from this line
        if(enviroment == 0){
            system("env"); 
            exit(0); //Forefully exits this process
        }
    }
    if(strcmp(cmd,"environ\n") == 0){//Compares string to command entered
    system("env");   //system call for env.
    }
    wait(NULL); //allows child process to fully execute.
    return 0;
}
//cd function which can go up and back a directory.
int cd(char cmd[]){
    if(strcmp(cmd,"cd\n") == 0){//Compares string to command entered.
        system("pwd"); //prints the current working directory.
    }
    else 
    {
        //Example of dynamic memory allocation
        char *dir = (char*)calloc(MAX, sizeof(char)); //Declaring dir as a dynamic array and defining max as 300     
        for(int i = 3; i < strlen(cmd) - 1; i++) // Loops through command entered.
        {
            strncat(dir, &cmd[i], 1);
        }
        chdir(dir); //chdir takes users input and executes. for example cd 2021-ca216-myshell/src and backwards too cd ../../
    }

    return 0;
}
//Pause function.
int pauses(char cmd[]){

    if(strcmp(cmd, "pause\n") == 0)     //Compares cmd to pause if not done the function would be an infinte loop
    {
        char pause[100];    //Created an array to store pause
        while(1){
            printf("Please press enter to continue!\n");
            fgets(pause, 100, stdin); //fgets helps take in the command
            if(strcmp(pause, "\n") == 0)    //Comparing the string to enter which in this case is a newline
            {
                return 0; 
            }
        }
    }
    return 0;
}

//Extra command i decided to add.
//Lists all processes running in real time.
int ps(char cmd[]){

    if(strcmp(cmd,"ps &\n") == 0){
        int proc = fork(); //Naming fork to match command,program splits child process goes on from this line
        if(proc == 0){
            system("ps");
            exit(0);    //Forefully exits this process
        }
    }
    if(strcmp(cmd,"ps\n") == 0 ){   //Compares string to command entered
        system("ps");
    }
    wait(NULL); //Allows child process to fully execute.
    return 0;
}