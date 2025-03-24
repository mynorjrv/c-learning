# Intro to programming

## Natural vs programming language
Natural language is a tool for expressing and recording human thoughts.

Programming languages are defined by a set of rigid rules, dictated by specific needs.

This rules include: lexicon, the group of symbols the language could use; syntax, the rules that determines the appropriate way of collating symbols; and semantics, the meaning of every statement expressed in the given language.

Programming languages are useful when communicating with computers. Computers (as well-trained dogs) responds only to a predetermined set of known commands. A complete set of well-known commands is called an instruction list (IL), and different computers could have different Ils.

The ILs forms the machine language. This is the most primary language to command a computer, and essentially computer programming is the act of commanding a computer. however, machine language is difficult to understand to humans and a program written for one computer may not work on another.

Programming languages work as a bridge between natural language and computer language. This language are often called high-level programming languages (it also depends on the level of abstraction).

From a programming language it is possible to translate the program to machine language, and this translation can be don by a computer. Since a translator can be written for each computer, it is possible to write one program for multiple computers, this feature is called portability.


## Compilation

The process of translating from a programming language to machine code is called compilation, and a specialized computer program that translate is called a compiler.

The program written in a programming language is called the source code, and the file that contains it is called the source file.

Sources files are written as plain text, this can be done in any text editor that allows text manipulation without any formatting information. The name of this file should be significant and the suffix is used to denote the programming language used (for example ".c").

After writing the source code, it needs to be compiled. A compiler needs where is the source file stored, reads the code, does analysis and its first goal is to determine if there is an error during coding.

It is important to say that some errors can not be detected by a compiler, for example typing a "-" instead of a "+" will work fine. Do not expect the compiler to think for you.

If the compiler does not notice any mistake, the compiler will write a file containing the program translated into machine code. This file is called an executable file. The output name depends on the operating system used. For example, compilers designed for Unix/Linux systems create an output file named "a.out" by default.

The whole process is actually more complicated. The source code might be comprehensive and divided among several or even dozens of source files. It may also happen that the program was written by a team instead of a single developer. In those cases the copiling process splits in two phases: compilation of source code and then linking, a process in which the code is joined. The linking process is made by a (surprisingly) a linker.

## About C

The only important thing is that C is a general purpose programming language, which means it sis suitable for almost any programming project and at the same time is not particularly predestined to any specific, narrow class of applications.

## A Hello World!

A simple program that:

1. starts;
2. writes text to the console;
3. stops.

```C
#include <stdio.h>

int main(void){
    puts("Its me")
    return 0;
}
```

An a mention to **algorithms** which are a structured and semi-formal description of steps a program should follow.

### Preprocessor directive

In this program, the first line which begins with a `#` (hash) is a **preprocessor directive**. The preprocessor is a 
separate part of the compiler, whose task is to pre-read the text of the program and make some modifications. The prefix "pre" suggests that these operations are performed before the compilation.

The changes the preprocessor introduces are controlled entirely by its directives. In this simple program we are using
the **include** directive. When the preprocessor encounters that directive, it replaces the directive with the content 
of the file whose name is listed in the directive (in our case, this is the file `stdio.h`). Note, the changes made by 
the preprocessor never modify the content of your source file in any way. Any alterations are made on a volatile copy 
of your program, which disappears immediately after the compiler finishes its work.

Why would we want to include the content of a completely unknown file `stdio.h`. In this case we are building the program
with a ready-made block, the `puts()` function. This function allows the program to write on the screen, but the compiler 
knows nothing about the function. This preliminary information needed by the compiler is included in the so called 
**header files** , whose names usually end with '.h'.

In our case, we are including the `stdio.h` file. This file is part of the C language standard, and contains a collection 
of preliminary information about ready-made blocks which can be used by a program to write text on the screen or to read 
letters from the keyboard. By using `include` we are warning the compiler about the use of this block.

Because `stdio.h` is part of the standard, the compiler knows where to find this file. We will return to this when studying 
preprocessing in detail.

### Brief intro to functions

I already spoiled this, but we have mention some 'blocks'. In this sense, functions are blocks of code. As always, functions are
described as black boxes, they get something and then return something. Things that are given to a function ate called function parameters
(and there is a distinction between arguments and parameters), and things that a function returns are called results..

There is one special type of function that must be present in any C program. otherwise the program would not be correct. This function always have the same name and is called `main`.

A function must include the type of the result, the name of the function and the name and type of the parameters. The set of this information is called a **prototype**, an the types of the result and parameters are called the **signature** of the function.

What the function actually do is defined in the interior of the function and is called the **body**. The body is enclosed between curly brackets `{}`. The body may be empty, that would mean the function does nothing. Also, the prototype of the function can exists before the function has a body, this is used to make the compiler aware of the function name and writing the body of the function after it is used.

Each line of the body is called a statement, and each statement must end with a semicolon. Note that each line ends with semicolon, therefore each line is a different statement, this makes the code cleaner.

When you want to use a function, you call the name of the function and pass to it arguments. Calling a function is called a function invocation. In the example, `puts("Its me")` is invoked with a string (test) as argument, this text is enclused in quotes.

Finally, the function execution can be caused by a `return` statement. This statement does exactly that, it return some value, and its execution immediately interrupts the function execution. 

The return value of the `main` function is an integer, this statement signals the state of the program after its execution. A 0 as a result signals that the function did what it had to do and nothing stopped it, then everything is OK. A 1 would mean that something had gone wrong. This allows the OS to react in the most appropriate way.


## Numbers

Computers use binary system for storing numbers, and they can perform operations upon them. Numbers handled by modern computers are of two types:

- **Integers**, those which are devoid of fractional part,
- **Floating-point** numbers (or floats), that are able to contain a fractional part.

The definitions are not entirely accurate but they are 'good enough'. This distinction is very important and the boundary between these two types of numbers is very strict. Both of these kinds of numbers significantly differ in how they are stored in a computer’s memory and in the range of acceptable values. Furthermore, the characteristic of a number which determines its kind, range and application is called a type.

In C, these numbers are of **integer type** (called int) and **floating point type** (called float).

C recognize integers as digits concatenated, just as if the number where written with pen on paper, with the reservation that you must not insert any other characters that are not digits inside the number.

For example `11111111` is a valid integer but `11,111,111` or `11 111 111` are not.

Integers can also be negative, this is achieved by adding a minus before the number: `-11111111`. And for positive numbers it is not necessary to add the plus sign before the number.

C also introduce two conventions of number systems. First, an integer that is preceded by a 0 is treated as an **octal value**. This means that the number must contain digits from the range [0, 7] only. For example, `0123` is equivalent to 83 in base 10, and `019` is not a valid number because 9 is not in the appropriate range.

The other convention regarding numbers is that integers preceded by '0x' is treated as a **hexadecimal number**. In this case the digits are in the range [0, 9] but can also be letters from A to F. For example, `0x123` represents 291 in base 10.

For printing numbers, we use the `printf()` function from `stdio`. 'printf' is print with format, so is necessary to specify the type of the number we are printing.

```C
#include <stdio.h>

int main(void){
    printf("%d\n", 1234);
	printf("%d\n", 01234);
	printf("%d\n", 0x1234);

	printf("%f\n", 0.323);
    return 0;
}
```

## Variables

As in every other normal programming language :) C allows to use **variables**, 'special containers' to store numbers and the result of arithmetic operations between numbers. The name suggests that the value can varied in the execution of the program.

A variable must have:
- a name,
- a type,
- and a value.

### Variable names

Also called identifiers (you can identify a variable using its name). Variable names are unique for each variable and follow a set of rules:

- must be composed of upper-case or lower-case Latin letters, digits or underscore (_),
- must begin with a letter,
- the underscore is treated as a letter,
- the name is case sensitive, this means upper and lower-case letters ate treated as different.

This rules also applies to **function names**.

The standard of the C language does not impose restrictions on the length of variable names, but specific compilers may implement some restrictions. Usually the limitations is set so high that is unlikely to achieve it.

### Variable type

The type uniquely defines which values can be stored inside the variable. At this point we have studied two types: ints and floats. You can only put a value that is compatible with the variables type. For example, the compiler will not allow us to put 1.23 in an int variable.

### Variable declaration

(Strange order, i know)

The variable comes into existence as a result of a declaration. A declaration is a syntactic structure that binds a name, provided by the programmer, to a specific type offered by the C language. For example `int Counter;` declares an int variable with name Counter.

Multiple variables can be declared at the same time, for example `int variable1, account_balance, invoices;` declares three int variables.

It may include an initial value assigned to the variable. 

### Variable values

The value is the actual number (it could not be a number) stored in the variable. To store a value in a variable the **assignment operator** is used. The operation has a simple and unambiguous interpretation, and it is `=`.

With this and a previously created variable, we can assign a value like `Counter = 2;`. It may be read as assign 2 to Counter, or Counter becomes 2.

Another example is storing the result of an operation, like `result = 200 + 100;`.

And another common patter is the following: `x = x + 1;` which may seem odd. How could a value be equal to itself plus one? We have to remember that `=` is the assign operator, this means we are updating the value of x to x+1, the value is **incremented** by one.

And as we said before, a variable could be declared with a specific value, for example `int Counter = 0;`.


## C keywords

C keywords or **reserved keywords** are names used by the language itself. Because of this, these keywords are not available for redefinition, they can not be used as variable names, nor functions, nor any other named entity.

A complete list is available in [cpp reference](https://en.cppreference.com/w/c/keyword).

## Comments

To make blocks of comments inside the code the comment must be surrounded by `/*` and `*/`. For example `/* This is a comment */`. Comments are treated as one space by the compiler, so they can be used to explain parts of the code inside the code itself.

Another option is to use a one line comment, this line must start with `//` and the whole line will be treated as a space.



# Basic data types, operations and flow control (decision statements)

## Floating-point number

> Kind of funny that a couple of days ago I watched a video about [IEEE 754](https://en.wikipedia.org/wiki/IEEE_754) and why floating-point arithmetic is strange xd 

We briefly talked about floats before, they are a type designed to represent and store numbers that have a **non-empty decimal fraction**. 

They are numbers that have or may have a fractional part after the decimal point (the definition is very poor xd). But examples are "two and a half" or "zero point four".

About commas: C accept only point as a decimal separator, some languages use comma but the C compiler may misunderstand the program intentions. Also, commas are not accepted as thousands separator.

The examples would be then `2.5` and `0.4`.

Another detail is that zero before or after decimal point may be omitted. `0.4` may be written as `.4` and `4.0` may be written as `4.`. 

The point is essential in recognizing floating-point numbers. A `4` is interpreted as an int, `4.0` is a **double**.

Doubles represent double-precision floating-point numbers, they have fifteen decimal digits of precision and can be assigned to floats. Floats are single-precision floating-point numbers which have six decimal digits of precision. 

I do not understand why they introduce this difference so informal xd but apparently they will explain this later.

Floating-point numbers allows us to use scientific notation to express large or small numbers. For example `6.62607E-34` would be the Planck's constant, or `3E8` would be the speed of light. It is possible to use the lower case letter `e`, and it is important to remember that the exponent must be an integer.

For declaring these types we use the keywords **float** and **double** respectively, just as we declared ints.

```C
float PI, Field;

int i;
float x;

i = 10 / 4;
x = 10.0 / 4.0;
```

Declaring a different type of variable is pretty simple, but the difference is significant in terms of semantics. The **/** operator performs mathematical division, but when dividing `10/4` as ints we get 2, while if we use floats the result is 2.5.

### About type conversions

We could transform ints to floats, it is always possible and feasible but in some cases can cause a loos of accuracy(?). For example int(100) is converted to a float(100). The transformation affects the internal (machine) representation of the values, as computers use different methods for storing floats and ints in memory.

Now, lest consider the opposite situation. If we try to convert `100.25` to int, we are just going to get the 100 part of the number. Decimals do not make sense for ints.

Another part of conversion is the size of the data type. Both ints and floats have limited capacity. If a computer use four bytes to store ints, we are only able to stores numbers in the range [-2147483648, 2147483647]. Therefore, if we try to assign `1e10` to an int there is not just a loss of accuracy but the value assigned to the int is not known in advance. Some systems may throw an error, others may assign the maximum permissible int value and others the value may be completely random. This is called an **implementation dependent issue**, and comes with software portability.


## Operators

As it was briefly introduce in the previous section, an **opertor** is a symbol in the programming language which is able to operate some values. For example, we have used the assignment operator `=` which is used to assign values to variables.

### Arithmetic operations

- An asterisk `*` is the **multiplication** operator.
- A slash `/` is a **divisional** operator. The value in front of the slash is a **dividend**, the value behind the slash, a **divisor**. Division by zero is forbidden but you may get a compilation error or the execution may terminate abnormally and produce unreliable results.
- A plus `+` is the **addition** operator. 
- A minus `-` is the **subtraction** operator, and can also be used to change the sign of a number. `-` can act as a **unary** operator (it operates over one value) or as a **binary** operator (it operates over two values).
- A percent `%` is the **remainder** or **modulus** operator. It only receives ints 


# Flow control (loops), typecasting

# Switch, arrays, pointers and basics of strings

# Operations on arrays and pointers, memory management and functions
