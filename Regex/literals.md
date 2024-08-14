# Literals in Regular Expressions

## What Are Literals?
Literals are the most basic elements in regular expressions. They match exactly what they represent. For instance, the literal `abc` matches the characters `abc` in a string, exactly in that order.

## Examples

### 1. Basic Matching
- **Pattern:** `hello`
- **Matches:**
  - `"hello world"`
  - `"say hello"`
  - `"HELLO"` (only if case-insensitive mode is enabled)

### 2. Case Sensitivity
- **Pattern:** `dog`
- **Matches:** `"dog"`
- **Does Not Match:** `"Dog"` (unless case-insensitive mode is enabled)

### 3. Matching Special Characters
To match special characters (like `.` or `*`), you need to escape them with a backslash `\`.

- **Pattern:** `\.` (matches a literal period)
  - **Matches:** `"The file is named file.txt."`
  - **Does Not Match:** `"There is no period here"`

- **Pattern:** `\*` (matches a literal asterisk)
  - **Matches:** `"5*6=30"`
  - **Does Not Match:** `"Multiplication is fun"`

### 4. Matching Strings with Spaces
- **Pattern:** `ice cream`
- **Matches:**
  - `"I love ice cream."`
  - `"ice cream is tasty"`
- **Does Not Match:**
  - `"icecream"`

### 5. Matching with Escaped Characters
Some characters have special meanings in regex, like `\n` for newline, `\t` for tab.

- **Pattern:** `Line1\nLine2`
  - **Matches:** `"Line1\nLine2"` (a literal newline character between Line1 and Line2)

### 6. Matching Backslashes
To match a literal backslash, use `\\`.

- **Pattern:** `C:\\Users\\Uma`
  - **Matches:** `"C:\Users\Uma"`

## Best Practices

### 1. Escaping Special Characters
Always escape special characters (like `.`, `*`, `?`, `+`, etc.) with a backslash `\` if you want to match them literally. For example, to match a period, use `\.`.

### 2. Test Your Patterns
Always test your regex patterns with various inputs to ensure they behave as expected.

### 3. Use Tools for Testing
Tools like `regex101.com` are great for testing and debugging regular expressions.

### 4. Be Explicit
Be explicit about what you want to match. Instead of relying on implicit behavior, make your intentions clear in the pattern.

## Common Pitfalls

### 1. Forgetting to Escape Special Characters
If you forget to escape special characters, your regex might not work as intended. For example, `.` without a backslash matches any character, not just a literal period.

### 2. Case Sensitivity
Remember that regex is case-sensitive by default. If you want to perform a case-insensitive match, you'll need to use the appropriate flag (e.g., `REG_ICASE` in C).

## C Code Example

Here’s a simple C program that uses POSIX regex to match a literal pattern:

```c
#include <stdio.h>
#include <regex.h>

int main() {
    regex_t regex;
    int reti;
    const char *pattern = "hello";
    const char *string = "hello world";

    // Compile the regular expression
    reti = regcomp(&regex, pattern, 0);
    if (reti) {
        fprintf(stderr, "Could not compile regex\n");
        return 1;
    }

    // Execute the regular expression
    reti = regexec(&regex, string, 0, NULL, 0);
    if (!reti) {
        printf("Match found!\n");
    } else if (reti == REG_NOMATCH) {
        printf("No match found.\n");
    } else {
        char msgbuf[100];
        regerror(reti, &regex, msgbuf, sizeof(msgbuf));
        fprintf(stderr, "Regex match failed: %s\n", msgbuf);
        return 1;
    }

    // Free compiled regular expression
    regfree(&regex);

    return 0;
}
```

- regcomp(&regex, pattern, 0);: Compiles the regex pattern.
- regexec(&regex, string, 0, NULL, 0);: Executes the regex on the given string.
- regfree(&regex);: Frees the memory allocated to the compiled regex.
