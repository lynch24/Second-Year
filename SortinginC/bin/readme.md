# CA284 Systems Programming

## Introduction

This directory contains any binary files from your project.  When the `makefile` is run in the `src` directory, the compiled output (executable code) is copied here.  You may also move any datasets and/or other external files your program needs in order to run.  

Your source files should _not_ be located in this directory.

---

#### NOTE

Please make sure that the required dataset size is changed in the sorting algorithm source code before compiling

- For example,
    - if required dataset size is ``100`` for selection sort:
        ```c
        - selection_sort.c
        int dataset = 100;

        - make

        - ./random_numbers.out 100

        - ./selection_sort.out
        ```

        
