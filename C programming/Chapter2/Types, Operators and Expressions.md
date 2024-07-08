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
| `\\a`           | Alert (bell)                     |
| `\\b`           | Backspace                        |
| `\\f`           | Formfeed                         |
| `\\n`           | Newline                          |
| `\\r`           | Carriage return                  |
| `\\t`           | Horizontal tab                   |
| `\\v`           | Vertical tab                     |
| `\\\'`          | Single quote                     |
| `\\"`           | Double quote                     |
| `\\\\`          | Backslash                        |
| `\\?`           | Question mark                    |
| `\\0`           | Null character                   |
| `\\xhh`         | Character with hexadecimal value `hh` |
| `\\ooo`         | Character with octal value `ooo` |


