
# Basic Syntax

These are the elements outlined in John Gruber’s original design document. All Markdown applications support these elements.

| Element | Markdown Syntax |
| ------- | --------------- |
| Heading |	\# H1 <br/> \#\# H2 <br/> \#\#\# H3|
|Bold|	\*\*bold text\*\*|
|Italic|	\*italicized text\*|
|Bold Italic| \*\*\*Bold Italic\*\*\* |
|Blockquote|	\> blockquote|
|Ordered List|	1. First item <br/> 2. Second item <br/> 3. Third item|
|Unordered List|	- First item <br/> - Second item <br/> - Third item|
|Code|	\`code\`|
|Horizontal Rule|	--- |
|Link|	\[title](https://www.example.com)|
|Image|	\![alt text](image.jpg)|

# Extended Syntax

These elements extend the basic syntax by adding additional features. Not all Markdown applications support these elements.
<table>
  <tr><th>Element</th> <th>Markdown Syntax</th></tr>
  <tr><td>Table</td> <td>| Syntax | Description |<br/>| ----------- | ----------- |<br/>| Header | Title |<br/>| Paragraph | Text |</td></tr>
  <tr><td>Fenced Code Block</td> <td> ```<br/>{<br/>"firstName": "John",<br/>"lastName": "Smith",<br/>"age": 25<br/>}<br/>```</td></tr> 
  <tr><td>Footnote</td> <td>Here's a sentence with a footnote. [^1]<br/><br/>[^1]: This is the footnote.</td></tr> 
  <tr><td>Heading ID</td> <td>### My Great Heading {#custom-id}</td></tr> 
  <tr><td>Definition List</td> <td>term<br/>: definition</td></tr> 
  <tr><td>Strikethrough</td> <td>~~The world is flat.~~</td></tr> 
  <tr><td>Task List</td> <td>- [x] Write the press release<br/>- [ ] Update the website<br/>- [ ] Contact the media</td></tr> 
  <tr><td>Emoji</td> <td>That is so funny! :joy:</td></tr> 
</table>

---

# Headings

# Heading 1
`# Heading 1`

## Heading 2
`## Heading 2`

### Heading 3
`### Heading 3`

#### Heading 4
`#### Heading 4`

##### Heading 5
`##### Heading 5`

###### Heading 6
`###### Heading 6`

---

# Bold

**bold text**   
`**bold text**`   
`__bold text__`    

---

# Italic

*Italic text*   
`*Italic text*`   
`_Italic text_`

---

# **Bold** *Italic*

***Bold Italic text***   
`***Bold Italic text***`   
`___Bold Italic text___`   

---

# Blockquotes

> Blockquotes
> #### We are inside a Blockquotes
>
> - This is an unordered list
> - This is another unordered list.
>
>  *Italic* along with **bold**.
>  
>> Nested blockquote


```
> Blockquotes
> #### We are inside a Blockquotes
>
> - This is an unordered list
> - This is another unordered list.
>
>  *Italic* along with **bold**.
>  
>> Nested blockquote
>
```

---

# Ordered list

```
1. First item
1. Second item
  1. Second item First sub item 
  1. Second item Second sub item
1. Third item
1. Fourth item
```

1. First item
1. Second item
    1. Second item First sub item 
    1. Second item Second sub item
1. Third item
1. Fourth item

---

# Unordered list

```
- First item
- Second item
- Third item
    - Indented item
    - Indented item
- Fourth item
```

- First item
- Second item
- Third item
    - Indented item
    - Indented item
- Fourth item

---

# Code


```
Some code here
```    
\`\`\`
Some code here
\`\`\`   

---

# Link

[Github profile](https://github.com/1337encrypted)    
```[Github profile](https://github.com/1337encrypted)```

---

# Images


---

# Tables

```
| Column1 | Column2 | Column3 |
| :---        |    :----:   |          ---: |
| Left Justified | Center justified | Right justified |

```

| Column1 | Column2 | Column3 |
| :---        |    :----:   |          ---: |
| Left Justified | Center justified | Right justified |
|a|b|c|

---

# Footnote

Here's a simple footnote,[^1] and here's a longer one.[^bignote]

[^1]: This is the first footnote.

[^bignote]: Here's one with multiple paragraphs and code.

    Indent paragraphs to include them in the footnote.

    `{ my code }`

    Add as many paragraphs as you like.
    
```
Here's a simple footnote,[^1] and here's a longer one.[^bignote]

[^1]: This is the first footnote.

[^bignote]: Here's one with multiple paragraphs and code.

    Indent paragraphs to include them in the footnote.

    `{ my code }`

    Add as many paragraphs as you like.
```
