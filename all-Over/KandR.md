# About C


```
The computer world has undergone a revolution since the publication of *The C Programming Language* in 1978.
... During this time, C has changed too, although only modestly, and it has spread far beyound its origins
as the language of the UNIX operating system.
...
C is not a big language, and it is not well served by a big book.
...

(K&R, 1988) ix Preface 
```

```
...
C wears well as one's experience with it grows.

With a decade more experience, we still feel that way.
We hope that this book will help you to learn C to use it well.

(K&R, 1988) x Preface
```

```
C is a general-purpose programming language
which features economy of expression, modern control flow and data structures, and a rich set of operators.
C is not a "very high level" language, nor a "big" one,
and is not specialized to any particular area of application.
But its absence of restrictions and its generality make it more convenient and effective for many tasks
than supposedly more powerful languages.
...
C is not tied to any particular hardware or systems,
however, and it is easy to write programs that will run without change on any machine that supports C.
...
In our experience, C has proven to be pleasant, expressive, and versatile language for a variety of programs.
It is easy to learn, and
it wears well as one's experience with it grows.

(K&R, 1988) xi Preface to the First Edition
```

```
C is a general-purpose programming language.
It has been closely associated with the UNIX system where it was developed,
since both the system and most of the programs that run on it are written in C.
The language, however, is not tied to any one operating system or machine; 
and although it has been called a "system programming language" because it is useful for
writing compilers and operating systems, it has been used equally well
to write major programs in many different domains.

(K&R, 1988) 1 Introduction
```

```
Many of the important ideas of C stem from the language BCPL,
developed by Martin Richards.
The influence of BCPL on C proceeded inderectly through the language B,
which was written by Ken Thompson in 1970 for the first UNIX system on the DEC PDP-7.

BCPL and B are "typeless" languages.
By contrast, C provides a variet of data types.
The fundamental types are characters, and integers and floating-point numbers of several sizes.
In addition, there is hierarchy of derived data types created
with pointers, arrays, structures, and unions.
Expressions are formed from operators and operands;
any expression, including an assignment or a function call, can be a statement.
Pointers provide for machine-independent address arithmetic.

...

(K&R, 1988) 1 Introduction
```

```
Functions may return values of basic types, structures, unions, or pointers.
Any function can be called recursively.
Local variables are typically "automatic", or created anew with each invocation.
Function definitions may not be nested but variables may be declared in a block-structured fashion.
The functions of a C program may exist in separate source files that are compiled separately.
Variables may be internal to a function, external bu known only within a single source file,
or visible to the entire program.

A preprocessing step performs macro substitution on program text,
inclusion of other source files, and conditional compilation.

(K&R, 1988) 1 Introduction
```

```
C is a relatively "low level" language.
This characterization is not pejorative;
it simply means that C deals with the same sort of objects that most computers do,
namely characters, numbers, and adresses. 
These may be combined and moved about with
the arithmetic and logical operators implemented by real machines.

(K&R, 1998) 1-2 Introduction
```

```
C provides no operations to deal directly with composite objects such as
character strings, sets, lists, or arrays.
There are no operations that manipulate an entire array or string,
although structures may be copies as a unit.
The language does not define any storage allocation facility other than
static definition and the stack discipline provided by the local varibles of functions;
there is no heap or garbage collection.
Finally, C itself provides no input/output facilities;
there are no READ or WRITE statements, and no built-in file access methods.
All these higher-level mechanisms must be provided by explicitly-called functions.
Most C implementations have included a reasonably standard collection of such functions.
...
...

(K&R, 1988) 2 Introduction
```

```
Although the absence of some... features may seem like a grave deficiency...
keeping the language down to a modest size has real benefits.
Since C is relatively small, it can be described in a small space, and learned quickly.
A programmer can reasonably expect to know and understand and indeed regularly use the
entire language.

(K&R, 1988) 2 Introduction
```

```
Because the data types and control structures provided by C
are supported directly by most computers, the run-time library required
to implement self-contained programs is tiny.
The standard library functions are only called explicitly, so they
can be avoided if they are not needed.
Most can be written in C, and except for the operating system details they conceal,
are themselves portable.

(K&R, 1988) 3 Introduction
```

```
Although C matches the capabilities of many computers,
it is independet of any particular machine archtecture.
With a little care it is easy to write portable programs, that is,
programs that can be run without change on a variety of hardware.
The standard makes portability issues explicit, and prescribes
a set of constants that characterize the machine on which the program is run.

(K&R, 1988) 3 Introduction
```

```
... Nevertheless, C retains the basic philosophy that
programmers know what are they doing;
it only requires that they state their intentions explicitly.

(K&R, 1988) 3 Introduction
```

```
C, like  any other language, has its blemishes...
Nonetheless, C has proven to be an extremely effective and expressive
language for a wide variety of programming applications.

(K&R, 1988) 3 Introduction
```

```
...
...
...
...
...
...

(K&R, 1999) 4 Introduction
```
