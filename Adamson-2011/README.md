# Taking C Seriously

```
Dennis Ritchie, a co-creator of Unix and C, passed away...

It should hardly be necessary to state the importance of Ritchie's work.
C is the #2 language in use today according to the TIOBE rankings...

(Adamson, 2011)
```
- http://tiobe.com/tiobe-index/

```
Keep in mind that C was developed between 1969 and 1973, making it nearly 40 years old.
... when Paul Grahan considered the possible traits of The Hundred-Year Language,
the one we might be using 100 years from now, he overlooked the fact that
C had already made an exceptionally good start on a century-long reign.

(Adamson, 2011)
```
- www.paulgraham.com/hundred.html

```
And yet, despite on being so widely used and so important, C is widely disparaged.
It is easy, and popular, and eminently tolerated, to bitch and complain about C's primitiveness.

I've already had my say about this, in the PragPub article Punk Rock Languages,
in which I praised C's lack of artifice and abstraction, its directness, and its ruthlessness.
...

(Adamson, 2011)
```
- http://pragprog.com/magazines/2011-03/punk-rock-languages

```
C was the language of second-year Computer Science at Stanford...
The funny thing is that at the time, C was considered a "high-level".
At the time, abstracting away from the CPU was sufficient to count as "high-level";
granted, at the time we also drew a distinction between
"assembly language" and "machine language", presumably because there was still
someone somewhere without an assembler and was thus forced to provide the actual opcodes.
Today, C is considered a low-level language.
In my CodeMash 2010 talk on C, I postulated that
a high-level language is now expected to abstract away not only the CPU, but memory as well.

  In Beyond Java, Bruce Tate predicted we'd never see another mainstream language
  that doesn't run in a VM and offerthe usual benefits of that environment,
  like memory protection and garbage collection, and I suspect he's right.

(Adamson, 2011)
```
- http://slideshare.net/invalidname/oh-crap-i-forgot-or-never-learned-c-codemash-2010

```
But does malloc() make C "primitive"? I sure didn't think so in 1986.
In fact, it did a lot more than the languages at the time.
Dynamic memory allocation was not actually common at the time -...
And of course relative to Assembly language, where you're directly exposed to
the CPU and RAM, C's abstractions are profound.
If you haven't had that experience, you don't appreciate that
  a = b + c involves:
  - loading b and c into CPU registers,
  - invoking an "add" opcode,
  - and then copying the result from a register out to memory.
One lone of C, many lines of Assembly.

(Adamson, 2011)
```

```
There is a great blo from... years ago assessing the
Speed, Size, and Dependability of Programming Languages.
It represents the relationship between code size and performance as a 2D plot,
where an ideal language has high performance with little code,
and an obsolete language demands lots of work and is still slow.
These two factors are a classic trade-off, and the other two quadrants are
named after the traditional categorization:
- slow but expressive languages are "script",
- fast but wordy are "system".
Go look up gcc - it's clearly the fastest, but its wordiness is really not that bad.

(Adamson, 2011)
```
- http://blog.gmarceau.qc.ca/2009/05/speed-size-and-dependability-of.html

```
Perhaps the reason C has stuck around so long its that its bang for the buck really is
historically remarkable, and umlikely to be duplicated.
For all the advantages over Assembly, it maintains furious performance,
and the abstractions then built atop C (with the arguable exception of Java,
whose primary sin is being a memory pig) sacrifice performance for expressiveness.
We've always known this of course, but it takes a certain level of intellectual honesty
to really acknowledge how many extra CPU cycles we burn by writing code in something like
Ruby or Scala. If I'm going to run that slow, I think I'd at least want to
get out of curly-brace/function-call hell and adopt a different style of thinking, like LISP.

(Adamson, 2011)
```

```
...
It's only in immersing myself in iOS and Ma since... that I've really gotten good
with calling C in anger again, because on these platforms, C is a first-class language.
At the lower levels - including any framework with "Core" in its name - C is the *only* language.

And at the Core level, I'm sometimes glad to only have C.
For something like singnal processing..., handling me a void* is just fine...
In the higher level media frameworks, we have to pass around samples and frame buffers and such as
full-blown objects, and sometimes it feels heavier the it needs to.
...

(Adamson, 2011)
```

```
C is underappreciated as an application programming language.
Granted, there's definitely a knack to writing C effectively, but it's not just the language.
Actually, it's more the idioms of the various C libraries out there.
OPENGL code is unlike Core Graphics/Quartz, just like OpenAL is unlike Core Audio.
And that's to say nothing of the classic BSD and other open-source libraries,
some of which I still can't crack.
...
So maybe it's always going to be a learning process.

But honestly, I don't mind learning.
In fact, it's why I like this field.
And the fact that a 40-year old language can still be so clever, so austere and elegant,
and so damn fast, is something to be celebratedd and appreciated.

So, thanks Dennis Ritchie.
All these years later, I'm still enjoying the hell out of C.

(Adamson, 2011)
```


# Punk Rock Languages

## A Polemic

```
That C has won the end-user practically battle is obvious to everyone except developers.

(Adamson, 2011)
```

```
The year is 1978, and the first wave of punk rock is reaching its nihilistic peak
with infamous U.K. band the Sex Pistols touring the US and promptly breaking up
by the time they reach the West Coast.
Elsewhere, Brian Kernighan and Dennis Ritchie are putting the finishing touches on their book
The C Programming Language, which will become the de facto standardization of the language for years.
While tottaly unrelated, these two events share a common bond:
the ethos of both punk rock and C have lasted for decades,
longer than anyone in 1978 could possibly have imagined.

(Adamson, 2011)
```
- http://cm.bell-labs.com/cm/cs/cbook/

```
And in many important ways, C is the programmer's punk orck:
it's fast, messy, dangerous, and perfectly willing to kick your ass,
but it's also an ideal antidote to the pretensions and vanities
that plague so many new programming languages.
In an era of virtual machine and managed environments,
C original Punk Rock Language.

(Adamson, 2011)
```

## Lightning Strikes (Not Once But Twice)
```
This is a chord, this is another, this is a third.
Now form a band. - Cartoon on Sideburns Magazine

C has all the power of assembly language
combined with all the elegance and poetry of... assembly language - Erica Sadun

(Adamson, 2011)
```

```
Punk rock emerged as a reaction to the increasingly
self-indulgent and misguided musical trends of its time,
with progressive rock insisting on merging in influences 
from jazz and classical music..., and second-rate guitarists
noodling away in awe of Hendrix and Claprton with what
Joey Ramone called "endless solos that went nowhere."
Punk stripped away the nonsense of the times by focusing on faster, shorter, simpler songs.
... "in the U.S. the movement is more purely musical:... 
have rejected the rococo sophistication of much 1970s rock
and turned back to basic buzz and blast."

(Adamson, 2011)
```

```
C's development was, if anything, the opposite:
it was meant as an alternative to programming the PDP-7 in assembly.
In Dennis Ritchie's history of the language, he describes it as
the result of several attempts to provide higher-level languages for the platform,
a successor to BCPL and B (which Ritchie describes as
"BCPL squeezed into 8k bytes of memory and filtered through [Ken] Thompson's brain").
But this development wasn't driven by academic niceties or intellectual noodling.
It was about getting stuff done. As Ritchie recall:

"By 1971, our miniature computer center was beginning to have users.
We all wanted to create interesting software more easily.
Using assembler wasdreary enough that B, despite its performance problems,
had been supplemented by a small library of useful service routines
and was being used for more and more new programs."

(Adamson, 2011)
```
- http://cm.bell-labs.com/cm/cs/who/dmr/chist.html

```
Punk is famous for needing litte more that three chords.
C basically has three types - int, float, and char - embelished only
by being able to increase their bit-length as longS and doubleS.
It's gallingly simple to modern eyes, but hones quite closely to
what's actually on the CPU.
Look through the x86 or ARM7 instruction set and you will find
no references to Unicode strings or "objects" of any kind;
what you get is simple arithmetic and logical operations that work on
operands of 8, 16, and (maybe) 32 bits.
C is simple because, at their core, computers are simple.

(Adamson, 2011)
```

```
Of course, you can build any amount of complexity you like atop this simple foundation.
The American National Standards Institute (ANSI),
spend most of the 80s codifying the C Standard Library,
the collection of always-available libraries to perform essential operations
like memory management, string manipulation, and networking.
And you can then build your own libraries atop these.
But as long as you're still working in C, it's fairly easy
to keep your code running close to the metal,
working with simple structures and function calls.

Ritchie again:
"Despite some aspects mysterious to the beginner and occasionally even to the adept,
C remains a simple and small language, translatable with simple and small compilers.
Its types and operations are well-grounded in those provided by real machines,
and for people used to how computers work, learning the idioms for generating
time- and space-efficient programs is not difficult.
At the same time the language is sufficiently abstracted from machine details
that program portability can be achieved."

(Adamson, 2011)
```

```
With the rise of object-oriented programming, new languages co-opted C to provide OO features:
C++ has proven the most popular over time, while the Smalltalk-flavored Objective-C
might well have remained a footnote had it not been adopted by NeXT,
which le to its use in Apple's popular products.
Even so, within these languages, you still mix procedural C calls
with the object-oriented additions.

(Adamson, 2011)
```

## Police On My Back

```
Segmentation fault - command-line output of a C program with a broken pointer.

(Adamson, 2011)
```

```
The largely unmanaged freedoms of C, C++, or Objective-C
provide the opportunity to cause extraordinay havo with your code,
intentionally or not.
What's most distinctive about C compared to other popular languages today
is the exposure of memory pointers, and the disasters tha come with their misuse.
But the again, this is an intrinsic part of how computers work:
you have  a big block of memory (real or virtual), containing the system,
your program, and other programs.
If you can address any point in memory, and you read or write to an address that
your program doesn't own, what should happen?
One option is to allow programs to gallivant through each other's memory space.
As entertainment, this is "Core Wars"; as a coding error, it's a security nightmare.
In the real world, such mistakes are prohibited by operating systems,
and the offending program is terminated.

(Adamson, 2011)
```

```
A lot of people find this price of failure too high,
even though the fix is to just write better code,
and instead opt for an even more draconian option: taking away the keys.
Most modern languages provide their own memory management paradigms,
and never allow the developer to see a pointer.

Take a look at the TIOBE Programming Community Index,
and you'll see three kinds of languages in the top 10:

  - C and its OO derivatives:   C, C++, Objective-C
  - Interpreted languages:      Python, PHP, Visual Basic, Perl
  - Virtual Machine languages:  JAva, C#

The latter two groupings add profound new layers to the programming model:
interpreters to parse and interpret program code, or virtual machines
that create an entirely new execution environment for bytecode.
Importantly, in both of these cases, the programmer's code is not the executable:
run `ps` and you'll see that the interpreter or VM is what's running,
not your code per se.

(Adamson, 2011)
```
- https://www.tiobe.com/tiobe-index/
- www.tiobe.com/index.php/content/paperinfo/tpci/index.html

```
As we build abstraction upon abstraction,
we get further and further away from what's really going on in the CPU and memory.
In 2011, we now have popular scripting languages like Scala and Groovy
whose interpreters run in the Java Virtual Machine.
We're gone from workingwith the same data types that the CPU processes
to an elaborate stack of layer after layer of artifice and illusion.
If C is a punk band, blaring out the two or three basic types that the CPU understands,
this new style of programming is ... 
hiring the London Symphony Orchestra to play backup for his synthesizer.
...

(Adamson, 2011)
```

```
There's a price to pay for all this, the "abstraction cost" of creating
general-purpose interpreters and virtual machines.
Consider "Hello World" in C, Ruby, and Java,
with an added sleep so the program so the program doesn't immediately terminate:
...

Run all threee of these and take a look at the resources they demand for
this trivial program...
on Mac OS X the C program takes 356 KB, Ruby interpreter 1.6 MB, and thr JVM 25 MB.
Java also starts up 24 threads for this trivial program.
...

(Adamson, 2011)
```


## Nobody Likes You

```
As someone remarked: There are only two kinds of programming languages:
those people alway btich about and those nobody uses. - Bjarne Stroustrup

(Adamson, 2011)
```


