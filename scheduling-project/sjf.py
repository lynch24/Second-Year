#!/usr/bin/env python3

# Author: Ciara Lynch
# Student Number: 19353946
# CA216 Project Two CPU Scheduling: Solo Version
# File: Shortest Job First

# I declare that this material, which I now submit for assessment, is entirely my
# own work and has not been taken from the work of others, save and to the extent that such
# work has been cited and acknowledged within the text of my work. I understand
# that plagiarism, collusion, and copying are grave and serious offences in the university and
# accept the penalties that would be imposed should I engage in plagiarism, collusion or
# copying. I have read and understood the Assignment Regulations. I have identified
# and included the source of all facts, ideas, opinions, and viewpoints of others in the
# assignment references. Direct quotations from books, journal articles, internet sources,
# module text, or any other source whatsoever are acknowledged and the source cited are
# identified in the assignment references. This assignment, or any part of it, has not been
# previously submitted by me or any other person for assessment on this or any other
# course of study. 

''' Shortest job first deals with sorting the tasks on the shortest job  '''

def shortest(list):                                                                                # Shortest Function.
   return list[2]                                                                                  # Sorts at index 2.


def format_table(process,waitingtime,turnaroundtime):                                             # Formatting Function.

   heading = '\nShortest Job First: \n'                                                            # Assinging this string to the heading so it prints algorithm name.
   print(heading)                                                                                  # Prints the heading of Algorithm
   heading2 = "Task Name: \tPriority: \t Burst time: \t"                                           # Headings
   print("_" * 44)                                                                                 # Prints table       
   print(heading2)                                                                                 # Print headings2 
   for i in range(0,len(process)):                                                                 # For loop to help me print the lists and tasks in correct format.  
        text =  f"    {process[i][0]}\t           {process[i][1]}\t              {process[i][2]}"  # Formatting with tabs 

        print(text)                                                                                # Prints Task Name, Priority, Burst time in correct format.
   print("Average Waiting Time: \n" + str(sum(waitingtime)/ len(process)) + "ms")                  # Prints the average wait time by converting the value to a string for correct format.
   print("Turn Around Time: \n" + str(sum(turnaroundtime) / len(process))+ "ms" )                  # Prints the turn around time by converting the value to a string for correct format.


def sjf(tasks):                                                                                    # Shortest job first function
   shortest_job = []                                                                               # List associated with this algorithm
   process = []                                                                                    # List for this process.
   burst_time = []                                                                                 # Burst time list to make calculations easier.
   complete_time = []                                                                              # Completion time list we need eg 45.
   wait_time = []                                                                                  # Wait time list.
   avgwt = 0                                                                                       # Average wait time variable.
   tat = 0                                                                                         # Turn around time variable.
   
   for token in tasks:
      shortest_job.append(token.split(' '))                                                        # Apppends token split into shortest job.
      process.append(token.split(' '))                                                             # Splits list into tokens.
   shortest_job.sort(key=shortest)                                                                 # Sets the key to the shortest function built above.


   for item in shortest_job:                                                                       # Checks if item is in the shortest job list.
        burst_time.append(int(item[2]))                                                            # Appending the index two of the list, have to make it an 'int' as it was printing as it was a string.

   for i in range(0, len(burst_time)):                                                             # Checks the range of the list and the length of burst time.
      if i < 1:                                                                                    # This if statement checks if i is less than one.
         complete_time.append(burst_time[i])                                                       # Appends burst time to complete time. 
      else:
         complete_time.append(burst_time[i] + complete_time[i - 1])                                # Appends burst time I and the complete time at index i minus one.
   tat = complete_time                                                                             # Turn around time is the sum of complete time.
    

   for i in range(0, len(complete_time)):                                                          # Checks the complete_time list.
      wait_time.append(complete_time[i] - burst_time[i])                                           # Appends compelete time[i] - burst time[i] to the wait time list. 
   avgwt = sum(wait_time) / len(complete_time)                                                     # Average wait time is the sum of wait time divided by the length of complete time.

   format_table(process,wait_time,tat)                                                             # Calling the formatting table function.