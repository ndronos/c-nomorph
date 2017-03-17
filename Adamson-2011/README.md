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

Perhaps the reason C has stuck around so long its that its bang for the buck really is
historically remarkable, and umlikely to be duplicated.
For all the advantages over Assembly, it maintains furious performance,
and the abstractions then built atop C (with the arguable exception of Java,
whose primary sin is being a memory pig) sacrifice performance for expressiveness.
We've always known this of course, but it takes a certain level of intellectual honesty
to really acknowledge how many extra CPU cycles we burn by writing code in something like
Ruby or Scala. If I'm going to run that slow, I think I'd at least want to
get out of curly-brace/function-call hell and adopt a different style of thinking, like LISP.


(Adamson, 2011)nothing 
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



(Adamson, 2011)
```
