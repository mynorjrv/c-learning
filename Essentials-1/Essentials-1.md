# Intro to programming

## Natural vs programming language
Natural language is a tool for expressing and recording human thoughts.

Programming languages are defined by a set of rigid rules, dictated by specific needs.

This rules include: lexicon, the group of symbols the language could use; syntax, the rules that determines the appropriate way of collating symbols; and semantics, the meaning of every statement expressed in the given language.

Programming languages are useful when communicating with computers. Computers (as well-trained dogs) responds only to a predetermined set of known commands. A complete set of well-known commands is called an instruction list (IL), and different computers could have different Ils.

The ILs forms the machine language. This is the most primary language to command a computer, and essentially computer programming is the act of commanding a computer. however, machine language is difficult to understand to humans and a program written for one computer may not work on another.

Programming languages work as a bridge between natural language and computer language. This language are often called high-level programming languages (it also depends on the level of abstraction).

From a programming language it is possible to tanslate the program to machine language, and this translation can be don by a computer. Since a translator can be wirtten for each computer, it is possilbe to write one program for multiple computers, this feature is called portability.


## Compilation

The process of translating from a programming language to machine code is called compilation, and a specialized computer program that translate is called a compiler.

The program written in a programming language is called the source code, and the file that contains it is called the source file.

Sources files are written as plain text, this can be done in any text editor that allows text manipulation without any formatting information. The name of this file should be significant and the suffix is used to denote the programming language used (for example ".c").

After writting the source code, it needs to be compiled. A compiler needs where is the source file stored, reads the code, does analysis and its first goal is to determine if there is an error during coding.

It is important to say that some errors can not be detected by a compiler, for example typing a "-" instead of a "+" will work fine. Do not expect the compiler to think for you.

If the compiler does not notice any mistake, the compiler will write a file containing the program translated into machine code. This file is called an executable file. The output name depends on the operating system used. For example, compilers designed for Unix/Linux systems create an output file named "a.out" by default.

The whole process is actually more complicated. The source code might be comprehensive and divided among several or even dozens of source files. It may also happen that the program was written by a team instead of a single developer. In those cases the copiling process splits in two phases: compilation of source code and then linking, a process in which the code is joined. The linking process is made by a (surprisingly) a linker.

## About C

THe only important thing is that C is a general purpose programming language, which means it sis suitable for almost any programming project and at the same time is not particularly predestined to any specific, narrow class of aplplications.

## A Hello World!

A simple program that:

1. starts;
2. writes text to the console;
3. stops.

´´´C
#include <stdio.h>

int main(void){
    puts("Its me")
    return 0;
}
´´´

An a mention to **algorithms** which are a structured and semi-formal description of steps a program should follow.

### Preprocessor directive

In this program, the first line which begins with a `#` (hash) is a **preprocessor directive**. The preprocessor is a 
separate part of the compiler, whose task is to pre-read the text of the program and make some modifications. The prefix "pre"
siggests that these operations are performed before the compilation.

The chages the preprocessor introduces are controlled entirely by its directives. In this simple program we are using
the **include** directive. When the preprocessor encounters that directive, it replaces the directive with the content 
of the file whose name is listed in the directive (in our case, this is the file `stdio.h`). Note, the changes made by 
the preprocessor never modify the content of your source file in any way. Any alterations are made on a volatile copy 
of your program, which disappears immediately after the compiler finishes its work.

Why would we want to include the content of a copletely unknown file `stdio.h`. In this case we are building the program
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
(and there is a distintion between arguments and parameters), and things that a function returns are called results..

There is one special type of function that must be present in any C program. otherwise the program woul not be correct. This function
always have the same name and is called `main`.

A function must include the type of the result, the name of the function and the name and type of the parameters. The set of this information
is called a **prototype**, an the types of the result and parameters are called the **signature** of the function.

What the function actually do is defined in the interior of the function and is called the **body**. The body is enclosed between 
curly brackets `{}`. The body may be empty, that would mean the function does nothing. Also, the prototype of the function can exists
before the function has a body, this is used to make the compiler aware of the function name and writting the body of the function 
after ir is used.

Each line of the body is called a statement, and each statement must end with a semicolon. Note that each line ends with semicolon,
therefore each line is a different statement, this makes the code cleaner.

When you want to use a function, you call the name of the function and pass to it arguments. Calling a function is called a
function invocation. In the example, `puts("Its me")` is invoked with a string (test) as argument, this text is enclused in quotes.

Finally, the function execution can be caused by a `return` statement. This statement does exactly that, it return some value,
and its execution immediately interrupts the function execution. 

The return value of the `main` function is an integer, this statement signals the state of the program after its execution.
A 0 as a result signals that the function did what it had to do and nothing stopped it, then wverything is OK. A 1 would mean that
something had gone wrong. This allows the OS to react in the most appropiate way.




# Basic data types, operations and flow control (decision statements)

# Flow control (loops), typecasting

# Switch, arrays, pointers and basics of strings

# Operations on arrays and pointers, memory management and functions
