# FOXNOX Translation Language Documentation
## What is FOXNOX?
FOXNOX is a simple statically typed language that can be easily learned by a beginning programmer. It takes many features away from languages like BASIC & HASKELL. 
FOXNOX was made as a project for our final CS class(HBTG-G6-P3) assignment, after our attempt of making a small 4-bit CPU drastically failed.

## Installation
**Linux:**</br>
```bash 
git clone https://github.com/sj-ackdo/foxnox...
cd FOXNOX/
make install
```
**Windows:**</br>
The windows version can be downloaded as prebuilt binary or made from scratch using the myngw/bash gcc compiler as described in **Linux**

**MacOs**</br>
No support at the moment

## How does FOXNOX work?
FOXNOX receives its input through the commandline.</br>
**example:**</br>
`int let x = 5 | RUN`</br>
This piece of code will make an integer variable called x and assign the value 5.</br>
`int` Integer variable depends on let</br>
`let` Assign value to ...</br>
`x` Variable name</br>
`=` points to variable value </br>
`|` End this line of code </br>
`RUN` Run the piece of code inserted</br>
All other keywords can be found in [the keyword document](keyword.md).
