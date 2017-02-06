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
  hello.xcodeproj 
  hello --+
          +- main.c
```

Installation:

Terminal `cmd+space` > `xcode-select --install`




