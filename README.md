# Compiler-H
It is Built with Flex and Bison.

This is a compiler project designed for Compiler Design course.


## Clone
```
https://github.com/ArafatRohan93/Compiler-H
```

# Syntax

* **Calling Main Function**
```
void_main ( )
{{ ... }}

```
* **Statement Terminator**
```
<br>
```
* **Declaring  Variables**
```
$_int_$  a:=50
```
* **Operators**

 | Symbol  | Action |
 | ------------- | ------------- |
 | :=  | Assignment  |
 | ^ | Power  |
 |  + | Plus  |
 | - | Minus |
 | * | Multipliation |
 | / | Division |
 | > | Greater Than |
 | < | Lesser Than |
 | == |   Is Equal  |
 | >= |   Greater or Equal  |
 | <= |   Lesser or Equal  |
 | != | Not Equal  |
 | ! | Factorial |
 
 * **Scope Resolution Operator**
 
 | Symbol  | Action |
 | ------------- | ------------- |
 | {{  | Start of scope  |
 | }} | End of scope  |
 
 * **if-else**
 Supports Nested if properties
 ```
  if (1):
	    {{ 5 }}
	else:
	    {{ 7 }}
 ```
 ```
 if (2 > 3):
		{{ 1 }}
	 else:
	   {{
	     if (0):
	       {{ 5 }}
	      else:
	        {{ 7 }}
     }}    
 ```
 
 * **Loops**
 * For Loop
 ```
for ( x := 0 , x <= 4, x ++ ) 
{{
  print(5) <br>
}}
 ```
 * While Loop
 ```
while(i<5):
{{
  z<br>
  i++<br>
}}
 ```
 * **Function**
 * Declaration
 *Must be inside Main()*
 ```
 return_type function name()
 {{ 
  ...
 }}
 ```
 Example : 
 ```
 $_int_$ function oddeven1 ( )
	    {{
           13 <br>
	    }}
 ```
 * Calling Function
 ```
 function oddeven1 ( )
 ```
 

# Installation
* First install [Flex and Bison](https://sourceforge.net/projects/winflexbison/) on your machine.
<!--
## Windows
1. Download the Windows version of FLEX
2. Download a C/C++ Compiler DevCPP or Code::Blocks
3. Install all. It's recommended to install in folders WITHOUT spaces in their
names. I use ``` 'C: \GNUWin32' ``` for FLEX and ``` 'C: \ DevCPP' ```
4. Now add the BIN folders of both folders into your PATH variable. In case
you don't know how to go about this, see how to do it on Windows
XP ,Windows Vista and Windows 7. You will have to add : ```'C:\GNUWin32\bin;C:\Dev-Cpp' ``` to the end of your PATH
5. Open up a CMD prompt and type in the following

``` 
C:\flex --version
```
 ```
 =>flex version 2.5.4
 ```
```
C:\>gcc --version
```
```
=>gcc (GCC) 3.4.2 (mingw-special)
Copyright (C) 2004 Free Software Foundation, Inc.
this is free software; see the source for copying
```
## Linux (Ubuntu)
NOTE: You have to install m4 (general purpose macro processor) before installing Flex:-

• Downloading m4:
Run the command below,
```
wget ftp://ftp.gnu.org/gnu/m4/m4-1.4.10.tar.gz
```
• Extracting files from the downloaded package:
```
tar -xvzf m4-1.4.10.tar.gz
```
Now, enter the directory where the package is extracted.
```
cd m4-1.4.10
```
• Configuring m4:
```
./configure
```
• Compiling m4:
```
make
```
Note: check for any error message.
• Installing m4:
As root (for privileges on destination directory), run the following.
```
sudo make install
```
Note: check for any error message

Downloading Flex (The fast lexical analyzer):
Run the command below,
```
wget http://prdownloads.sourceforge.net/flex/flex-.5.33.tar.gz?download
```
 Note: Replace 2.5.33 with your version number.
• Extracting files from the downloaded package:
```
tar -xvzf flex-2.5.33.tar.gz
```
Now, enter the directory where the package is extracted.
```
cd flex-2.5.33
```
• Configuring flex before installation:
```
PATH=$PATH: /usr/local/m4
```
NOTE: Replace ``` '/usr/local/m4/bin' ``` with the location of m4 installation
directory. Now, configure the source code before installation.
```
./configure
```
• Compiling flex:
```
make
```
 Note: check for any error message.
• Installing flex:
 As root (for privileges on destination directory), run the following.
 ```
sudo make install
```
-->
# Compilation and Execution

1.Open Command prompt and switch to your working directory where you have stored your lex file (“.l“) and yacc file (“.y“).

2.Let your lex and yacc files be “rhn.l” and “rhn.y“. Now, follow the preceding steps to compile and run your program.

* For Compiling Lex file only:
```
flex hello.l
gcc lex.yy.c
```
* For Compiling Lex & Yacc file both:
```
flex hello.l
bison -dy hello.y
gcc lex.yy.c y.tab.c
```
* For Executing the Program
```
a.exe
```
