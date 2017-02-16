# C Is Punk Rock


```
C has only a handful of keywords and is a bit rough the edges, and it rocks.
You can do anything with it.
Like the C, G, and D chords on a guitar,
you can learn the basic mechanics quickly, and then spend the rest of your life getting better.
The people who don't get it
fear its power and think it too edgy to be safe.
By all rankings, it is consistently the most popular language
that doesn't have a corporation or foundation spending money to promote it.

(Klemens, 2015) ix Preface
```

This preface owes an obvious and huge debt to [Punk Rock Languages: A Polemic] by Chris Adamson.  
[Punk Rock Languages: A Polemic](https://pragprog.com/magazines/2011-03/punk-rock-languages)

```
Also, the language is about 40 years old,
which makes it middle-aged.
It was written by a few guys basically working against management
- the perfect punk rock origins -
but that was on the 1970's,
and there's been a lot of time for the language to go mainstream.

(Klemens, 2015) ix Preface
```

```
What did people do when punk rock went mainstream?
In the decades since its advent in the 1970s,
punk certainly has come in from the fringes:
(to name just a few)... sold million of albums worldwide,
and I have heard lite instrumental versions of songs
from the punk rock spinoff known as grunge at my local supermarket.
...
One reaction to the continuing evolution would be take the hard line
and say that the original stuff was punk
and everything else is just easy punk pop for the masses.
The traditionalists can still play their albums from the '70s,
and if the grooves are worn out, they can download a digitally mastered edition.
They can buy Ramones hoodies for their toddlers.

(Klemens, 2015) ix x Preface
```

```
Outsiders don't get it. Some of them hear the word punk,
and picture something out of the 1970s
- a historic artifact about some kids that are, at the time,
really doing something different.
The traditionalist punks who still love and play their 1973 ... LPs
are having their fun,
but they bolster the impression that punk is ossified and no longer relevant.

(Klemens, 2015) x Preface
```

```
Getting back to the world of C,
we have both the traditionalists, waving the banner of ANSI'89,
and those who will rock out to whatever works
and may not realize that the code they are writing
would not have compiled or run in the 1990s.
Outsiders don't get the difference.
They see still-in-print books from the 1980s
and still-online tutorials from the 1990s,
they near hear from the hardcore traditionalists
who insist on still writing like that today,
and they don't even know that the language
and the rest of its users continue to evolve.
That's a shame, because thet're missing out on some great stuff.

(Klemens, 2015) x Preface
```

```
This is a book about breaking tradition and keeping C punk rock.
I don't care to compare the code this book
to the original C specification in Kernighan and Ritchie's 1978 book.
My telephone has 512 MB of memory,
so why are our C textbooks still spending pages upon pages
covering techniques to shave kilobytes off our executables?
I am writing this on a bottom-of-the-line red netbook
that can accommodate 3,200,000,000 instructions per second;
what do I care about whether an operation requires comparing 8 bits or 16?
We should be writing code that we can write quickly
and that is readable by our fellow humans.
We're still writing in C, so our readable
but imperfectly optimized code will still run an order of magnitude faster
than if we'd written comparable code in any number of alternative,
bloated languages.

(Klemens, 2015) x Preface
```

### Q & A (Or the Parameters of the Book)

```
Q: How is this book different from all others?

A:
Some are better written, some are even entertaining,
but C textbooks are somewhat uniform bunch
(I've read a lot of them, including...).
Most are written before the C99 standard
simplified many aspects of usage,
and you can tell some of those now in their nth edition
just pasted few notes about updated
rather than seriously rethinking how to use the language.
They all mention that there might be libraries
that you could maybe use in writing your own code,
but most predate the installation tools and ecosystem we have now,
which make using those libraries reliable and reasonably portable.
Those texbooks are still valid and still have value,
but modern C code just doesn't look like much of the code
in many of those textbooks.

This book picks up where they left off,
reconsidering the language and the ecosystem in which it lives.
The storyline here is about using libraries
that provide linked lists and XML parsers,
not writing new ones from scratch.
It is about writing code that is readable
and has a friendly user interface.

(Klemens, 2015) x xi Preface
```
... including
- C for Programmers with Introduction to C11 (Deitel, 2013)
- Head Fist C (Griffiths, 2012)
- The C Programming Language, 1st Edition (K&R, 1979)
- The C Programming Language, 2nd Edition (K&R, 1988)
- Programming in C (Kochan. 2004)
- Practical C Programming (Oualline, 1997)
- Absolute Beginner's Guite to C (Perry, 1994)
- The Waite Group's C Primer Plus (Prata, 2004)
- C Programming (Ullman, 2004)



```
Q: Who is this book for? Do I need to be a coding guru?

A:
You have experience coding in any language,
maybe Java or a scripting language such as Perl.
I don't have to sell you on why your code
shouldn't be one long routine with no subfunctions.

The body of the book assumes basic knowledge of C gained from
time spent writing C code.
If you are rusty on the details or are starting from zero, Appendix A
offers a short tutorial on basic C for readers who are coming from
a scripting language like Python or Ruby.

I might as well point out to you that I have also written a textbook
on statistical and scientific computing, Modeling with Data (Klemens, 2008).
Along with lots of details of dealing with 
numeric data and using statistical models for describing data,
it has a longer, more standalone tutorial on C,
which I naturally think overcomes many of the failings of older C tutorials.

(Klemens, 2015) xi Preface
```

- Appendix A (Klemens, 2015)
- Modeling with Data (Klemens, 2008)

```
Q: I'm an application programmer, not a kernel hacker.
Why should I use C instead of a quick-to-write scripting language like Python?

A:
If you are an application programmer, this book is for you.
I read people asserting that C is a systems language,
which impresses me as so un-punk
- who are they to tellus what we're allowed to write?

Statements along the lines of
"Our language is almost as fast as C, but easier to write"
are so common that they are almost cliche'.
Well, C is definitely as fast as C,
and the purpose of this book is to show you that
C is easier to write that the textbooks from decades past imply that is.
You don't have to call `malloc` and get elbow-deep in memory management
half as often as the systems programmers of the 1990s did,
we have facilities for easier string handling,
and even the core syntax has evolved to make for more legible code.

I started writing C in the earnest because I hat to speed up
a simulation in a scripting language, R.
Like so many other scripting languages,
R has a C interface and encourages the user to make use of it
any time the host language is too slow.
Eventually, I had so many functions jumping out from the host script
to C code that I just dropped the host language entirely.

(Klemens, 2015) xi Preface
```



### APPENDIX A C 101

```
... covers the basics of the language. It's not for everyone.
...
Don't expect to be an expert in C by the end of this tutorial
- there is no substitue for real experience with the language.
...


(Klemens, 2015) C 101 pp. 343
```

... All of the code samples in this appendix marked with a file name
like this are available online at:  
https://github.com/b-k/21st-Century-Examples


```
The Structure

The double slashes... indicate a comment that the compiler will ignore.
... reveals... few key points about C.
Structurally, almost everything in a C program is:
- A preprocessor directive, like #include <stdio.h>
- A declaration of a variable or a type
- A function block, like `main`, containing expressions to evaluate (like `printf`)

(Klemens, 2015) C 101 pp. 343-344
```

```
C requires a compilation step, which consists of running a single command

A scripting language comes with a program that parses the text of your scripts;
C has a compiler that takes in your program text and produces a program directly executed
by the operating system. 
Using the compiler is something of a pain,
so there are programs to run the compiler for you.
Your integrated development environments (IDEs) typically have a compile-and-run button.
and on the command line, a POSIX-standard program named `make` will run the compiler for you.

...

... a `makefile`... instructs `make` to send some compilation flags to the compiler.
... For now, I'll mention one flag: `-Wall`.
This flag asks the compiler to list all warnings about parts of your program
that are technically correct, but may not be what you meant.
This is known as *static analysis*, and modern C compilers are very good at it.
You can this think of the compilation steo not as useless formality,
but as a chance to submit your code to a team of the world's foremost experts in C
before running the program.

...

(Klemens, 2015) C 101 pp. 344-345
```

- Use a Package Manager pp. 2
- Using Makefiles pp. 15
- A Few of My Favorite Flags pp. 10

```
There's a standard library, and it's part of your operating system

Programs in the present day are typically not completely standalone,
but link libraries of common functions possibly used by more than one program.
The library path is a list of directories on your hard drive
that the compiler searches for such libraries; ...
Key among these libraries is the C standard library,
defined in the ISO C standard and about as close to universally available
as computer code can be. This is where the `printf` function is defined.

(Klemens, 2015) C 101 pp. 345
```
- Paths pp. 11

```
There's a preprocessor

The libraries are in binary format, executable by the computer but illegible to humans.
Unless you have binary-reading superpowers, you can't look at the compiled library
to verify that you are using `printf` correctly.
So there are companion filesto a library, *header files*, that list plain text declarations
for the utilities in the library, giving the inputs that each function expects
and the outputs they produce.
If you include the approriate header in your program, the the compiler
can do consistency checks to verify that your use of a function, variable, or type
is consistent with what the binary code in the library expects.

The primary activity of the preprocesor is to substitute the text of preprocessor directives
(which all begin with a #) with other text.
There are many uses, but the only use I'll cover in this appendix is including other files.
When the preprocessor sees `#include <stdio.h>` it will substitute the full text of `stdio.h`
at this point. The angle brackets in `<stdio.h>` indicate that the library is on the include path,
which is distinct from the library path.
If a file is in the working diretory for the project, use `#include "myfile.h"`.

The .h ending indicates that the file is a header file.
Header files are plain code, and the compiler doesn't know a header from other code files,
but the custom is to put only declarations in header files.

After the preprocessor has done its work, almost everything in the file will either be a
declaration of a variable or type, or the definition of a function.

(Klemens, 2015) C 101 pp. 345-346
```
- The Preprocessor pp. 166
- Paths pp. 11
 

```
There are two types of comment

/* Multiline comments run better a slash-star
   and a star-slash   */

// Single-line comments run from a double-slash to the end of the line.
  

(Klemens, 2015) C 101 pp. 346

```

```
There is no print keyword

The `printf` function from the standard library prints the text to the screen.
It has its own sublanguage for precisely expressing how variables are printed.
I won't give you a detailed explanation of its working because there are
comprehensive descriptions of the `printf` sublanguage everywhere
(try `man 3 printf` from your command line),
and because you'll see examples throughout this tutorial and throughout the book.
The sublanguage consists of plain text interspersed with `insert variable here` markers
and codes for invisible characters like tabs and newlines.
Here are six elements that will get you by as you read examples of `printf`-family functions
in the rest of the tutorial:

    \n  Newline
    \t  Tab
    %i  Insert an integer value here
    %g  Insert a real number in general format here
    %s  Insert a string of text here
    %%  Insert a plain percent sign here

(Klemens, 2015) C 101 pp. 346
```
- `man 3 printf`
- `man printf`

```
Variable Declarations

Declarations are a big difference between C and a lot of scripting languages that infer
the type of a variable - and even its existence - via the first use.
Above, I suggested that the compilation step is really a chance to do prerun checks
to verify that your code has some chance of doing what you promised it does;
declaring the type of each variable gives the compiler much of an oportunity to check
that your writing is coherent. There is also a declaration syntax for functions and new types.

(Klemens, 2015) C 101 pp. 346
```

```
Variables have to be declared

There are three basic types that I used throughout the book: `int`, `double`, and `char`,
which are short for integer, double-precision floating-point real number, and character.

There are bloggers who characterize the work ofo declaring a variable as a fate worse than death,
but ... the only work required is often justputting a type name before the first use of the variable.
And when reading unfamiliar code, having every variable's type and
having a marker for its first use are nice guideposts.

If you have multiple variables of the same type, you can even declare them all on one line.

(Klemens, 2015) C 101 pp. 347
```


