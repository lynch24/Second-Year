#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "func.h"   //Takes function from header file
#define MAX_ARGS 70     //Taken directly from lab 4B

//Author: Ciara Lynch
//Student Number: 19353946
//Project One CA216 Shell Enviroment
//Reference: I have referenced lab4b on the CA216 website


//Where commands are called and executed.
int main(int argc, char *argv[]){
    char cmd[MAX_ARGS]; // idea taken from lab 4B

    while(strcmp(cmd,"exit") != 0){
    shell_env();    //Print statement to show user is in shell enviroment
    fgets(cmd,MAX_ARGS, stdin); //The fgets function here helps me execute my commands
    help(cmd);  //Displays built in help menu
    pwd(cmd);   //Prints working directory(not asked for in spec)
    dir(cmd);   //Prints a list of directories
    ls(cmd);    //Lists directories but also deals with all ls commands not specified on spec but wanted to implement
    clear(cmd); //Clears screen
    echo(cmd);  //Echos arg put in by user
    cd(cmd);    //Changes working directory
    environ(cmd);   //Environ command to display eniroment variables
    quit(cmd);  //Exits the program when user tells it 
    ps(cmd);    //List all processes running in real time
    pauses(cmd); //When pause is entered the programs ask do you wish to continue

    }
   }
