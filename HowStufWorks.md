## (HowStuffWorks, 2017) 41p

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


(HowStuffWorks, 2017) pp. 8
```



