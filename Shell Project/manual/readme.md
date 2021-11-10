 A Shell User Manual for beginners
Author: Ciara Lynch
Student number: 19353946


Introduction:

Hello and welcome to my user manual on my shell i have made!, my shell is very basic however i think this manual will help a first time user
interact with it, below are the list of commands that work within my shell.


Commands:
- cd
- echo
- ls
- clear
- dir
- quit
- pwd
- environ
- pause
- ps
- plagarism statement
- references

 cd:

cd is the command that deals with changing diretories, unix for example say you have a directory called **CA216** containing the files **labs** and within that directory their is three subdirectories **week1**, **week2** and finally **week3**. The user had decided they want to access their week one labs, the example below is how they would go about doing it.
cd example 1
```shell
$ cd CA216/labs/week1
CA216/labs/week1 $
```

cd not only can find its way into directories but it can also go back a directory if it wishes, it is simple dont panic! say if the user is in their **week1** folder and wants to access the **labs** folder again.They simply enter


 cd example 2
```shell 
CA216/labs/week1 $ cd ../
CA216/labs/ $
```

echo:

Echo is a easy command in unix, it essentially does what you think. Just imagine you are in a room with an echo what happens when you say "Hello"? correct the noise bounces back this is how you do exactly that in unix. The first example shows us what echo does with an arguement the second one shows us what happens without one.

echo with arguement:
    ```shell 
    $echo hello
    hello
    $
    ```

echo with no arguement
    ```shell 
    $ echo 
    
    $
    ```



ls:

  The ls command is simple to understand, imagine you have cd into the **CA216** folder mentioned above and you want to acess its contents you simply type in ls which will list the folders
  subdirectories. 

Regular ls
        ```shell
        CA216 $ ls
        week1 week2 week3
        ```

There are also multiple different types of ls commands here are some examples below

Lists by date and timestamp
          ```shell
          $ ls -t
          ```
Lists with format and filesize
        ```shell
        $ ls -ls
        ```
List all hidden files
        ```shell
        $ ls -a
        ```


clear:

  The clear functiion removes all previous commands entered by the user, to do 
  this you simply type **clr**


Before clr:
    ```shell
    /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $ ls -l
    total 472
    -rwxr-xr-x  1 lynch01  staff   50512 10 Mar 19:03 a.out
    -rw-r--r--  1 lynch01  staff    3778 10 Mar 19:01 func.c
    -rw-r--r--  1 lynch01  staff     404  9 Mar 20:14 func.h
    -rw-r--r--  1 lynch01  staff  204736 10 Mar 19:03 func.h.gch
    -rw-r--r--  1 lynch01  staff      70 10 Mar 19:02 makefile
    -rw-r--r--  1 lynch01  staff    1158  9 Mar 20:44 myshell.c
    /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $ ls -t
    a.out           func.h.gch      makefile        func.c          myshell.c       func.h
    /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $ pwd
    /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $
    /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $  echo hi
    hi
    /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $  clr
    ```
After clr:
    
    ```shell
    /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $ clr
    ```
As you can see all previous commands were cleared from the users screen.



dir:

  The dir command is essentially like **ls** however it doesnt any other arguements like **ls** does. See example of this below 

      ```shell
      /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $ dir
      total 472
      -rwxr-xr-x  1 lynch01  staff   50512 10 Mar 19:03 a.out
      -rw-r--r--  1 lynch01  staff    3778 10 Mar 19:01 func.c
      -rw-r--r--  1 lynch01  staff     404  9 Mar 20:14 func.h
      -rw-r--r--  1 lynch01  staff  204736 10 Mar 19:03 func.h.gch
      -rw-r--r--  1 lynch01  staff      70 10 Mar 19:02 makefile
      -rw-r--r--  1 lynch01  staff    1158  9 Mar 20:44 myshell.c
      ```

quit: 

  The quit command in this case helps the user leave the shell enviroment I have created, It sleeps for one second and then sucessfully exits. the example bellow displays my current directory and what happens once I enter quit.

      ```shell
      /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $ quit
      Ok Exiting
      ..
      ```

pwd:

  pwd is a great command if you feel like you are creating or pushing stuff in the wrong directiory. You simply type **pwd** to see what location you are in see example below.

      ```shell
      /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $ pwd
      /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src
      ```
    


environ:

  The envrion command simply just prints out the enviroment variables, see below how to use this command and expected output.

      ```shell
      /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $ environ
      TERM_PROGRAM=vscode
      TERM=xterm-256color
      SHELL=/bin/zsh
      TMPDIR=/var/folders/g2/y07cjsl94857nrtr1gbld5mc0000gn/T/
      CONDA_SHLVL=1
      TERM_PROGRAM_VERSION=1.50.0
      CONDA_PROMPT_MODIFIER=(base) 
      ORIGINAL_XDG_CURRENT_DESKTOP=undefined
      USER=lynch01
      CONDA_EXE=/Users/lynch01/Desktop/opt/anaconda3/bin/conda
      SSH_AUTH_SOCK=/private/tmp/com.apple.launchd.pG6iAyhGFh/Listeners
      __CF_USER_TEXT_ENCODING=0x1F5:0x0:0x2
      _CE_CONDA=
      PATH=/Library/Frameworks/Python.framework/Versions/3.6/bin:/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin:/Users/lynch01/Desktop/opt/anaconda3/bin:/Users/lynch01/Desktop/opt/anaconda3/condabin:/Library/Frameworks/Python.framework/Versions/3.6/bin
      _=/usr/bin/env
      CONDA_PREFIX=/Users/lynch01/Desktop/opt/anaconda3
      PWD=/Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src
      LANG=en_GB.UTF-8
      XPC_FLAGS=0x0
      _CE_M=
      XPC_SERVICE_NAME=0
      SHLVL=2
      HOME=/Users/lynch01/Desktop
      VSCODE_GIT_ASKPASS_MAIN=/private/var/folders/g2/y07cjsl94857nrtr1gbld5mc0000gn/T/AppTranslocation/806435B0-EA6B-4EE0-9047-56ED6A23D21D/d/Visual Studio Code.app/Contents/Resources/app/extensions/git/dist/askpass-main.js
      CONDA_PYTHON_EXE=/Users/lynch01/Desktop/opt/anaconda3/bin/python
      LOGNAME=lynch01
      VSCODE_GIT_IPC_HANDLE=/var/folders/g2/y07cjsl94857nrtr1gbld5mc0000gn/T/vscode-git-3da4849581.sock
      CONDA_DEFAULT_ENV=base
      VSCODE_GIT_ASKPASS_NODE=/private/var/folders/g2/y07cjsl94857nrtr1gbld5mc0000gn/T/AppTranslocation/806435B0-EA6B-4EE0-9047-56ED6A23D21D/d/Visual Studio Code.app/Contents/Frameworks/Code Helper (Renderer).app/Contents/MacOS/Code Helper (Renderer)
      GIT_ASKPASS=/private/var/folders/g2/y07cjsl94857nrtr1gbld5mc0000gn/T/AppTranslocation/806435B0-EA6B-4EE0-9047-56ED6A23D21D/d/Visual Studio Code.app/Contents/Resources/app/extensions/git/dist/askpass.sh
      COLORTERM=truecolor
      ```


pause:

  The command simply haults the shell and gives the user the opition to resume with a simple click of the enter button.
      
      ```shell
      /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $ pause
      Please press enter to continue!
      ```

ps:

  The ps is a very interesting command within the shell, it lists all current processes running in real time.

      ```shell
      /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $ ps
        PID TTY           TIME CMD
      76580 ttys000    0:01.07 /bin/zsh --login -i
      38624 ttys001    0:00.45 /bin/zsh -l
      53266 ttys001    0:00.00 ./a.out
      /Users/lynch01/Desktop/second year/sem2/CA216/myshell/2021-ca216-myshell/src $ 
      ```

Plagarism statement:

I hereby declare that all information in this assignment has been obtained and presented in
accordance with academic rules and ethical conduct and the work I am submitting in this
document, except where I have indicated, is my own work.


Proccess concepts:

A process is a program that is executing, an **execution** of must execute in a sequence fashion. 


Background and Foreground execution:

Foreground execution:   
                  - A foreground process is a command you can run directly from the command prompt and wait for it to run,
                  for example dir, once a user enters that command you have to wait for the computer to gather the list of files
                  and directories present. once the command carries out you can continue to interact with the shell.

Background execution:
                  - A background process is a command that runs in the background regardless of user input on the shell, where as 
                  explained above in a foreground process you need to give user input.

References:

The link below helped me understand the forking process in C.

| Operating System Concepts, 9th Edition |      Link |
| --- | --- |
| `Chapter 4.6.1 THE FORK() AND EXEC() SYSTEM CALLS` | https://learning.oreilly.com/library/view/operating-system-concepts/9781118063330/11_chapter04.html|

Advanced Programming in the UNIX® Environment, Third Edition |      Link |
| --- | --- |
| `Chapter 8.3 FORK FUNCTION ` |https://learning.oreilly.com/library/view/advanced-programming-in/9780321638014/ch08.html|

