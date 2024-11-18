# Types, Operators and Expressions


## Variable names

- The first character should be a letter.
- _ also counts as a letter
- Traditional C practice is to use lower case for variable names
- All upper case for symbolic constants.

## Data types and sizes 
| Data Type  | Alias          | Size (bytes) | Lower Limit   | Upper Limit       |
|------------|----------------|--------------|---------------|-------------------|
| uint8_t    | unsigned char  | 1            | 0             | 255               |
| int8_t     | char           | 1            | -128          | 127               |
| uint16_t   | unsigned int   | 2            | 0             | 65,535            |
| int16_t    | int            | 2            | -32,768       | 32,767            |
| uint32_t   | unsigned long  | 4            | 0             | 2^32              |
| int32_t    | long           | 4            | -(2^32)/2     | (2^32)/2-1        |
| bool       | boolean        | 1            | false (0)     | true (1)          |
| float      | -              | 4            | -3.40E+38     | 3.40E+38          |
| double     | -              | 8            | -1.79E+308    | 1.79E+308         |

# Constants
|decimal|Octal|Hexadecimal|
| 31 | 037 | 0x1f |

- 0XfUL -  UL describes tha value to be unsigned long
- A character constant is an integer, written as one character within single quotes, such as 'x'

### Escape sequences

| Escape Sequence | Character Represented            |
|-----------------|----------------------------------|
| `\a`           | Alert (bell)                     |
| `\b`           | Backspace                        |
| `\f`           | Formfeed                         |
| `\n`           | Newline                          |
| `\r`           | Carriage return                  |
| `\t`           | Horizontal tab                   |
| `\v`           | Vertical tab                     |
| `\'`          | Single quote                     |
| `\"`           | Double quote                     |
| `\\`          | Backslash                        |
| `\?`           | Question mark                    |
| `\0`           | Null character                   |
| `\xhh`         | Character with hexadecimal value `hh` |
| `\ooo`         | Character with octal value `ooo` |

- The character constant '\0' represents the character with value zero, the null character. '\0' is often written instead of 0 to emphasize the character nature of some expression, but the numeric value is just 0.
- A string constant, or string literal, is a sequence of zero or more characters surrounded by double quotes.

- Enums are better than #define
- A debugger may be able to print values of enumeration variables in their symbolic form.

## Declarations

- The qualifier const can be applied to the declaration of any variable to specify that its value will not be changed.

## Arithmetic Operators

- The binary arithmetic operators are +, -, *, /, and the modulus operator %. Integer division truncates any fractional part.

| Precedence | Operator      | Description         | Associativity    |
|------------|---------------|---------------------|------------------|
| Highest    | ( )           | Parentheses         | N/A              |
|            | +, -          | Unary plus, minus   | Right-to-left    |
|            | *, /, %       | Multiplication, Division, Modulus | Left-to-right |
| Lowest     | +, -          | Addition, Subtraction | Left-to-right |


## Relational and Logical Operators

| Operator | Description             | Example    | Precedence | Associativity |
|----------|-------------------------|------------|------------|---------------|
| `==`     | Equal to                | `a == b`   | 8          | Left-to-right |
| `!=`     | Not equal to            | `a != b`   | 8          | Left-to-right |
| `>`      | Greater than            | `a > b`    | 9          | Left-to-right |
| `<`      | Less than               | `a < b`    | 9          | Left-to-right |
| `>=`     | Greater than or equal to| `a >= b`   | 9          | Left-to-right |
| `<=`     | Less than or equal to   | `a <= b`   | 9          | Left-to-right |
| `&&`     | Logical AND             | `a && b`   | 13         | Left-to-right |
| `||`     | Logical OR              | `a || b`   | 14         | Left-to-right |
| `!`      | Logical NOT             | `!a`       | 3          | Right-to-left |

- Lower numbers indicate higher precedence.
- Operators with the same precedence are evaluated according to their associativity.

## Increment and Decrement Operators

- The increment and decrement operators can only be applied to variables; an expression like (i+j)++ is illegal.

