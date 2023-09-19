
# Basic Syntax

These are the elements outlined in John Gruber’s original design document. All Markdown applications support these elements.

| Element | Markdown Syntax |
| ------- | --------------- |
|[Headings](#headings)|	\# H1 <br/> \#\# H2 <br/> \#\#\# H3|
|[Bold](#bold)|	\*\*bold text\*\*|
|[Italic](#italic)|	\*italicized text\*|
|[Bold Italic](#bold-italic)| \*\*\*Bold Italic\*\*\* |
|[Blockquote](#blockquotes)|	\> blockquote|
|[Ordered List](#ordered-list)|	1. First item <br/> 2. Second item <br/> 3. Third item|
|[Unordered List](#unordered-list)|	- First item <br/> - Second item <br/> - Third item|
|[Code](#code)|	\`code\`|
|[Horizontal Rule](#horizontal-rule)|	--- |
|[Link](#link)|	\[title](https://www.example.com)|
|[Image](#images)|	\![alt text](image.jpg)|

# Extended Syntax

These elements extend the basic syntax by adding additional features. Not all Markdown applications support these elements.
<table>
  <tr><th>Element</th> <th>Markdown Syntax</th></tr>
  <tr><td><a href="#tables">Table</a></td> 
    <td>| Syntax | Description |<br/>| ----------- | ----------- |<br/>| Header | Title |<br/>| Paragraph | Text |</td></tr>

  <tr><td><a href="#Latex">Latex fonts</a></td> 
    <td> $Math$ </td></tr>

  <tr><td><a href="#fenced-code-block">Fenced Code Block</a></td> 
    <td> ```<br/>{<br/>"firstName": "John",<br/>"lastName": "Smith",<br/>"age": 25<br/>}<br/>```</td></tr> 
  <tr><td><a href="#footnote">Footnote</a></td> <td>Here's a sentence with a footnote. [^1]<br/><br/>[^1]: This is the footnote.</td></tr> 
  <tr><td><a href="#heading-id">Heading ID</a></td> <td>### My Great Heading {#custom-id}</td></tr> 
  <tr><td><a href="#definition-list">Definition List</a></td> <td>term<br/>: definition</td></tr> 
  <tr><td><a href="#strikethrough">Strikethrough</a></td> <td>&lt;s&gt;The world is flat.&lt;/s&gt;</td></tr> 
  <tr><td><a href="#task-list">Task List</a></td> <td>- [x] Write the press release<br/>- [ ] Update the website<br/>- [ ] Contact the media</td></tr> 
  <tr><td><a href="#emoji">Emoji</a></td> <td>That is so funny! :joy:</td></tr> 
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

# horizontal rule

`---`

---

`***`

***

# Link

[Github profile](https://github.com/1337encrypted)    
```[Github profile](https://github.com/1337encrypted)```

---

# Images


---

# Tables
<!-- <h1 id="Tables">Tables</h1> -->

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

# $\mathnormal{Latex}$ $\mathnormal{fonts}$

`$\mathnormal{*}$` $\mathnormal{Math}$ $\mathnormal{normal}$

`$\mathup{*}$` $\mathup{Upright}$ $\mathup{serif}$

`$\mathbfup{*}$` $\mathbfup{Bold}$ $\mathbfup{upright}$ $\mathbfup{serif}$

`$\mathit{*}$` $\mathit{Italic}$ $\mathit{serif}$

`$\mathbfit{*}$` $\mathbfit{Bold}$ $\mathbfit{italic}$ $\mathbfit{serif}$

`$\mathsfup{*}$` $\mathsfup{Upright}$ $\mathsfup{sans-serif}$

`$\mathsfit{*}$` $\mathsfit{Italic}$ $\mathsfit{sans-serif}$

`$\mathbfsfup{*}$` $\mathsfit{Bold}$ $\mathsfit{upright}$ $\mathsfit{sans-serif}$

`$\mathbfsfit¹{*}$` $\mathbfsfit¹{Bold}$ $\mathbfsfit¹{italic}$ $\mathbfsfit¹{sans-serif}$

`$\mathtt{*}$` $\mathtt{Typewriter}$

`$\mathbb{*}$` $\mathbb{Blackboard}$ $\mathbb{bold}$

<!--`$\mathbbit{*}$` $\mathbbit{Blackboard}$ $\mathbbit{bold}$ $\mathbbit{italic}$ -->

`$\mathscr{*}$` $\mathscr{Script}$

`$\mathbfscr{*}$` $\mathbfscr{Bold}$ $\mathbfscr{script²}$

`$\mathcal{*}$` $\mathcal{Calligraphic}$

`$\mathbfcal{*}$` $\mathbfcal{Bold}$ $\mathbfcal{calligraphic²}$

`$\mathfrak{*}$` $\mathbfcal{Fraktur}$

`$\mathbffrak{*}$` $\mathbffrak{Bold}$ $\mathbffrak{Fraktur²}$    

---

# $\text{miscellaneous}$

`$\text{*}$` $\text{Text}$

**Fractions:**

Fraction: `$\frac{3}{4}$`: $\frac{3}{4}$  
Binomial Coefficient: `${n \choose k}$`: ${n \choose k}$  

**Mathematical Symbols:**

Square Root: `$\sqrt{x}$`: $\sqrt{x}$  
Cubed Root: `$\sqrt[3]{x}$`: $\sqrt[3]{x}$  
Infinity: `$\infty$`: $\infty$  
Infinity (Limit): `$\lim_{x\to\infty}$`: $\lim_{x\to\infty}$  
Summation: `$\sum_{i=1}^{n}$`: $\sum_{i=1}^{n}$ 

## $\text{Symbols}$

**Greek Letters:**

Alpha: `$\alpha$`: $\alpha$  
Beta: `$\beta$`: $\beta$  
Gamma: `$\gamma$`: $\gamma$  
Delta: `$\delta$`: $\delta$  
Omega: `$\omega$`: $\omega$  

**Mathematical Operators:**

Multiplication: `$\times$`: $\times$  
Division: `$\div$`: $\div$  
Plus-Minus: `$\pm$`: $\pm$  
Infinity: `$\infty$`: $\infty$  
Partial Differential: `$\partial$`: $\partial$   
Propotionality: `$\propto$`: $\propto$  

**Arrows:**

Right Arrow: `$\rightarrow$`: $\rightarrow$  
Left Arrow: `$\leftarrow$`: $\leftarrow$  
Up Arrow: `$\uparrow$`: $\uparrow$  
Down Arrow: `$\downarrow$`: $\downarrow$  
Left-Right Arrow: `$\leftrightarrow$`: $\leftrightarrow$  

**Set Notation:**

Subset: `$\subset$`: $\subset$  
Superset: `$\supset$`: $\supset$  
Empty Set: `$\emptyset$`: $\emptyset$  
Element of: `$\in$`: $\in$  

**Logic Symbols:**

Negation: `$\neg$`: $\neg$  
Logical OR: `$\lor$`: $\lor$  
Logical AND: `$\land$`: $\land$  
Implies: `$\implies$`: $\implies$  
If and Only If: `$\iff$`: $\iff$  

**Geometry:**

Triangle: `$\triangle$`: $\triangle$  
Square: `$\square$`: $\square$  
Circle: `$\circ$`: $\circ$  
Angle: `$\angle$`: $\angle$  
Perpendicular: `$\perp$`: $\perp$  

**Currency Symbols:**

Dollar Sign: `$$`: $  
Euro: `€`: €  
Yen: `¥`: ¥  
Pound Sterling: `£`: £  
Russian Ruble: `₽`: ₽  

**Dots:**

Ellipsis (Three Dots): `$\ldots$`: $\ldots$  
Centered Ellipsis (Three Dots): `$\cdots$`: $\cdots$  
Vertical Ellipsis: `$\vdots$`: $\vdots$  
Diagonal Ellipsis: `$\ddots$`: $\ddots$  

**Other Miscellaneous Symbols:**

Degree Symbol: `$^\circ$`: $^\circ$  
Section Symbol: `§`: §  
Copyright Symbol: `©`: ©  
Registered Trademark Symbol: `®`: ®  
Trademark Symbol: `™`: ™ 

# strikethrough

<s>This is a strikethough.</s>

`<s>This is a strikethough.</s>`

`<strike>This is a strikethough.</strike>`

# Task List

- [x] #739
- [ ] Add delight to the experience when all tasks are complete :tada:

` - [x] Marked`   

` - [ ] Unmarked`     

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
