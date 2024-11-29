# JBASIC 🏯

| 新しい名前 | 古い名前 |
| ---------- | -------- |
| 表示       | PRINT    |
| レット     | LET      |
| と         | AND      |
| か         | OR       |
| もし       | IF       |
| 終了       | END      |
| その後     | THEN     |
| ために     | FOR      |
| に         | TO       |
| 増加       | STEP     |
| 次         | NEXT     |
| 入力       | INPUT    |

| 新しい名前 | 古い名前 |
| ---------- | -------- |
| +          | +        |
| \-         | \-       |
| \*         | \*       |
| /          | /        |
| ^          | ^        |
| ()         | ()       |
| <>         | <>       |
| >=         | >=       |
| >          | >        |
| <          | <        |
| <=         | <=       |
| =          | =        |
| ;          | ;        |
| ,          | ,        |

> [!IMPORTANT]
> This was started as a homework. Started using ANTLR to explore
> more but, I will continue developing this when I have time.
> out of interest. Also it also has been a little modernized.

## Example

There is an example script in the `testScripts` directory.

## What can you do?

For now the options are:

### Actions

-   Set variables of type string and number
-   Print variables and literals like numbers and texts.
-   Can run expressions like +, -, \*, \/, ^
-   When using a string:
    -   \+ : Appends to string
    -   \- : Removes from string
-   Can run comparative operations like
    -   <> : Not equal to
    -   \>= : Greater than or equal
    -   \> : Greater than
    -   < :Less then
    -   <= :Less then or equal
    -   = : equal
-   The brackets symbolize priority of runtime
-   If statements in single and multiple lines
-   For loops in one and multiple lines
    -   When using multiline actions like loops and others, end action with;
    -   Example: `表示 Num;` -> inside action.

#### Data Types

-   String
-   Integer
-   Float
-   Double

## How to use

#### Setup of interpeter

1. Go to the build folder
2. run `cmake ..`
3. run `make`

#### Run script with code

To run first take in consideration that it is set to need a file type `*.jbas`

As an example you can run one of the scripts from the *testScripts* directory.
The interpreter will be in build after you have run the setup part.

To test it out in the *build* folder run `./JBasic ../testScripts/test.jbas`
This script is what I used to test new features I added.
