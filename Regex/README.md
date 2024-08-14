# Regular Expressions (RegEx) Reference

## 1. Literals
Literals match the exact characters in a string. For example, the literal `abc` matches the substring "abc" in "abcdef".

## 2. Metacharacters
Metacharacters are special symbols with unique meanings in regular expressions.

| Metacharacter | Description |
| ------------- | ----------- |
| `.`           | Matches any single character except newline. |
| `^`           | Matches the start of a string. |
| `$`           | Matches the end of a string. |
| `[]`          | Character class; matches any single character inside the brackets. |
| `|`           | Alternation; matches either the expression before or after the `|`. |
| `\`           | Escape character; treats the next character as a literal. |
| `()`          | Groups expressions together. |
| `{}`          | Defines a quantifier for the preceding element. |

## 3. Quantifiers
Quantifiers specify how many instances of the preceding element must be present in the input for a match.

| Quantifier | Description |
| ---------- | ----------- |
| `*`        | Matches 0 or more occurrences of the preceding element. |
| `+`        | Matches 1 or more occurrences. |
| `?`        | Matches 0 or 1 occurrence. |
| `{n}`      | Matches exactly `n` occurrences. |
| `{n,}`     | Matches `n` or more occurrences. |
| `{n,m}`    | Matches between `n` and `m` occurrences. |

## 4. Character Classes
Character classes allow matching any one of several characters.

| Character Class | Description |
| --------------- | ----------- |
| `[abc]`         | Matches any one of `a`, `b`, or `c`. |
| `[a-z]`         | Matches any lowercase letter from `a` to `z`. |
| `[A-Z]`         | Matches any uppercase letter from `A` to `Z`. |
| `[0-9]`         | Matches any digit from `0` to `9`. |
| `[^abc]`        | Matches any character except `a`, `b`, or `c`. |

## 5. Predefined Character Classes
Predefined character classes match common sets of characters.

| Predefined Class | Description |
| ---------------- | ----------- |
| `\d`             | Matches any digit (`[0-9]`). |
| `\D`             | Matches any non-digit. |
| `\w`             | Matches any word character (alphanumeric and underscore, `[a-zA-Z0-9_]`). |
| `\W`             | Matches any non-word character. |
| `\s`             | Matches any whitespace character (spaces, tabs, newlines). |
| `\S`             | Matches any non-whitespace character. |

## 6. Anchors
Anchors assert positions in the string where a match can occur.

| Anchor | Description |
| ------ | ----------- |
| `^`    | Asserts the position at the start of a string. |
| `$`    | Asserts the position at the end of a string. |
| `\b`   | Asserts a word boundary. |
| `\B`   | Asserts a non-word boundary. |

## 7. Groups and Capturing
Groups allow you to combine parts of a pattern, and capturing groups save the matched substring for later use.

| Group | Description |
| ----- | ----------- |
| `()`  | Groups expressions together. Captures the matched text for backreferences or replacements. |
| `(?:...)` | Non-capturing group; groups expressions without capturing them. |

## 8. Lookahead and Lookbehind
Lookahead and lookbehind assertions match a group only if it's followed or preceded by another pattern.

| Assertion | Description |
| --------- | ----------- |
| `(?=...)` | Lookahead; matches a group if it is followed by the specified pattern. |
| `(?!...)` | Negative lookahead; matches if the specified pattern does not follow. |
| `(?<=...)` | Lookbehind; matches a group if it is preceded by the specified pattern. |
| `(?<!...)` | Negative lookbehind; matches if the specified pattern does not precede. |

## 9. Examples

### Matching an Email Address
```regex
^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$
```

### Matching an IPv4 Address
```regex
\b\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}\b
```

### Matching a date (dd/mm/yyyy)
```regex
\b\d{2}/\d{2}/\d{4}\b
```

## Matching a register pattern (FSR_SR[0].ERRMODE.[5])
```regex
^(?!\d)[a-zA-Z_][a-zA-Z0-9_]{0,15}(\[\d+\])?(\.(?!\d)[a-zA-Z_][a-zA-Z0-9_]{0,15}(\[\d+\])?)?$
```
