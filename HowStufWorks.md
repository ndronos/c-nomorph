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
