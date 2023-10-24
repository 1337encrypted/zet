#!/usr/bin/glow

# Wildcards

| Wildcard | Meaning |
| :---: | :--- |
| * |  Matches any characters |
| ? | Matches any single character |
| [characters] | Matches any character that is a member of the set characters |
| [!characters] | Matches any character that is not a member of the set characters |
| [[:class:]] | Matches any character that is a member of the specified class |

<h1 align=center> Character class </h1>

| Character Class | Meaning |
| :---: | :--- |
| [:alnum:] | Matches any alphanumeric character |
| [:alpha:] | Matches any alphabetic character |
| [:digit:] | Matches any numeral |
| [:lower:] | Matches any lowercase letter |
| [:upper:] | Matches any uppercase letter |

<h2 align=center> Wildcard Examples </h2>

| Pattern | Matches |
| :--- | :--- |
| * | All files |
| g* | Any file beginning with “g” |
| b*.txt | Any file beginning with “b” followed by  any characters and ending with “.txt” | 
| Data??? | Any file beginning with "Data" followed by exact 3 characters |
| [abc]* | Any file beginning with either "a", a "b" or a "c" |
| BACKUP.[0-9][0-9][0-9] | Any file beginning with BACKUP followed by 3 numberals |
| [[:upper:]]* | Any file beginning with a uppercase letter |
| [![:digit:]]* | Any file not beginning with a numeral |
| \*[[:lower:]123] | Any file ending with a lowercase letter or the numerals "1", "2" or "3" |

`#wildcards` `#patternmatching` `#charaterclass`

#uid 20221112190400
