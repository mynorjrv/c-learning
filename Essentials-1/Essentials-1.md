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




# Basic data types, operations and flow control (decision statements)

# Flow control (loops), typecasting

# Switch, arrays, pointers and basics of strings

# Operations on arrays and pointers, memory management and functions
