#!/usr/bin/env python3

# Author: Ciara Lynch
# Student Number: 19353946
# CA216 Project Two CPU Scheduling: Solo Version
# File: Driver.py

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


''' Driver.py deals with importing everything from the relevant algorithms  '''


import sys
from fcfs import *                                                      # Importing my First come first served.
from sjf import *                                                       # Importing first come shortest job first.
from hpf import *                                                       # Importing priority. 
from round_robin import *                                               # Importing round robin


tasks = []                                                              # Tasks list.
with open(sys.argv[1],'r') as a:                                        # Opens file from command file and reads it in as a.
    for item in a:                                                      # Checks if item is in a and if so appends the item to the task list.
        tasks.append(item.replace(',','').rsplit('\n')[0])
     
fcfs(tasks)                                                             # Calls fcfs function.
sjf(tasks)                                                              # Calls shortest job first.
hpf(tasks)                                                              # Calls priority.
rr(tasks)                                                               # Calls round robin.