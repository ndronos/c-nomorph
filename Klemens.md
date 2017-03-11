# C Is Punk Rock

```
  Preface                               pp. ix-xxi
  ________________________________________________

  C Is Punk Rock                             ix
  Q & A (Or, the Parameters of the Book)      x
  Standards: So Many to Choose From           xiii
  Some Logistics                              xvii
  ________________________________________________
```
```
  Appendix A. C 101   pp. 343-362
  _______________________________

  The Structure               343
  Variable Declarations       346
  Expressions                 351
  Pointers                    358
  _______________________________
```



```
Throw out your old ideas about C and get to know a programming language
that has substantially outgrown its origins.
... discover up-to-date techniques missing from other C tutorials,
whether you're new to the language or just getting reacquainted.

C isn't just the foundation of modern programming languages; it *is* a modern language,
ideal for writing efficient, state-of-the-art applications.

Get past idioms that made sense on mainframes
and learn the tools you need to work with this evolved and aggressively simple language. 

No matter what programming language you currently favor, you'll quickly see that *21st century C rocks*.

(Klemens, 2015) Cover
```


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


```
Q: It's nice that application programmers
coming from scripting languages will like this book,
but I *am* a kernel hacker.
I taught myself C in fifth grade and sometimes have dreams that correctly compile.
What new material can be there for me?

A:
More than most, the C community holds itseld a high standard of interoperability.
There is a lot of C extensions provided by the GNU environment,
IDEs that work only forWindows, and compiler extensions that exist only in LLVM.
This is why past textbooks shied away from covering tools.
But in present day there are some systems that work on anything 
we commonly recognize as a computer.
Many of them are from the GNU; LLVM and its associated tools
are quickly making ground but are still not as prevalent.
Whatever you are using, be it a Windows box, a Linux box,
or a instance you just pulled up from your cloud computing provider,
the tools I cover here should be easy and quick to install.
I mention a few platform-specif tools, but will be explict in those cases.

I do not cover any integrated development environment (IDEs)
because few if any reliably work across all platforms...
and the choice of IDE is heavly infuenced by personal preference.
IDEs typically have a project build system, which is usually incompatible
with every other IDE's project build system.
IDE project files are therefore unusable for project distribution outside of situations
(classrooms, certain offices, some computer platforms)
where everybody is mandated to use the same IDE.


(Klemens, 2015) xii Preface
```

```
Q: I have the Internet and can look up commands and syntax details
in a second or two, really, why should I read this book?

A:
It's true: you can get an operator precedence table from Linux or Mac
command prompt with `man operator`, so why am I going to put one here?

I've got the same Internet you've got, and I've spend a lot of time reading it.
So I have a good idea of what isn't being talked about,
and that's what I stick to here.
When introducing a new tool, like `gprof` or `gdb`, I give you what you need to know
to get your bearings and ask your search engine coherent questions,
and what other textbooks missed (which is a lot).


(Klemens, 2015) xii-xiii Preface
```



### Standard: So Many to Choose From

```
Unles explicitly stated otherwise, everything in this book conforms
to the ISO C99 and C11 standards.
To make sense of what that means, and givesome historical background,
let us go through the list of major C standards
(passing over the minor revisions and corrections).


(Klemens, 2015) xiii Preface
```

```
K & R (circa 1978)

Denis Ritchie, Ken Thompson, and a handful of other contriibutors came up with C
while putting together the UNIX operating system.
Brian Kernighan and Dennis Ritchie eventually wrote down a description of the
language in the first edition of their book, which set first de facto standard.


(Klemens, 2015) xiii Preface
```
- (Kernighan, 1978), (K&R, 1978)


```
ANSIC89

Bell Labs handed over the stewardship of the language to the
American National Standards Institute (ANSI).
In 1989 the institute published its standard,
which made few improvements over K&R.
The second edition of K&R's book include full specification of
the language, which meant that tens of thousands of programmers
had a copy of the ANSI standard on their desks.
The ANSI standard was adopted by the 
International Organization for Standardization (ISO) in 1990
with no serious changes, but ANSI'89 seems to be the more common term
(and would make a great t-shirt slogan).


(Klemens, 2015) xiii Preface
```
- Kernighan, 1988), (K&R, 1988)


```
A decade passed. C went mainstream, in the sense that the base code
for more or less everyPC and every Internet server was written in C,
which is as mainstream as human endeavor could possibly become.


(Klemens, 2015) xiii Preface
```

```
During this period, C++ split off and hit it big (although not quite as big).
C++ was the best thing to ever happen to C.
While every other language was bolting on extra syntax to follow
the object-oriented trend and whatever other new tricks came ot the author's minds,
C stuck to the standard.
The people who wanted stability and portability used C,
the people who wanted more and more features so they could wallow in them
like moist hudred dollar bills got C++, and everybody was happy.

(Klemens, 2015) xiii-xiv Preface
```

```
ISO C99

The C standard underwent a major revision a decade later.
Addition where made for numeric and scientific computing,
with a standard type for complex numbers and some type-generic functions.
A few conveniences from C++ got lifted, including one-line comments
(which originally came from one of C's predecessor languages, BCPL)
and being able to declare variables at the head of `for` loops.
Using structures was made easier thanks to a few additions to the rules
for how they can be declared and initialized, plus some notational conveniences.
Things where modernized to acknowledge that security matters and
that not everybody speaks English.

When you think about just how much of an inpact C89 had,
and how the entire globe was running on C code,
it's hard to imagine the ISO being able to put out anything
that wouldn't be widely criticized
- even a refusal to make any changes would be reviled.
And indeed, this standard was controversial.
There are two common ways to express a comple variable
(rectangular and polar coordinates)
- so where does the ISO get off picking one?
Why do we need a mechanism for variable-length macro inputs
when all the good code got written without it?
In other words, the purists accused the ISO of selling out
to the pressure for more features.

As of this writing, most compilers support C99 plus or minus
a few caveats;
the `long double` type seems to cause a lot of trouble, for example.
However, there is one notable exception to this broad consensus:
Microsoft currently refuses to add C99 support to its
Visual Studio C++ compiler.
... covers some of the many ways to compile C code for Windows,
so not using Visual Studio is at most a inconvenience, and having
a major establishment player tell us that we can't use
ANSI- and ISO-standard C only bolsters the punk rock of it all.


(Klemens, 2015) xiv Preface
```
- Compiling C with Windows


```
C11

Self-conscious  about  the  accusations  of  selling  out,  the  ISO  made  few  serious
changes  in  the  third  edition  of  the  standard.  We  got  a  means  of  writing  type-
generic functions, and things were modernized to further acknowledge that securitymatters and
that not everybody speaks English.
The C11 standard came out in December of 2011, but support for the standard
has been implemented by compiler authors at a surprisingly rapid pace, to the
point that a number of major compilers already claim near-complete conformance.
However, the standard defines behavior for both the compiler and the standard library—and library support,
such as for threading and atomics, is complete on some systems but catching up on others.

(Klemens, 2015) xiv Preface
```

```
The POSIX Standard

That’s the state of things as far as C itself goes, but the language coevolved with the
Unix operating system, and you will see throughout the book that the interrelationship
matters for day-to-day work.
If something is easy on the Unix command line, it is probably because it is easy in C;
Unix tools are often written to facilitate writing C code.

(Klemens, 2015) xv Preface
```

```
Unix

C and Unix were designed at Bell Labs in the early 1970s. During most of the
20th century, Bell was being investigated for monopolistic practices, and one of
its  agreements  with  the  US  federal  government  included  promises  that  Bell
would not expand its reach into software. So Unix was given away for free for
researchers  to  dissect  and  rebuild.  The  name  Unix  is  a  trademark,  originally
owned  by  Bell  Labs  and  subsequently  traded  off  like  a  baseball  card  among  a
number of companies.

Variants  of  Unix  blossomed  as  the  code  was  looked  over,  reimplemented,  and
improved in different ways by diverse hackers. It just takes one little incompatibility
to make a program or script unportable, so the need for some standardization quickly
became apparent.

(Klemens, 2015) xv Preface
```

```
POSIX (Portable Operating System Interface)

This standard, first established by the Institute of Electrical and Electronics Engi‐
neers (IEEE) in 1988, provided a common basis for Unix-like operating systems.
It specifies how the shell should work, what to expect from commands like  ls
and  grep , and a number of C libraries that C authors can expect to have available.
For  example,  the  pipes  that  command-line  users  use  to  string  together  com‐
mands are specified in detail here, which means C’s  popen  (pipe open) function is
POSIX-standard,  not  ISO  C-standard.  The  POSIX  standard  has  been  revised
many times; the version as of this writing is POSIX:2008, and that is what I am
referring  to  when  I  say  that  something  is  POSIX-standard.  A  POSIX-standard
system must have a C compiler available, via the command name  c99 .

This book will use the POSIX standard, though I’ll tell you when.

With the exception of many members of a family of OSes from Microsoft, just
about  every  current  operating  system  you  could  name  is  built  on  a  POSIX-
compliant  base:  Linux,  Mac  OS  X,  iOS,  webOS,  Solaris,  BSD—even  Windows
servers offer a POSIX subsystem. And for the hold-out OSes, “Compiling C with
Windows” on page 4 will show you how to install a POSIX subsystem.

(Klemens, 2015) xv Preface
```

```
Finally, there are two more implementations of POSIX worth noting because of their
prevalence and influence:
- BSD
- GNU

(Klemens, 2015) xv-xvi Preface
```

```
BSD

After  Unix  was  made  available  from  Bell  Labs  for  the  public  to  dissect,
the researchers at the University of California, Berkeley, made major improvements,
eventually rewriting the entire Unix code base to produce the Berkeley Software Distribution.
If you are using a computer from Apple, Inc., you are using BSD
with  an  attractive  graphical  frontend.  BSD  goes  beyond  POSIX  in  several
respects, and we’ll see some functions that are not part of the POSIX standard
but are too useful to pass up (most notably the lifesaver that is  asprintf ).

(Klemens, 2015) xvi Preface
```

```
GNU

It stands for GNU’s Not Unix, and is the other big success story in independently
reimplementing and improving on the Unix environment. The great majority of
Linux distributions use GNU tools throughout. There are very good odds that
you have the GNU Compiler Collection ( gcc ) on your POSIX box—even BSD
uses it. Again, the  gcc  defines a de facto standard that extends C and POSIX in a
few ways, and I will be explicit when making use of those extensions.

(Klemens, 2015) xvi Preface
```


```
Legally, the BSD license is slightly more permissive than the GNU license. Because
some parties are deeply concerned with the political and business implications of the
licenses, one can typically find both GNU and BSD versions of most tools. For exam‐
ple, both the  gcc  and the BSD’s  clang  are top-notch C compilers. The authors from
both camps closely watch and learn from each other’s work, so we can expect that the
differences that currently exist will tend to even out over time.

(Klemens, 2015) xvi Preface
```

```
The Legal Sidebar

US law no longer has a registration system for copyright: with few exceptions, as soon
as anybody writes something down, it is copyrighted.
Of course, distribution of a library depends on copying from hard drive to hard drive,
and  there  are  a  number  of  common  mechanisms  for  granting  the  right  to  copy  a
copyrighted work with little hassle.

(Klemens, 2015) xvi Preface
```

```
The GNU Public License (GPL)

This  allows  unlimited  copying  and  use  of  the  source  code  and  its  executable
version.  There  is  one  major  condition:  If  you  distribute  a  program  or  library
based on the GPLed source code, then you must distribute the source code to
your program. Note well that if you use your program in-house and don’t distribute  it,
this  condition  doesn’t  hold,  and  you  have  no  obligation  to  distribute
source. Running a GPLed program, like compiling your code with  gcc , does not
in itself obligate you to distribute source code, because the program output (such
as the executable you just compiled) is not considered to be based on or a derivative
of  gcc . Example: the GNU Scientific Library.

(Klemens, 2015) xvi Preface
```

```
The Lesser GPL (LGPL)

The LGPL is much like the GPL, but it explicitly stipulates that if you are linking
to an LGPL library as a shared library, then your code doesn’t count as a derivative work,
and you aren’t obligated to distribute source. That is, you can distribute closed-source code
that links to an LGPL library. Example: GLib.

(Klemens, 2015) xvii Preface
```

```
The BSD License

This  license  requires  that  you  preserve  copyrights  and  disclaimers  for  BSD-licensed
source  code,  but  it  doesn’t  require  that  you  redistribute  source  code.
Example: Libxml2, under the BSD-like MIT license.

(Klemens, 2015) xvii Preface
```

```
Please note the usual disclaimer: I am not a lawyer, and this is a sidebar summary of
several rather long legal documents. Read the documents themselves or consult a lawyer
if you are unsure about how the details apply to your situation.

(Klemens, 2015) xvii Preface
```
- http://opensource.org/licenses


### Some Logistics
```
The Second Edition

...
The big addition from the first edition is the chapter on concurrent threads,
aka parallelization.
It focuses on OpenMP and atomic variables and structs.
OpenMP is not part of the C standard, but it is a reliable part of the C ecosystem,
so it comfortably fits on this book.
Atomic variables were added in the December 2011 revision of the standard, ...
We are now far enough along that I could write this chapter based both on the
theory presented in the standard and the practice of a real-world implementation
and tested code. ...
...

(Klemens, 2015) xvii Preface
```
- Chapter 12


```
Other additions to this edition:

- Appendix A provides a basic C tutorial for readers comig from another language.
I was reluctant to include it in the first edition because there are so many C
tutorials out there, but the book is more useful with it than without.
...

(Klemens, 2015) xvii Preface
```
- Appendix A





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
- hello.c

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
- ten_pi.c

```
Even functions have to be declared or defined

The definiton of a fuction describes the full working of a function...
...
We can also split off the declaration as its own statement, which gives
the name, the input types (in parens) and the output type (in front)...

This doesn't tell us what... actually does, but it is sufficient for the compiler
to consistency-check every use of the function, verifying... As with all declarations,
this might be in a code file as-is, or it might be in a header file inserted via line
like `#include "mydeclarations.h".

A *block* is a unity of code to be treated as a unit, surrounded by curly braces.
Thus, a function definition is a declaration immediately followed by
a single block of code to be executed when the function runs.

If the full definition of the function is in your code before the use of the function,
then the compiler has what it needs to do consistency checks, and you don't need to bother
with a separate declaration.
Because of this, a lot of C code is written and read in bottom-up style,
with `main` as the last thing on the file,
and above that the definition of functions called by `main`,
and above those the definitions of functions called  by those functions,
and so on up to the headers at the top of the file declaring all the library functions used.

By the way, your functions can have `void` type, meaning that they return nothing.
This is useful for functions that don't output or change variables but have other effects.
...

(Klemens, 2015) C 101 pp. 347-348
```
- error_print.c

```
Basic types can be aggregated into arrays and structs

How can one get any work done with only three basic types?
By compounding them into arrays of homogeneous types,
and structures of heteregeneous types.

An array is list of identical typed elements.
...

The index is an *offset* from the first element.
The first element is zero steps from the head of the array...
This is another cause of panic and flame wars, but it has its own sense.

You can find a zeroth symphony from various composers...
But in most situations, we use counting words like first, second, seventh
that clash with offset numbering:
the seventh item in the array is `list[6]`.
I try to stick with language like 'element 6 of the array'.

... the type of an array can also be written with a star, like:
`int *list;`

(Klemens, 2015) C 101 pp. 348-349
```
- item_seven.c
- the first item in the array is ...[0], the element 0 of the array

```
New structure types can be defined

Heterogeneous types can be combined into a structured list (herein a 'struct')
that can be treated as a unit. ...
The type definition is basically a list of declarations inside curly braces.

When using the defined struct, you'll see that there are a lot of dots...
The means of setting up a new struct outside a declaration line looks like a type cast,
with a type name in parens, followed by the dotted elements in curly braces.
There are other more terse (i.e., less legible) ways to initializea struct.

(Klemens, 2015) C 101 pp. 349-350
```
- ratio_s.c

```
You can find out how much space a type takes

The `sizeof` operator can take a type name, and will tell you how much memory
is required to write down an instance of that type.
This is sometimes handy.

...
The `%zu` format specifier for `printf` exists solely for the
type output produced by `sizeof`.

(Klemens, 2015) C 101 pp. 350-351
```
- sizeof.c

```
There is no special string type

Both the integer 5100 and the integer 51 take up `sizeof(int) space.
But "Hi" and "Hello" are strings of different number of characters.
Scripting languages typically have a dedicated string type,
which manages lists of indeterminate number of characters for you.
A string in C is an array of `char`s, pure and simple.

The end of a string is marked with a NUL character, '\0',
though it is never printed and is usually taken care for you.
(Note that single characters are given single-ticks,
like 'x', while strings are given double-ticks, like "xx" or
the one-character string "x".)
The function `strlen(mystring)` will count
the number of characters up to (but not including) that NUL character.
How much space was allocated for the string is anothe matter entirely:
you could easily declare char pants[1000] = "trousers",
though you are wasting 991 bytes after the NUL character.

Some things  are surprisingly easy thanks to the array nature of strings.
...

But most of what you want to do with a string involves calling a library function
to do the byte-twiddling for you... making life easier with strings,
because with enough intelligent functions,  string handling can be pleasant again.

(Klemens, 2015) C 101 pp. 350-351
```
- Chapter 9
- no-special-string-type.c


## Expressions

```
A program that does nothing but declare types, functions,
and variables would be just a list of noums,
so its time to move on to some verbs making use of our noums.
C's mechanism for executing any sort of action is evaluation of an expression,
and expressions are always grouped into functions.

(Klemens, 2015) C 101 pp. 351
```

```
The scoping rules for C are very simple

The 'scope' of a variable is the range of the program over which it can be used.

If a variable is declared outside of a function, then it can be used by any expression
from the declaration until the end of the file.
Any function in that range can make use of that variable.
Such variables are initialized at the start of the program and persists
until the program terminates.
They are referred to as static variables, perhaps because they sit in one place
for the entire program.

If a variable is declared inside a block (including the block defining a function),
then the variable is created at the declaration line and destroyed at the closing
curly brace of the block.

... notes on static variables, including how we can have long-lived variables inside a function.

(Klemens, 2015) C 101 pp. 351
```
- Persistent State Variables

```
The main function is special

When a program runs, the first thing that happens is the setup of the file-global variables...
No math happens yet,so they can be assigned either a given a constant value
(if declared like `int gv=24;`), or the default value of zero (if declared like `int gv`;).

Scripting languages usually allow some instructions to be inside functions,
and some loose in the main body of the script.
Any C expresion that needs to be evaluated is in the body of a function,
and the evaluations start with the main function.
In... the... had to be inside of main, because getting... is too much math
for the startup phase of the program.

Because the main function is effectively called by the operating system,
its declaration must have one of two forms that the OS knows how to use:

either

    int main(void)          //which can be written as
    int main()

or

    int main(int, char**)             //where the two inputs are customarily named:
    int main(int argc, char** argv)


You have already seen examples of the first version,
where nothing comes in but a single integer comes out.
That integer is generally treated as an error code,
interpreted to indicate trouble if it is nonzero,
and OK execution (reaching the end of `main` and exiting normally) if it is zero.
This is such ingrained custom that the C standard specifies that there is an implied `return 0`;
at the end of `main`...

(Klemens, 2015) C 101 pp. 352-353
```
- Don't bother Explicitly Returning from main


```
Most of what a C program actually does is evaluate expressions

So the global variables have been set up, 
the operating system has prepared the inputs to `main`,
and the program is starting to actually execute code int the `main` function block.

From here on out, everything will be the declaration of a local variable, flow control
(branching on an `if-else`, looping through a `while` loop),
or the evaluation of an expression.

... consider what the systemhas to do to evaluate...
After the declarations, the line... requires first evaluating the expression...
then evaluating... expression... which can be replaced with...
This is exactly how we humans do it when facing an expression like this,
but C carries this evaluate-and-substitute principle further.

In the evaluation of the expression... two things occur.
The first is the replacement of the expression with the value...
The second is side effect that a state has changed:
the value of the variable.. is changed to...
There are languages that strive to be more pure in evaluation,
but C allows evaluations to have side effects that change state.
You saw another example several times above:
in the evaluation of `printf("hello\n")`,
the expression is replaced by a zero on success,
but the evaluation is useful for the side effect of changing the state of the screen.

After all those substitutions, we'd be left with only... on the line.
With nothing left to evaluate, the system moves on to the next line.

(Klemens, 2015) C 101 pp. 352-353
```


```
Functions are evaluated using copies of the inputs

... a copy of the value of... is handed to the function, not.. itself.
That means that the function has no way to modify the value of... itself.
If you have function code that looks like it is modifying an input,
it is really modifying a copy of the input's value.
A workaround for when we want to modify the variables sent to a function call
will be presented below.


(Klemens, 2015) C 101 pp. 353
```


```
Expressions are delimited by semicolons

Yes, C uses semmicolons to delimit expressions.
This is a contentious stylistic choice,
but it allow you to put newlines, extra spaces,
and tabs anywhere they would improve readability.

(Klemens, 2015) C 101 pp. 354
```

```
There are many shortcuts for incrementing or scaling a variable

C has few pleasant shorthand expressions for arithmetic to modify a variable.
We can shorten... Incrementing a variable by one is so common that there are
two ways of doing it.
Both x++ and ++x have the side effect of incrementing x,
but   the evaluation of x++ replaces the expression with the preincrement   value of x,
while the evaluation of ++x replaces the expression with the postinscrement value of x+1.


    x++;  //increment x. Evaluates to x.
    ++x;  //increment x. Evaluates to x+1.

    x--;  //decrement x. Evaluates to x.
    --x;  //decrement x. Evaluates to x-1.


    x+=3; //add 3 to x.
    x-=7; //subtract 7 from x.
    x*=2; //multiply x by 2.
    x/=2; //divide x by 2.
    x%=2; //replace x with modulo.


(Klemens, 2015) C 101 pp. 354
```
- shortcuts-for-scaling-variable.c


```
C has an expensive definition of truth

We will sometimes need to know whether an expression is true or false,
such as deciding which branch to choose in a if-else construction.
There are no true and false keywords in C,
though they are commonly defined...
Instead, if the expression is zero (or the NUL character '\0', or a NULL pointer),
then the expression is taken to be false;
if it is anything else at all, it is taken to be true.

Conversely, all of these expressions evaluate to either zero or one:


    !x                  //not x
    x==y                //x equals y
    x != y              //x is not equal to y
    x < y               //x is less than y
    x <= y              //x is less than equal to y
    x || y              //x or y
    x && y              //x and y
    x > y || y >= z     //x is greather than y or is greater than or equal to z


For example, if `x` is any nonzero value, then `!x` evaluates to zero,
and `!!x` evaluates to one.

The && and || are lazy, and will evaluate only as much of the expression
as is necessary to stablish the truth or falsehood of the whole.
... evaluates... without even looking at the second half of the expression...
is left ignored and unevaluated...


(Klemens, 2015) C 101 pp. 354-355
```
- an-expansive-definition-of-truth.c
- True and False pp. 183
- _Generic pp. 271


```
Dividing two integers always produce an integer

Many authors prefer to avoid floating-point real numbers to the greatest extent possible,
because integers are processed faster without roundoff errors.
C facilitates this by having three distinct operators:
real division, integer division, and modulo.
The firts two happen to look identical.

...
The expression '3.' is a floating-point real number, and
if there is a real number in the numerator or denominator,
then floating-point division happens,
producing a floating-point result.
If both numerator and denominator are integers,
then the result is the integer you would get
from doing the division with real numbers and
then rounding toward zero to an integer.
The modulo operator, '%', gives the remainder.

The difference between floating-point and integer division is why...
typecast the denominator via `num/(double)den`.


(Klemens, 2015) C 101 pp. 355
```
- divisions.c
- Cast Less pp. 145

```
C has a trinary conditional operator

The expression

    x ? a : b

evaluates to `a` if `x`is true, and to `b` if `x` is false.

I used to think this was illegible, and few  scripting languages have such an operator,
but it has grown on me for its great utility.
Being just another expression, we can put anywhere...

The trinary conditional operator has the same short-circuit behaviour as `&&` and `||`...
if `x`, then `b` is never evaluated.


(Klemens, 2015) C 101 pp. 355
```
- sqrt.c


```
Branching and looping expressions are not very different from any other language

Probably the only unique point about `if-else` statements in C is that there is no `then` keyword.
Parens mark the condition to be evaluated, and then the following expression or block
is run through if the condition is true.
...

The `while` loop repeats a block until the given condition is false.
...

If the controlling condition in parens after the `while` keyword is false on the first try,
then the body of the `while` loop will be skipped entirely.
But the `do-while` loop is garanteed to run at least once.
...


(Klemens, 2015) C 101 pp. 356-357
```
- if_else.c
- while.c
- do-while.c


```
The `for` loop is just a compact version of the while loop

Traffic control for the `while` loop had three parts:

  - The initializer `int i=0`
  - The test condition `i < 10`
  - The stepper `i++`

The `for` loop encapsulates all of these into one place.
...

Because this block is one line, even the curly braces are optional...

...

On the other hand, this form is easy to modify for different situations.
If you need to steep by two, you want `for (int i=0; i<=100; i+=2)`.
...
You can leave any of the elements blank,
so if you are initializing a new variable,
you might wind up with something like `for (       ; i<=100; i++)`.


(Klemens, 2015) C 101 pp. 357-358
```
- for_loop.c
- for_loop2.c


```
# Pointers

Pointers to variables are sometimes called aliases, references, or labels
(though C has unrelated things called labels, which are rarely used; ...

A pointer or alias to a `double` does not itseld hold a `double`,
but points to some location that does.
Now you have two names for the same thing.
If the thing is changed, then both versions see the change.
This is in contrast to a full copy of a thing,
where the original does not affect the copy.


(Klemens, 2015) C 101 pp. 358
````
- Labels, gotos, switches, and breaks pp. 148


```
You cand directly request a block of memory

The `malloc` function allocates memory for use by the program.
For example, we might allocate enough space for 3,000 integers via: 

    `malloc(3000*sizeof(int));

This is the first mention of memory allocation in this tutorial
because the declarations... like `int list[100]`auto-allocate memory.
When the scope in which the declaration was made comes to a close,
auto-allocated memory is auto-allocated.
Conversely, memory you manually allocated via `malloc` exists until
you manually free it (ot the end of the program).
This sort of longevity is sometimes desirable.
Also, an array cannot be resized after it is initialized,
whereas manually allocated memoty can be.
Other differences between manually and automatically allocated memory ...

Now that we've allocated this space, how do we refer to it?
This is where pointers come in, because we can assign an alias to the `malloc`ed space:

    `int * intspace = malloc(3000*sizeof(int));

The star on the declaration (int *) indicates that we are declaring a pointer to a location.

Memory is a finite resource, so indiscriminate use will eventually cause
the sort out-of-memory errors that have bothered us all at one time or another.
Free memory back to the system via `free` function; e.g.:

    `free(intspace)`

Or just wait until the end of the program, when the operating system deallocates 
all memory used by your program for you.


(Klemens, 2015) C 101 pp. 358-359
```
- Automatic, Static, and Manual Memory pp. 123


```
Arrays are just blocks of memory; any block of memory can be used like an array

... I discuss exactly how arrays and pointers are and are not identical,
but they certainly have a lot in common.

In memory, an array is a contigous span set aside for one data type.
If you request element 6 of an array declared a `int list[100]`,
the system would start at wherever the list is located,
then step `6*sizeof(int)` bytes down.

So the square-bracket notation like `list[6]` is really just a notation
about offsetting from the position pointed toby the named variable,
and this happens to be the operation we need to work with an array.
If we have a pointer to any contiguous span of memory,
the same operations of finding the location and stepping forward
could be done with the pointer.

...
    int *intspace = malloc(3000*sizeof(int));

Memory reserved via `malloc` can be reliably used by the program,
but it is not initialized and so many contain any sort of unknown junk.
Allocate and clear to all zeros with:

    int *intspace = calloc(3000, sizeof(int));

Notice that this takes two numbers as input, while `malloc` takes one.


(Klemens, 2015) C 101 pp. 359-360
```
- Chapter 6
- manual_memory.c


```
A pointer to a scalar is really just a one-item array

Say that we have a pointer named `i` to a single integer.
It is an array of lenght 1, and if you request `i[0]`,
finding the location pointed to by `i` and stepping forward 0 steps
works exactly as it did for longer arrays.

But we humans don't really think of single values as arrays of lenght 1,
so there is a notational convenience for the common case of a one-item array:
outside of a declaration line, `i[0]` and `*i` are equivalent.
This can be confusing, because on the declaration line,
the star seems to mean something different.
There are rationales for why this makes sense...
but for now remember that a star on a declaration line indicates a new pointer;
a star on any other line indicates the value being pointed to.



(Klemens, 2015) C 101 pp. 359-360
```
- assert.c


```
There is a special notation for elements of pointed-to structs

Given the declaration

    ratio_s *pr;

we know that `pr` is a pointer to a `ratio_s`, not a `ratio_s` itself.
The size of `pr` in memory is exactly as much as is required to hold a single pointer,
not a full `ratio_s` structure.

(Klemens, 2015) C 101 pp. 359-360
```
One could get the numerator at the pointed-to struct via `(*pr).numerator`,
because `(*pr)` is just a plain `ratio_s`, and the dot notation gets a subelement.
There is an arraow notation that saves the trouble of the parens-and-star combination.
For example:

    ratio_s *pr = malloc(sizeof(ratio_s));
    pr->numerator = 3;

The two forms `pr->numerator` and `(*pr).numerator` are exactly identical,
but the first is generally preferred as more legible.


(Klemens, 2015) C 101 pp. 360-361
```


```
Pointers let you modify functions inputs

Recall that copies of input variables are sent to a function,
not the variables themselves.
When the function exits, the copies are destroyed,
and the original function inputs are entirely unmodified.

Now say that a pointer is sent in to a function.
The copy of a pointer refers to the same space
that the original pointer refers to.
... using this strategy to modify what the input refers to...

This workaround is common, so you will find many functions that take in a pointer,
not a plain value.
But sometimes you will want to use those functions to operate on a plain value.
In these cases, you can use the ampersand (&) toget the address of the variable.
That is, if x is a variable, &x is a pointer to that variable.
This simplifies the... code...

(Klemens, 2015) C 101 pp. 361-362
```
- pointer_in.c
- address_in.c


```
Everything is somewhere, so everything can be pointed to

You can't send a function to another function, and you can't have arrays of functions.
But you cand send a pointer toa function to a function,
and you can have arrays of pointers to functions.
...

Functions that don't really care what data is present,
but only handle pointers to data, are surprisingly common.
For example, a function thaat builds a linked list doesn't care
what data it is linking together, only where it is located.
To give another example, we can pass pointers to functions,
so you could have a function whose sole purpose is to run other functions,
and the inputs to those  called functions can be pointed to
whithout regard to their content.
In these cases, C provides an out from the type system, the void pointer.
Given the declaration

    void *x;

the pointer `x` can be pointing to a function, a struct, an integer, or anything else.
See... how void pointers can be used for all sorts of purposes. 


(Klemens, 2015) C 101 pp. 362
```
- Typedef as a teaching tool pp. 139
- The Void Pointer and the Structures It Points To pp 234


# Part I - The Environment

```
In the wilds outside the scripting languages' walled gardens,
there is an abundance of tools that solve big annoyances about C,
but you have to hunt for them. And I mean *have to*:
many of these tools are absolutely necessary to write without pain.
If you aren't using a debugger (standalone or within an IDE),
then you are imposing arbitrary hardship on yourself.

There is also an abundance of existing libraries waiting to be used in your code,
so you can work on the problem at hand instead of wasting time reimplementing
linked lists, parsers, or other basics. It needs to be as easy as possible
to compile your program using external libraries.


(Klemens, 2015)
```


## Chapter 1 - Set Yourself Up for Easy Compilation
```
The C standard library is just not enough to ge serious work done.





(Klemens, 2015) pp. 1
```





















