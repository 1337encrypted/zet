# <a href="https://www.youtube.com/watch?v=nSst4-WbEZk" target="_blank">THE BOX MODEL IN CSS</a>

#### Table of Contents

- [Box Model](#box-model)
- [Div Blocks](#div-blocks)
- [Width Height](#width-height)
- [Padding](#padding)
- [Border](#border)
- [Margin](#margin)
- [CSS Preset for Margin and Padding](#css-preset-margin-padding)
- [Box Sizing](#box-sizing)
  - [Content box](#content-box)
  - [Border box](#border-box)

## Box-Model

The box model consists of margin, border, padding and content.

<!--![box-model](../../.assets/box-model.jpeg)-->
![box-model](https://github.com/1337encrypted/zet/assets/46808309/53de2975-413f-4b91-bd74-e8e0e15b13c7)

## Div-Blocks

- Div elemnts are block length elements and contain the entire width of the view port

<!--![div-elements](div-elements.png)-->
![div-elements](https://github.com/1337encrypted/zet/assets/46808309/29c508ce-269d-440e-975a-ddde0e6d7e3e)


- The size of the div block consists of the **border**, **padding** and the **content** inside the div
- Only the margin is space outside of the div

### Width-Height

- **The height and  width is defined only for the content and not the div**

```
  .box{
    font-size: 2rem;
    background-color: pink;
    /* BOX Model*/
    width: 300px;
    height: 100px;
  }
```
<!--![div-element-width-height-1](div-element-width-height-1.png)-->
![div-element-width-height-1](https://github.com/1337encrypted/zet/assets/46808309/195819c8-1075-4e9a-9938-cc7e67978b51)


### Padding

- We can add padding for the inner content inside
- Shorthand property for padding - `padding: 32px 64px 100px 10px;` The values are assigned from the top clockwise rotation.
- 1 value will pad all four sides
- 2 values will assign the first value to top-bottom and second value to left-right
- 3 values will assign the first value to top, second value to left-right and third value to bottom.

```
  .box{
    font-size: 2rem;
    background-color: pink;
    /* BOX Model*/
    width: 300px;
    height: 100px;
    padding: 32px 64px 100px 10px;
  }
```

<!--![div-elements-padding](div-elements-padding.png)-->
![div-elements-padding](https://github.com/1337encrypted/zet/assets/46808309/b9508bc0-4814-4bf5-92d9-fe870f21c1d2)


### Border

- border is the boundry which encapsulates the content and the padding inside it.
- `border: thickness type color;`
- `border: 5px solid black;`  

```
  .box{
    font-size: 2rem;
    background-color: pink;
    /* BOX Model*/
    width: 300px;
    height: 100px;
    padding: 32px 64px 100px 10px;
    border: 5px solid black;
  }
```

<!--![div-elements-border](div-elements-border.png)-->
![div-elements-border](https://github.com/1337encrypted/zet/assets/46808309/28a3ff82-5774-45c7-b409-fbe96bcd0a60)

- There are 10 different border styles to use from

<!--![div-elements-border-1](div-elements-border-1.png)-->
![div-elements-border-1](https://github.com/1337encrypted/zet/assets/46808309/d04376ed-923e-494f-84f1-f859c0b12f05)

### Margin

- Margin is the spacing outside the border 
- Shorthand property for margin - `margin: 20px`
- the values are same as padding values in clockwise direction


```
  .box{
    font-size: 2rem;
    background-color: pink;
    /* BOX Model*/
    width: 300px;
    height: 100px;
    padding: 32px 64px 100px 10px;
    border: 5px solid black;
    margin: 20px 40px 100px 500px;
  }
```
<!--![div-element-margin](div-element-margin.png)-->
![div-element-margin](https://github.com/1337encrypted/zet/assets/46808309/0bec43b0-8176-4c40-a7fa-7b45a2186346)

<!--![div-element-margin-1](div-element-margin-1.png)![div-element-margin]-->
![div-element-margin-1](https://github.com/1337encrypted/zet/assets/46808309/48db240b-2e6c-4c56-be4f-051295f338da)


### Css-Preset-Margin-Padding

- By default in CSS a margin of 8px is assigned by the user agent stylesheet if you do not specifiy any margin or a margin of 0px.
- To fix this we can add a CSS preset on top of the page for both margin and padding

```
  *{
    margin: 0;
    padding: 0;
  }
```

<!--![div-element-CSS-preset](div-element-css-preset.png)-->
![div-element-css-preset](https://github.com/1337encrypted/zet/assets/46808309/7aba8016-8079-441f-9ed7-eab64a340d23)

### Box-Sizing

1. **content-box** - widht-height define only the **content**.
2. **border-box** - width-height define **border, padding** and **content**.

#### content-box

- By default all boxes are set to content-box.
- This defines the width-height size for content inside the div.

```
  box{
      font-size: 2rem;
      background-color: pink;
      /* BOX Model*/
      width: 300px;
      height: 100px;
      box-sizing: content-box;
  }
```

<!--![div-element-content-box](div-element-content-box.png)-->
![div-element-content-box](https://github.com/1337encrypted/zet/assets/46808309/af008889-06b3-4195-9dd8-81d81860ee9d)

#### border-box

- The width-height is defined for the whole div when border-box is enabled.

```
  box{
      font-size: 2rem;
      background-color: pink;
      /* BOX Model*/
      width: 300px;
      height: 100px;
      box-sizing: border-box;
  }
```

<!--![div-element-border-box](div-element-border-box.png)-->
![div-element-border-box](https://github.com/1337encrypted/zet/assets/46808309/50db92af-9758-4ea3-ab9a-1750efcbc1da)

we can calculate this by       
width = 258+16+16+5+5 = 300px     
height = 58+16+16+5+5 = 100px    

- The proper way of adding border box to all the elements is not adding it to the CSS preset, you can achieve it this way

```
  *,
  *::before,
  *::after{
    box-sizing: border-box;
  }
```
