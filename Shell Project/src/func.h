#ifndef FUNC_H
#define FUNC_H

//Author: Ciara Lynch
//Student Number: 19353946
//Project One CA216 Shell Enviroment
//Purpose: This header files is for declaring my functions, in func.c

//Declaring functions
void shell_env();
int help(char cmd[]);
int pwd(char cmd[]);
int dir(char cmd[]);
int clear(char cmd[]);
int ls(char cmd[]);
int echo(char cmd[]);
int quit(char cmd[]);
int environ(char cmd[]);
int cd(char cmd[]);
int ps(char cmd[]);
int pauses(char cmd[]);
#endif 
