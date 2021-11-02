#!/usr/bin/env python3

# Author: Ciara Lynch
# Student Number: 19353946
# CA216 Project Two CPU Scheduling: Solo Version
# File: Round_robin.py

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


''' Round Robin deals with quantum time, for example if a process arrives with a burst time of 30ms it will automatically be changed back to 10, it then adds 
    remainder to be executed later it then moves to the next process    '''


def wait_time(list1,list2):
    wait_time = []                                                                                 # Wait time list.
    for i in range(0, len(list1)):                                                                 # Checks that i is in range of list one.
        wait_time.append(list1[i] - list2[i])                                                      # Then addas list one minus list two to the wait time list.
    return wait_time                                                                               # Returns the wait time list.

def  format_table(process,waitingtime,turnaroundtime):                                                     # Formatting Function.

   heading = '\nRound Robin: \n'                                                                    # Assinging this string to the heading so it prints algorithm name.
   print(heading)                                                                                   # Prints the heading.
   print("_" * 44)                                                                                  # Prints table.  
   heading2 = "Task Name: \tPriority: \t Burst time: \t"                                            # Headings.
   print(heading2)                                                                                  # Print headings.
   for i in range(0,len(process)):                                                                  # For loop to help me print the lists and tasks in correct format.  
        text =  f"    {process[i][0]}\t           {process[i][1]}\t              {process[i][2]}"   # Formatting with tabs.
    

        print(text)                                                                                 # Prints Task Name, Priority, Burst time in correct format.
   print("Average Waiting Time: \n" + str(sum(waitingtime)/ len(process))+ "ms")                    # Prints the average wait time by converting the value to a string for correct format.
   print("Turn Around Time: \n" + str(sum(turnaroundtime) / len(process))+ "ms")                    # Prints the turn around time by converting the value to a string for correct format.


def rr(tasks):

    process = []                                                                                    # List for this algorithm.
    burst_time = []                                                                                 # Burst time list to make calculations easier.       
    burst_time2 = []                                                                                # Burst time two list.
    avgwt = 0                                                                                       # Average wait time variable.
    tat = 0                                                                                         # Turn around time variable.
    quant = 10                                                                                      # Quantum time.


    for token in tasks:                                                                             # Checking if the token is in the list passed.
        process.append(token.split(' '))                                                            # Splits the output.

    for item in process:                                                                            # Checks if item is in process.
        burst_time.append(int(item[2]))                                                             # Adds item at index two to the burst time list.
        burst_time2.append(int(item[2]))                                                            # Adds the same thing to burst time two list.
    complete_time = [0] * len(burst_time)                                                           # The list complete time is equal is equal to index zero by length of burst time.

    burst_total = sum(burst_time)                                                                   # The burst total list holds the total of the sum of burst time.
    index = 0                                                                                       # Assigning index at zero.
    f_time = 0                                                                                      # Assigning finish time to zero.
    
    while burst_time != [0] * len(process):                                                         # This while loop checks that all the elements in burst time is zero and multiplies it by the length of process.

        if burst_time[index] == 0:                                                                  # If statement to check if bust time[index] is equal to zero.                              
            index+= 1                                                                               # Letting the index be plus or equal to one.
        elif burst_time[index] >= quant:                                                            # This statement is checking if the list burst time is at that index is greater or eqaul to quant time.
            f_time += 10                                                                            # Assigning Finish time  variable the value plus or equal to ten.
            complete_time[index] += f_time                                                          # Complete time plus or equal to Finish time.
            burst_time[index] -= quant                                                              # Burstime index  here is -= to quant time.
            index+= 1                                                                               # Index += to one
        elif burst_time[index] < quant:                                                             # Else if to check burst time is less than quant time.
            f_time += burst_time[index]                                                             # Finish time += to burst time index.
            complete_time[index] += f_time                                                          # Again like above complete time plus or equal to fintime.
            burst_time[index] -= burst_time[index]                                                  # Burst time at index i here is equal to itself minus itself.
            index+= 1
        if index == len(burst_time):                                                                # Checks if index is the length of burst time.
            index = 0                                                                               # Lets index equal zero.


    tat = complete_time                                                                             # Turn around time is equal to complete time.
    wt = wait_time(complete_time,burst_time2)                                                       # Wait time takes the wait time function and passes the parameters complete time and burst time.
    format_table(process,wt,tat)                                                                    # Calling the formatting table function.