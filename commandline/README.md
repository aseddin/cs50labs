# Command-Line Interaction

In this lab you will learn:

- What are command-line arguments
- How can we use command-line arguments to provide input to our program
- Why we need to test for the correct argument count

## What are Command-Line Arguments?

![Command_Line_Interaction](http://labs.cs50nestm.net/command_line_interaction.gif)

Up until now, we've been getting user input through using functions such as `get_int()`, `get_string()`, etc. There is another way of getting input to our program as well, which is by using **command-line arguments**.

We saw David write a program early on that says "Hello" followed by a name, using `get_string()` to get the name, and saving this in a string variable, `s`. We recreated this program as `hello0` and executed it by typing

```
./hello0
```

If we use **command-line interaction**, we can get the input for `s` at the same time that we execute the program, rather than prompting for it. We named this version `hello1` and execute it by typing

```
./hello1 David
```

{% next %}

## How Do We Use Command-Line Arguments?

In order to allow our program to accept command-line arguments, we revise our **main** function to include the input arguments **argc**, an integer and **argv**, an array of strings.

```c
int main(int argc, string argv[])
```

The first of these argumentes, **argc**, stands for "argument count", and represents the number of arguments passed into through the command line. Each word typed at the command-line is considered an argument, including the name of the program we are calling. Previously, we wrote our **main** function to take no arguments (void). 

For instance

```
./hello0
```

has an argument count of one.

```
./hello1 David
```

has an arguement count of two.

The second argument, **argv**, stands for "argument vector", and is the actual array representing the arguments themselves. Each value in the array is a string.

<table>
<tr><th>Argument Count</th><th>Argument Vector</th></tr>
<tr><td>

|argc| 
|--|
|2|

</td><td>

|argv[0]|argv[1]|
|--|--|
|./hello|David|

</td></tr> </table>

{% next %}

## Why Check for Argument Count?

Let's see what happens if we execute our new program, `hello1` without typing in any command-line arguments.

![Command_Line_Interaction](http://labs.cs50nestm.net/hello_null.gif)

Why are we getting `hello (null)`? What is (null)?

Since our program, `hello1`, was expecting the name to be input at the command line, we ended up with

<table>
<tr><th>Argument Count</th><th>Argument Vector</th></tr>
<tr><td>

|argc| 
|--|
|1|

</td><td>

|argv[0]|argv[1]|
|--|--|
|./hello||

</td></tr> </table>

The program is printing the value argv[1] after `hello,`, but argv[1] is an empty string, or `null`. 

Expecting command line input and not receiving it can end up with unpredictable results, or even make our program crash. 

This is why we always check that the correct number of arguments are input at the command-line before executing our program. 


[For more info, download the CS50 Syntax Reference Sheet](https://ap.cs50.school/assets/pdfs/unit2/command-line_interaction.pdf)