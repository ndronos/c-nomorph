## (HowStuffWorks, 2017) 41p

## How C Programming Works
```
If you are an IT specialist, you could also benefit from learning C.
IT professionals often write, maintain and run scripts as part of their job.
A script is a list of instructions for a computer's operating system to follow.
To run certain scripts, the computer sets up a controlled execution environment
called shell. Since most operating systems runs shell based on C,
C shell is a popular scripting adaptation of C used by IT pros.


(HowStuffWorks, 2017) pp. 1
```

```
... you'll better understand what high-level languages are doing behind the scenes,
such as memory management and garbage collection.
This understanding can help you write programs that work more efficiently.


(HowStuffWorks, 2017) pp. 1
```

```
What is C?
...
Assembly programs, which speak directly to hardware,
are long and difficult to debug, required tedious/time consuming work to add new features.

BCPL  1967  /Basic Combined Programming Language      /"Before C" PL
B           /Ken Thompson   /first attempt at a high-level language   /BCPL based
 C    1970s /Ken Thompson     /Dennis Ritchie   /Bell Labs  /friendly+ instructions for UNIX  /DEC PDP-11
K&R   1978  /Brian Kernighan  /Dennis Ritchie   /"White Book"   /pre-standard
K&R   1988  /2nd Edition

When Bell Labs acquired DEC PDP-11, Thompson reworked B to better fit the demands
of the newer, better system hardware. Thus, B's successor, C, was born.
By 1973, C was stable enough that UNIX itself could be rewritten using... C.

To ensure that people didn't create their own dialects over time,
C developers worked through the 1980s to create standards for the language.

C89   1989  /ANSI C   /ISO C
C99   1999  /Revision

As computer became more powerful, demand increased...
to build their own compilers, and thus
their own new programming languages, using C.
These new languages could simplify coding complex tasks with lots of moving parts...



(HowStuffWorks, 2017) pp. 1
```

```
Common Programming Concepts in C

functions:

    block of code,
    what computer should do when the program runs
    
variables:

    add flexibility to run programs without knowing values ahead of time
    like in Algebra, a variable is a placeholder that stands for some value

operations:

    built-in operations specifically designed for things to do with your data

loops:

    repeat an action some number of times, based on certain conditions
    a block of code designed to repeat based on give conditions

data structures:

    when need to sort or search through a lot of data
    structured way of representing several pieces of data of the same data type
    C has libraries available to handle some common data structures,
    though you can always write functions and set up your own structures, too.

preprocessor operations:

    instructions on things to do BEFORE compiling into the executable
    like including code from C libraries and 
    substituting constant values...


(HowStuffWorks, 2017) pp. 4
```

```
C also requires programmers to handle some concepts which many programming languages
have simplified or automated. These include:
  - pointers
  - memory management
  - garbage collection

...
Before you move on to tackle a dense C programming guide,
let's take a user-friendly look at the core concepts among those listed above...


(HowStuffWorks, 2017) pp. 4
```



---



## The Basics of C Programming

```
... you will be able to read and write code for a large number of platforms -
everything from microcontrollers to the most advanced scientific systems
can be written in C, and many modern operating systems are written in C.
...


(HowStuffWorks, 2017) pp. 1
```

```
The Simplest C Program: What's Happening?

...
stdio.h   Standard I/O Library
          standard in  ~ keyboard
          standard out ~ screen

A library is simply a package of code that someone else has written...

{ }       block


(HowStuffWorks, 2017) pp. 3
```
- man 3 printf

```
Variables

int i;  // Create a space called `i` able to hold integer value

(HowStuffWorks, 2017) pp. 4

```

```
Printf: Reading User Values

%x    Placeholder must match types and number/order of parameters


(HowStuffWorks, 2017) pp. 6
```

```
Scanf

  &   Address Operator (topic: pointers)
      need to use with `scanf`

      can do a lot of different things
      but generally unreliable unless used in the simplest ways
                            |--> because it does not handle human errors very well.

      in a real program, you will `gets` or `fgets` functions instead
                                                    to read text a line at a time.
                                                    then parse the line to read its values

(HowStuffWorks, 2017) pp. 7
```
- man scanf

```

Make each error by itself and run...
By simulating error like these you can learn about different compiler errors,
and that will make your typos easier to find when you make them for real.
... watch how compiler reacts to... errors.


(HowStuffWorks, 2017) pp. 7
```

```
Branching and Looping

In C, both `if` statements and `while` loops rely on the idea of *boolean expressions*.

Here are all the Boolean operators in C:

    equality          ==      //  = to assign a value
    less than         <
    greather than     >
    <=                <=
    >=                >=
    inequality        !=
    not               !
    and               &&
    or                ||
    
The `,` comma operator lets you separate several different statements
        in the initialization and increment sections (but notin the test section)
        of the `for` loop

Boolean expressions evaluate to integers in C,
                            and integers can be used inside Boolean expressions

In C
      The integer value 0 is        False
      Any other integer value is    True
   or Anything other than 0 is      True


(HowStuffWorks, 2017) pp. 8
```
- How Boolean Logic Works - http://computer.howstuffworks.com/boolean.html/printable


```
Avoid

- forgetting to increment the counter inside the while loop - get an infinite loop, never ends

- accidentally putting a `;` at the end of `for` loop or `if` statement
  so that the statement has no effect (semicolon acts as one (empty) line to execute)
    for (x=1; x<10; x++); printf("%d, x);   // only prints one value


(HowStuffWorks, 2017) pp. 9
```

```
Arrays

- C has no range checking
        so if you index past the end of the array, it will not tell you about it.
        it will eventually crash or give you garbage data.


(HowStuffWorks, 2017) pp. 10
```

```
More on Arrays Variable Types

  Operators and Operators Precedence

    + addition
    - subtraction
    / division        // performs integer division if both are integer, floating point otherwise
    * multiplication
    % mod


(HowStuffWorks, 2017) pp. 10
```

```
Typecasting

  - placing the type name in parentheses and putting in front of the value you want to change
    a=10/3 ~ a=(float)10/3 ~ a=10/(float)3

(HowStuffWorks, 2017) pp. 11
```

```
Typedef

- you declare named, user-defined types in C

- you can place typef statements anywhere in a C program
  as long as they come prior to their first use in the code


(HowStuffWorks, 2017) pp. 11
```

```
Structures

- structures in C allow you to group variable into a package.


(HowStuffWorks, 2017) pp. 11
```

```
Incrementing

Long way    Short way
i=i+1;      i++;
i=i-1;      i--;
i=i+3;      i+=3;
-=i*j;      i*=j;

(HowStuffWorks, 2017) pp. 11
```

```
Functions

functions let you chop up a long program
into named sections so that the sections
can be reused throughout the program.

functions accept parameters and return a result.

C functions can accept an unlimited number of parameters

C does not care in what order you put your functions in the program,
so long as a the function name is known to the compiler before it is called.

the block of code that comprises a function is its function definition

basic structure of a function definition:

  <return type> <function name> (<parameters>) {

      <statements>

      return <value appropriate for the return type>;
  }

At a minimum, a C program has one function named `main`.

The compiler will look for a `main` function as the starting point
for the program, even if the `main` function calls other functions
within it.

Functions other than main have a definition and one more function calls.
A function call is a statement or part of a statement within another function.
The function call names the function it's calling followed by parentheses.
If the function has paameters, the function call must include corresponding
values to match those parameters.
This additional part of the function call is called passing parameters to the function.

Paramter for a function is a piece of data of a certain data type that
the function requires to do its work.
Functions in C can accept an unlimited number of parameters, sometimes called arguments.
Each parameter added to a function definition must specify two things:
its datatype and its variable name within the function block.
Multiple parameters are separated by a comma.

Function may have no local variables, but if needed locals,
they would go right below the opening {, C allow you declare variables after any {
they exist until the program reaches the matching } and then they disappear.
A function's local variable therefore vanish as soon as matching } is reached in the function.
While they exist, local variables love in the system stack.

Note that there is no ; after () in the first line.
If you accidentally putone in, you will get a huge cascade of error messages
from the compiler that make no sense.
Also note that even though there are no parameters, you must use the ().
They tell the compiler that you are declaring a function rather than simply declaring an int.

The return statement is important to any function that returns a result.
Is specifies the value that the function will return and causes the function
to exit immediately.
This means you can place multiple return statements in the function to give it
multiple exit points.
If you do not place a return statement in a function,
the function returns when it reaches } and return a random value
(many compilers will warn you if you fail to return a specif value).
In C, a function can return values of any type: int, float, char, struct, etc.
Functions can use a void return type if you intend to return nothing.
You must include () in the call. If you don't, the function is not called.
even though it will compile correctly on many systems.

C functions can accept parameters of any type. Separate multiple parameters with commas.


(HowStuffWorks, 2017) pp. 5 & 12
```


```
Function Prototypes

In C, you can add a function definition anywhere within the program (except another function).
The only condition is that you must tell the compiler in advance that the function exists
somewhere later in the code.
You'll do this with a function prototype at the beginning of the program.
The prototype is a statement that looks similar to the first line of the definition.

In C, you don't have to give the names of the parameters in the prototype, only the data types.

Imagine function prototypes as the packaging list for your program.
The compiler will unpack and assemble your program just as you might unpack and assemble
a new bookshelf.
The package list helps you ensure you have all the pieces you need in the box
before you start assembling the bookshelf.
The compiler uses the function prototypes in the same way before it starts
assembling your program.
 
function prototypes     gives the compiler important additional information
                        by including the number and data types of the parameters
                        it will call. Prototypes have become a best approach
                        among coders today...

function declarations   did not require any parameters,
                        so the return type, function name and a pair of empty parentheses
                        were sufficient. You will hear the term function declarations
                        more than function prototype, especially among older C programmers.

A prototype declares the function name, its parameters, and its return type
to the rest of the program prior to the function's actual declaration.

Many C compilers do not check for parameter matching either in type or count.
You can waste an enormous amount of time debugging code in which
you are simply passing one too many or too few parameters by mistake.
Code compiles properly, but it produces the wrong answer.

Place one prototype for each function at the beginning of your program.
They can save a great deal of debugging time, and they alse solve the problem
you get when you compile with functions that you use before they are declared.


(HowStuffWorks, 2017) pp. 6 & 13
```

```
Datatypes and Operations in C

From your computer's perspective, data is nothing but a series of ones and zeros
representing on and off states for the electronic bits on your hard drive or
in your computer's processor or memory.
It's the software you're running on a computer that determines how to make sense of
those billions of binary digits.
C is one of few high-level languages that can easy manipulate data at the bit level
in addition to interpreting the data based on a given data type.

A data type is a small set of rules that indicate how to make sense of a series of bits.
The data type has a specific size plus its own way of performing operations
(such as adding and multiplying) on data of that type.
In C, the size of the data type is related to the processor you are using.
...

Given these constraints and system-specific peculiarities in C data types and operations,
C programmers must choose their data types based on the needs of their programs.
Some of the data types can choose are the primitive data types in C,
meaning those built in to the C programming language...

C programmers can also create data structures, which combine primitive data types
and a set of functions that define how the data can be organized and manipulated.
Though the use of data structures is an advanced programming topic...
we will take a look at one of the most common structures: arrays.
An array is a virtual list containing pieces of data that are all the same data type.
An array's size can't be changed, though its content can be copied to other
larger or smaller arrays.

Though programmers often use arrays of numbers,
character arrays - called strings - have the most unique features.
A string allows you to save something you might say (like "hello")
into a series of characters, which your C program can read in from the user or
print out on the screen.
String manipulation has such a unique set of operations,
it has its own dedicated C library <string.h> with your typical string functions.

The built-in operations in C are the typical operations you'd find in most
programming languages.
When you are combining several operations into a single statement,
be sure to know the operator precedence 
(or the order in which the program will perform each operation in expression)...

If you are learning C, make it a priority to familiarize yourself with all of its
primitive datatypes and operations and the precedence for operations in the same expression.
Also, experiment with different operations on variables and numbers of different data types.


(HowStuffWorks, 2017) pp. 7
```

```
Libraries; Don't Start from Scratch

... how C enables you to write programs without starting from scratch every time.

Libraries are very important in C because the language supports
only the most basic features that it needs...
Anything that extends beyond the basics must be written by a programmer.
If the chunk of code is useful to multiple different programs,
it's often put into a library to make it easily reusable.

#include    instructs the C compiler to load the library from its header file name

C maintainers include standard C libraries for
  - I/O
  - mathematical functions
  - time manipulation
  - common operations on certain data structures, such as a string of characters

Writing C libraries can split your programs into reusable modules.
This modular approach not only makes it easy to include the same code in multiple programs,
but it also makes for shorter program files which are easier to read, test and debug.

<filename.h>  standard C libraries
"filename.h"  non-standard, created libraries 

No semicolon needed at the end of each line

A comprehensive C programming source should provide the instructions you need
to write your own libraries in C.
The function definitions you'll write are not any different whether they are
in a library or in your main program.
The difference is that you will *compile* them separately in something called
an *object* file (.o extension), and you will create a second file, called
*header* file (.h extension) which contains the function prototypes corresponding
to each function in the library.
It's the header file you'll reference in your #include line in each main program
that uses your library, and you'll include the object file as an argument in the
compiler command each time you compile that program.


(HowStuffWorks, 2017) pp. 8 & 14
```

```
Making a Library

Every library consists of two parts: a header file and the actual code file.

header file   .h suffix
              contains information about the library that programs using it need to know
              in general, contains constats and types,
              along with prototypes for functions available in the library
extern ...    represents functions that will be linked later.        


(HowStuffWorks, 2017) pp. 15
```

```
Compiling and Running with a Library

Makefiles     *make working with libraries a bit easier*

            mylib.h
            mylib.c
            main.c


(HowStuffWorks, 2017) pp. 15
```



