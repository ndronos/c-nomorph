# (Gustedt, 2016)

## Preliminaries

```
The C programming language has been around for a long time
- the canonical reference if it is the book written by its creators...
Since then, C has been used in an incredible number of applications.
Programs and systems written in C are all around us:...
basically in any modern device that has a programmable interface.


(Gustedt, 2016) Preliminaries pp. 3
```
- K&R, 1978

``
In contrast to the ubuquitous presence of C programs and systems,
good knowledge of and about C is much more scarce.
Even experienced C programmers often appear to be stuck in some degree of
self-inflicted ignorance about the modern evolution of the C language.
A likely reason for this is that C is seen as an "easy to learn" language,
allowing a programmer with little experience to quickly write or copy
snippets of code that at least to do what it's supposed to.
I a way, C fails to motivate its users to climb to higher levels of knowledge.


(Gustedt, 2016) Preliminaries pp. 3
```

```
This book is intended to change that general attitude.
It is organized in chapters called "Levels" that summarize levels of familiarity
with the C language and programming in general.
Some features of the language are presented in parts on earlier levels,
and elaborated in later ones...


(Gustedt, 2016) Preliminaries pp. 3
```

```
As the title of this book suggests, today's C is not the same language
as the one originally designed by its creators...(usually referred to as K&R C).
In particular, it has undergone an important standardization and extension process
now driven by ISO, the International Standards Organization.
This led to three major publications of C standards
in the years 1989, 1999 and 2011, commonly referred to as C89, C99 and C11.
The C standards committee puts a lot effort into guaranteeing backwards compatibility
such that code written for earlier versions of the language, say C89,
should compile to a semantically equivalent executable with a compiler
that implements a newer version.
Unfortunately, this backwards compatibility has had the unwanted side effect of
not motivating projects that could benefit greatly from the new features
to update their code base.


(Gustedt, 2016) Preliminaries pp. 3
```

```
In this book we will mainly referto C11, as defined in  JTC1/SC22/WG14 (2011)...


(Gustedt, 2016) Preliminaries pp. 3
```
- http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf


```
Programming has become a very important cultural and economic activity and
C remains an important element in the programming world.
As in all human activities, progress in C is driven by many factors,
corporate or individual interest, politics, beauty, luck, ignorance,
selfishness, ego, sectarianism,... (add your primary motive here).
Thus the development of C has not been and cannot be ideal.
It has flaws and artifacts that can only be understood with their historic
and societal context.


(Gustedt, 2016) Preliminaries pp. 3
```

```
An important part of the contecxt in which C developed was the early appearance
of its sister language C++.
One common misconception is that C++ evolved from C by adding its particular features.
Whereas this is historically correct (C++ evolved from a very early C)
it is not particularly relevant today.
In fact, C and C++ separated from a common ancestor more than 30 years ago,
and have evolved separately ever since.
But this evolution of the two languages has not taken place in isolation,
they have exchanged and adopted each other's concepts over the years.
Some new features, such as the recent addition of atomics and threads
have been designed in a close collaboration between the C and C++ standard committees.

Nevertheless, many differences remain and generally all that is said in this book
is about C and not C++.
Many code examples that are given will not even compile with a C++ compiler.


(Gustedt, 2016) Preliminaries pp. 3
```



## Rule A :: C and C++ are different, don't mix them and don't mix them up.





## Organization


```
This book is organized in levels.


(Gustedt, 2016) Organization pp. 3
```


### Level  0. Encounter
```
The starting level, `encounter`, will introduc you to the very basics of programming with C.
By the end of it, even if you don't have much experience in programming,
you should be able to understand the structure of simple programs and start writing your own.


(Gustedt, 2016) Organization pp. 3
```


### Level  1. Acquaintance
```
The `acquaintance` level details most principal concepts and features such as
control structures, data types, operators and functions.
It should give you a deeper understanding of the things that are going on when you run
your programs.
This knowledge should be sufficient for an introductory course in algoritms and
other work at that level, with the notable caveat that pointers aren't fully
introduced at this level.


(Gustedt, 2016) Organization pp. 3
```


### Level  2. Cognition
```
The `cognition` level goes to the heart of the C language.
It fully explains pointers, familiarizes you with C's memory model,
and allows you to understand most of C's library interface.
Completing this level should enable you to write C code professionally,
it therefore begins with an essential discussion about the 
writing and organization of C programs.
I personally would expect anybody who graduated from an engineering school
with a major related to computer science or programming in C to master this level.
Don't be satisfied with less.


(Gustedt, 2016) Organization pp. 3
```


### Level  3. Experience
```
The `experience` level then goes into detail in specific topics,
such as performance, reentrancy, atomicity, threads and type generic programming.
These are probably best discovered as you go,
that is when you encounter them in the real world.
Nevertheless, as a whole they are necessary to round off the picture
and to provide you with full expertise in C.
Anybody with some years of professional programming in C or
who heads a software project that uses C as its main programming language
should master this level.


(Gustedt, 2016) Organization pp. 3
```

### Level  4. Ambition
```
Last but not least comes `ambition`.
It discusses my personal ideas for a future edevelopment of C.
C as it is today has some rough edges and particularities that only have historical justification.
I propose paths to improve on the lack of general constants,
to simplify the memory model, and more generally to improve the modularity of the language.
This level is clearly much more specialized than the others,
most C programmers can probably live without it,
but the curious ones among you could perhaps take up some of the ideas.


(Gustedt, 2016) Organization pp. 3
```




---





# Level 0. Encounter

```
This first level of the book may be your first encounter with the programming language C.
It provides you with a rough knowledge about C programs, about their purpose,
their structure and how to use them.
It is not meant to give you a complete overview, it can't and it doen't even try.
On contrary, it is supposed to give you a general idea of what this is all about and 
open up questions, promote ideas and concepts.
These then will be explained in detail on the higher levels.


(Gustedt, 2016) Level 0. Encounter pp. 1
```

```
1. Getting Started

In this section I will try to introduce you to one simple program that has been chosen
because it contains many of the constructs of the C language.
If you already have experience in programming you may find parts of it feel like
needless repetition.
If you lack experience, you might feel overwhelmed by the stream of new terms and concepts.




(Gustedt, 2016) Level 0. Encounter pp. 1
```


