<h1 align="center"><a href="https://www.youtube.com/watch?v=fzZTvLmmTzM" target="_blank">CSS UNITS</a></h1>

#### Table of Contents

- [Intro](#intro)
- [px](#px)
- [em](#em)
- [rem](#rem)
- [vw and vh](#vw-vh)
- [ch](#ch)

## Intro

- 16 pixels is the default font size on all the popular browsers

## px

- The pixel unit is the most complicated unit of all the css units

- The image below illustrates the effect of viewing distance on the size of a reference pixel: a reading distance of 71 cm (28 inches) results in a reference pixel of 0.26 mm, while a reading distance of 3.5 m (12 feet) results in a reference pixel of 1.3 mm.

![pixel-image](https://www.w3.org/TR/css-values-3/images/pixel1.png)


- **In conslusion**    
The px unit is a measurement of length that is relative to the expected viewing distance of the device being used.

- Avoid using the px for font sizes as hypotetically 2% of the population changes their font sizes for accessibility reasons and using px unit keeps the size fixed on the browser

## em

- em is always relative to the font size its assigned to, dont confuse it with the font-size property.
- if em is assigned to a font size property then it is relative to the parent font size, if it cannot find there then it keeps checking parents parent element untill it reaches the html element and defaults to 16px.

## rem

- rem is similar to rem, instead of being relative to the font size of the parent its relative to the font size of the root element.
- Therefore its relative to 16px which is default for the html element

- rem should be used with paddings, margins and borders, for example this keeps the padding always relative to the font size of the button.

```
.btn {
    background-color:red;
    color: white;
    font-size: 1.5rem;
    padding: 1em;
}
```

## vw-vh

- Percentages are always relative to their parent, if you dont want them to be relative to their parent element then use the vw and vh unit.

## ch

- The ch unit is used to define the max character length, so that a paragraph can have atmost certain number of characters in it.

- for example max-width: 60ch; allows the width to be 60 characters to fit in a line.