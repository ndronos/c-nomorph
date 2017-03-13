# int-shell
C/UNIX


## (K&R, 1988) 288p

```
    The C Programming Language
    ________________________________________

    Preface                               ix
    Preface to the First Edition          xi

1   A Tutorial Introduction                5
2   Types, Operators, and Expressions     35
3   Control Flow                          55
4   Funcions and Program Structure        67
5   Pointers and Arrays                   93
6   Structures                           127
7   Input and Output                     151
8   The Unix System Interface            169

A   Reference Manual                     191
B   Standard Library                     241
C   Summary of Changes                   259

    Index                                263
    ________________________________________

    Brian W. Kerninghan & Dennis M. Ritchie
    Prentice Hall
    1988, 1978
    2nd ed.
```


## (Klemens, 2015) 408p

```
    21st Century C
    ________________________________________

    Preface                               ix

I   The Environment

1   Set Yourself Up for Easy Compilation   1
2   Debug, Test, Document                 31
3   Packaging Your Project                65
4   Version Control                       93
5   Playing Nice with Others             107

II  The Language

6   Your Pal the Pointer                 123
7   Inessential C Syntax that Textbooks
         Spend a Lot of Time Covering    141
8   Important C Syntax that Textbooks
                     Often Do Not Cover  161
9   Easier Text Handling                 185
10  Better Structures                    205
11  Object-Oriented Programming in C     245
12  Parallel Threads                     289
13  Libraries                            321

    Epilogue                             341

A   C 101                                343
    Glossary                             363

    References                           367
    Index                                371
    ________________________________________

    Ben Klemens
    O'Reilly
    2015
    2nd ed.

    github.com/b-k/21st-Century-Examples
```


## (Gustedt, 2016) 310p

```
    Modern C
    _______________________________________

    Level 0.  Encounter                   1
    Level 1.  Acquaintance               13
    Level 2.  Cognition                  95
    Level 3.  Experience                167
    Level 4.  Ambition                  235

    List of Rules                       271

    Listings                            282
    Bibliography                        285
    Index                               289
    _______________________________________

    Jens Gustedt
    INRIA/ICube France
    2016

    gustedt.wordpress.com
    icube-icps.unistra.fr/index.php/Jens_Gustedt
    icube-icps.unistra.fr/index.php/File:ModernC.pdf
```


## Trade Tools

| C Language Tools|   |   |
|---|---|---|
|   |   |   |
| clang.llvm.org  | clang |   |
|       llvm.org  | llvm  |   |
|   |   |   |
| gcc.gnu.org     | gcc   |   |
|   |   |   |
| github.com/github/gitignore/blob/master/C.gitignore | .gitgnore |   |
|   |   |   |
| `sudo update-alternatives --config cc`              | cc        |   |
|   |   |   |
| Switching between GCC and Clang/LLVM using CMake    |  cmake    | stackoverflow.com/questions/7031126 |
|   |   |   |

## C on Mac

`Create a new Xcode project` > `OSX` / `Application` / `Command Line Tool` > `Language: C`

| Language:   |
| ---         |
| Swift       |
| Objective-C |
| C++         |
| C           |



Compiling/Run:

```
  $ gcc main.c -o main
  $ ./main
  
```
  NOTE: .gitignore won't catch `main` file


Project Structure:

```
  hello.xcodeproj       // Click just open Xcode
  hello --+
          +- main.c
```

Installation:

Terminal `cmd+space` > `xcode-select --install`


## C on Windows

  Abundance on C compilers
  http://www.th7.cn/Program/cp/201403/181210/shtml    |   www.cnblogs.com/oooweb/p/best-compilers-and-ides-for-cc-programmers.html

### [Dev C++](https://blodshed.net/devcpp.html)

  A free, portable, fast and simple C/C++ IDE   |   https://sourceforge.net/projects/orwelldevcpp/

### [Code::Blocks](http://codeblocks.org)

  The open source, cross platform, free C, C++ and Fortran IDE

### [Visual Mingw]


### [Eclipse CDT]


### [CLion](https://www.jetbrains.com/clion/specials/clion/clion.html) by [JetBrains](https://jetbrains.com)

  A cross-platform IDE for C and C++

  A power tool for a power language

  Fully Integrated C/C++ Development Environment

  [JetBrainsTV](https://www.youtube.com/user/JetBrainsTV)


## [GCC](https://gcc.gnu.org) [Documentation](https://gcc.gnu.org/onlinedocs/gcc/)

GNU Compiler Collection... for `C C++ Objective-C Go Fortran Ada`...

 `-std` standard version to compile `c99`
  

` ` default file output

```
  $ gcc main.c
  $ ./a.out

```


 `-o` output filename

```
  $ gcc main.c -o main
  $ ./main
  
```
  NOTE: .gitignore won't catch `main` executable file



## [Clang](http://clang.llvm.org) || [LLVM](http://llvm.org)

clang: ... C based language family frontend for LLVM `C C++ Objective-C`... for the `LLVM` compiler. 

`clang /klaNG/ latin: clangere; resound, resonant metallic sound`


## [Make](https://www.gnu.org/software/make/)

https://robots.thoughtbot.com/the-magic-behind-configure-make-make-install


---

# Hands-On


## (Igneus, 2015) 07:10:08
```
    Learn C Programming from Scratch - Build 20 Terminal Apps
    _________________________________________________________

1   Before we begin                                     48:47
2   Exercise file usage                                 07:06
3   Basic Theory While Writing Code                  01:15:27
4   Operations and Decisions                            56:02
5   Loops and Functions                              01:04:23
6   Coding is Fun                                       47:35
7   Advance C Programming                            01:40:25
8   Fun to Code Applications                            25:32
9   End Note and Quiz                                   00:00

    _________________________________________________________

    https://udemy.com/user/igneustechnologies
    Learn C as Your First Programming Language
    2015
    
    https://udemy.com/learn-c-programming-from-scratch-build-20-terminal-apps/

```
### (LearnGood, 2016) 11:45:23
```
    C Programming for Beginners Hands-On
    ________________________________________________________

1   Introduction to C Language                         20:00
2   Bonus: IDE                                         00:00
3   Basic Elements of C Program                        45:09
4   Operators                                          43:55
5   Input Output Statements                         01:01:25
6   Conditional Statements                          01:02:53
7   Loop Statements                                 03:00:46
8   Arrays                                             50:03
9   Strings                                         01:09:20
10  Pointers                                           51:24
11  Functions                                          14:20
12  Class Specifiers                                   25:13
13  Type Modifiers                                     17:42
14  A Thank You GIFT for You                           00:00
15  Section for Continuity                             09:12
    ________________________________________________________

    https://udemy.com/user/leangoodin   
    ... from Baby Steps to Hardcore Programmer
    Learn the C Programming Language FAST
    2016

    https://udemy.com/c-programming-language-tutorial-from-baby-steps-to-hardcore-programmer/
```

## (HowStuffWorks, 2017) 41p
```
    The Basics of C Programming
    _________________________________________________________

1   What is C?
2   The Simplest C Program
3   The Simplest C Program: What's Happening?
4   Variables
5   printf
6   printf: Reading User Values
7   scanf
8   Branching and looping
9   Looping: A Real Example
10  Arrays
11  More on Arrays Variable Types
12  Functions
13  Functions: Function Prototypes
14  Libraries
15  Making a Library
16  Makefiles
17  Text Files
18  Text Files: Opening
19  Text Files: Reading
20  Pointers
21  Pointers: Why?
22  Pointers Basics
23  Pointers: Understanding Memory Addresses
24  Pointers: Pointing to the Same Address
25  Pointers: Common Bugs
25  Pointers: Common Bugs
26  Using Pointers for Function Parameters
27  Dynamic Data Structures
28  Dynamic Data Structures: The Heap
29  Dynamic Data Structures: Malloc and Free
30  Advanced Pointers
31  Pointers to Structures
32  Pointers to Pointers
33  A Linked Stack Example
34  Using Pointers with Arrays
35  Strings
36  Special Note on Strings
37  Operator Precedence
38  Command Line Arguments
39  Binary Files
40  More Great Links

    _________________________________________________________

    HowStuffWorks, Marshall Brain & Stephaine Crawford
    2017, 2011, 2000

    http://computer.howstuffworks.com/c.html/printable
    http://computer.howstuffworks.com/c.htm
```

```
    How C Programming Works
    _________________________________________________________

0   Intro
1   What is C?
2   Editing and Compiling C Code
3   The Simplest C Program
4   Common Programming Concepts in C
5   Functions in C
6   Function Prototypes
7   Data Types and Operations in C
8   Don't Start from Scratch, Use Libraries
9   Some Pointers about Pointers in C
10  Using Pointers Correctly in C
11  The Importance of Memory Management in C
12  More Great Links

    _________________________________________________________

    HowStuffWorks, Marshall Brain & Stephaine Crawford
    2017, 2011, 2000

    http://computer.howstuffworks.com/c-programming.htm/printable
    http://computer.howstuffworks.com/c-programming.htm

```

## Illustrating C (ANSI/ISO Version, Revised Edition) 214p

```
    Illustrating C (ANSI/ISO Version, Revised Edition)
    _________________________________________________

    Preface

1   Introduction                                    1
2   Concepts                                       11
3   Components                                     27
4   Control                                        51
5   Organization                                   65
6   Pointers, Arrays, Strings                      79
7   Input, Output                                 107
8   Structures, Unions                            125
9   Dynamic Storage                               143
10  Library                                       163
11  Summaries                                     195

    Bibliography                                  209
    Index                                         210
    _________________________________________________

    Donald Alcock
    Cambridge University Press
    2008, 1998, 1993, 1992
  


```

```
    C Programming: Wikibooks
    _________________________________________________


    _________________________________________________

    https://en.wikibooks.org/wiki/C_Programming
    2017
```

```
    cprogramming.com
    _________________________________________________


    _________________________________________________

    http://cprogramming.com/tutorial/c-tutorial.html
    http://www.cprogramming.com/whyc.html
    2011
```

```
    comp.lang.c FAQ list(s)
    C Programming FAQs: Frequently Asked Questions
    _________________________________________________


    _________________________________________________

    http://c-faq.com/versions.html
    http://c-faq.com/book/Errata.html
    http://eskimo.com/~scs/C-faq.top.html
    2017, 2002, 1996
```


```
    fresh2refresh.com
    _________________________________________________


    _________________________________________________

    http://fresh2refresh.com/c-programming/
    http://fresh2refresh.com/c-programs/
    http://fresh2refresh.com/c-programming/c-interview-questions-answers/
    http://fresh2refresh.com/c-programming/c-interview-questions-answers/
    2017
```


```
    Tutorialspoint - C Programming Tutorial
    _________________________________________________

    Home
    Overview
    Environment Setup
    Program Structure
    Basic Syntax
    Data Types
    Variables
    Constants
    Storage Classes
    Operators
    Decision Making
    Loops
    Functions

    _________________________________________________

    http://tutorialspoint.com/cprogramming/
    2017
```


