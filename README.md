
# Basic Syntax

These are the elements outlined in John Gruber’s original design document. All Markdown applications support these elements.

 Element                             | Markdown Syntax
-------------------------------------|--------------------------------------------------------------------------------------------
 [Headings](#headings)               | `# H1` <br/> `## H2` <br/> `### H3`
 [Bold](#bold)                       | `**bold text**`
 [Italic](#italic)                   | `*italicized text*`
 [Bold Italic](#bold-italic)         | `***Bold Italic***`
 [Blockquote](#blockquotes)          | `> blockquote`
 [Alerts](#alerts)                   | `> [!NOTE]` <br/> `> [!TIP]` <br/> `> [!IMPORTANT]` <br/> `> [!WARNING]` <br/> `> [!CAUTION]`
 [Ordered List](#ordered-list)       | `1. First item` <br/> `2. Second item` <br/> `3. Third item`
 [Unordered List](#unordered-list)   | `- First item` <br/> `- Second item` <br/> `- Third item`
 [Code](#code)                       | \`code\`
 [Horizontal Rule](#horizontal-rule) | `---`
 [Link](#link)                       | `[title](https://www.example.com)`
 [Image](#images)                    | `![alt text](image.jpg)`

# Extended Syntax

These elements extend the basic syntax by adding additional features. Not all Markdown applications support these elements.

Element                                   | Markdown Syntax 
:--- | :---
[Table](#tables)                          | \| Syntax \| Description \|<br>\| ----------- \| ----------- \|<br>\| Header \| Title \|<br>\| Paragraph \| Text \|  
[Collapsed section](#Collapsed-section)   | <details><summary>collapsed sections</summary> You can add text within a collapsed section.</details> 
[Latex fonts](#latex-fonts)               | `$Math$` 
[Fenced Code Block](#fenced-code-block)   | ```<br>{<br>"firstName": "John",<br>"lastName": "Smith",<br>"age": 25<br>}<br>```
[Heading ID](#heading-id)                 | `### My Great Heading {#custom-id}` 
[Definition List](#definition-list)       | `term`<br>`: definition` 
[Strikethrough](#strikethrough)           | `<s>The world is flat.</s>` 
[Task List](#task-list)                   | `- [x] Write the press release`<br>`- [ ] Update the website`<br>`- [ ] Contact the media` 
[Emoji](#emoji)                           | `That is so funny! :joy:` 
[Mermaid](#mermaid)                       | ````mermaid <br/> graph TD; <br/> A-->B; <br/> A-->C; <br/> B-->D; <br/> C-->D; <br/> ``` 
[Footnote](#footnote)                     | `Here's a sentence with a footnote. [^1]`<br><br>`[^1]: This is the footnote.` 

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

# Alerts

```
> [!NOTE]
> Useful information that users should know, even when skimming content.
```
> [!NOTE]
> Useful information that users should know, even when skimming content.

```
> [!TIP]
> Helpful advice for doing things better or more easily.
```
> [!TIP]
> Helpful advice for doing things better or more easily.

```
> [!IMPORTANT]
> Key information users need to know to achieve their goal.
```
> [!IMPORTANT]
> Key information users need to know to achieve their goal.

```
> [!WARNING]
> Urgent info that needs immediate user attention to avoid problems.
```
> [!WARNING]
> Urgent info that needs immediate user attention to avoid problems.

```
> [!CAUTION]
> Advises about risks or negative outcomes of certain actions.
```
> [!CAUTION]
> Advises about risks or negative outcomes of certain actions.
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
````
```go
fmt.Println("Hello World!")
```    
```` 
```go
fmt.Println("Hello World!")
```  
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
Column1 | Column2 | Column3
:--- | :----: | ---:
Left Justified | Center justified | Right justified
```

Column1 | Column2 | Column3
:--- | :----: | ---:
Left Justified | Center justified | Right justified
a|b|c

---
# Collapsed section

<details>
  
<summary>This is a collapsed sections</summary>

### You can add a header
You can add text within a collapsed section.   
You can add an image or a code block, too.  
```ruby
   puts "Hello World"
```
</details>

# Latex fonts

`$\mathnormal{*}$` $\mathnormal{Math}$ $\mathnormal{normal}$

`$\mathup{*}$` $\mathup{Upright}$ $\mathup{serif}$

`$\mathbfup{*}$` $\mathbfup{Bold}$ $\mathbfup{upright}$ $\mathbfup{serif}$

`$\mathit{*}$` $\mathit{Italic}$ $\mathit{serif}$

`$\mathbfit{*}$` $\mathbfit{Bold}$ $\mathbfit{italic}$ $\mathbfit{serif}$

`$\mathsfup{*}$` $\mathsfup{Upright}$ $\mathsfup{sans-serif}$

`$\mathsfit{*}$` $\mathsfit{Italic}$ $\mathsfit{sans-serif}$

`$\mathbfsfup{*}$` $\mathsfit{Bold}$ $\mathsfit{upright}$ $\mathsfit{sans-serif}$

`$\mathbfsfit{*}$` $\mathbfsfit{Bold}$ $\mathbfsfit{italic}$ $\mathbfsfit{sans-serif}$

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

## Miscellaneous

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

## Symbols

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

---

# strikethrough

<s>This is a strikethough.</s>

`<s>This is a strikethough.</s>`

`<strike>This is a strikethough.</strike>`

---

# Task List

` - [x] Marked`   

` - [ ] Unmarked`   

- [x] #739
- [ ] Add delight to the experience when all tasks are complete :tada:  

---

# Mermaid

````
```mermaid
graph TD;
    A-->B;
    A-->C;
    B-->D;
    C-->D;
```
````
```mermaid
graph TD;
    A-->B;
    A-->C;
    B-->D;
    C-->D;
```
# Footnote

```

Here's a simple footnote,[^1] and here's a longer one.[^bignote]

[^1]: This is the first footnote.

[^bignote]: Here's one with multiple paragraphs and code.

    Indent paragraphs to include them in the footnote.

    `{ my code }`

    Add as many paragraphs as you like.   
    
```

---

Here's a simple footnote,[^1] and here's a longer one.[^bignote]

[^1]: This is the first footnote.

[^bignote]: Here's one with multiple paragraphs and code.

    Indent paragraphs to include them in the footnote.

    `{ my code }`

    Add as many paragraphs as you like.
