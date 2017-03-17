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


(Adamson, 2011)
```
- http://blog.gmarceau.qc.ca/2009/05/speed-size-and-dependability-of.html

