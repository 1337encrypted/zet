# Lesson 6

## Booleans

true
false

## Comparison Operators

| Operator | Meaning | Remarks |
| :--- | :--- | :--- |
| > | Greater than | |
| < | Lesser than | |
| >= | Greater than or equal to | |
| <= | Lesser than or equal to | |
| == | Equals to | Converts the values to same type | |
| === | Equal to | Doesn't convert the value to same type | |
| != | Not equal to | Converts the values to same type and compares |
| !== | Not equal to | Doesn't convert the value to same type |

## if statements 

if (condition){}

## if else statements

if{condition){
    //stmt
}
else{
    //stmt
}

## if, else if, else statements

if{condition){
    //stmt
}
else if(condition){
    //stmt
}
else{
    //stmt
}

## Truhty and Falsy values

### Falsey values

```
false   0   ''   Nan  undefined   null
```

- Anything other than this is a truthy value

## Shortcuts for if-statements

1. Ternary Operator ?:
2. Guard Operator &&
3. Default Operator ||

### Ternary Operator

```
    const result = (condition) ? 'truthy' : 'Falsy';
``` 

### Guard Operator

```
    const result = false && 'Hello';
    console.log(result);

    output: false
```

- Stops early
- Doesn't need to run the code on the right

```
    const result = 5 && 'Hello';
    console.log(result);

    output: Hello
```

- when the left variable is true
- The right variable value gets saved into the result variable

### Default Operator

```
    const result = 'EUR' || 'USD';
    console.log(result);

    output: EUR
```

```
    const result = undefined || 'USD';
    console.log(result);

    output: USD
```

- The OR operator checks for the left value first
- If its true it gets saved in the result variable
- Else the right side variable gets saved into the result variable