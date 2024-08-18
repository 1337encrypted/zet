#!/usr/bin/glow
# echo

## Arithmetic Expansion

- Addition (+):        echo $(( 10 + 5 )) → Output: 15
- Subtraction (-):     echo $(( 10 - 5 )) → Output: 5
- Multiplication (*):  echo $(( 10 * 5 )) → Output: 50
- Division (/):        echo $(( 10 / 5 )) → Output: 2
- Modulus (%):         echo $(( 10 % 3 )) → Output: 1
- Exponentiation (**): echo $(( 2 ** 3 )) → Output: 8

### example 
```echo "The sum of 3 and 5 is $(( 3 + 5 ))"```

- For floating-point arithmetic, you’ll need to use external tools like bc since Bash does not support floating-point calculations natively.
```echo "scale=2; 10 / 3" | bc```

## Brace Expansion
```
echo Front-{A,B,C}-Back 
```
Output:  
Front-A-Back Front-B-Back Front-C-Back  

```
echo {01..15}
```
Output:  
01 02 03 04 05 06 07 08 09 10 11 12 13 14 15  

```
echo {Z..A}
```
Output:  
Z Y X W V U T S R Q P ON M L K J I H G F E D C B A
