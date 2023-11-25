## Lesson 3 exercises - strings

### 3a. Create the text my name is as a string

`'My name is: '`

### 3b. Create your name as a string

`'1337'`

### 3c. Using concatenation, add the 2 strings from 3a and 3b together to create the text: 'My name is: _ (replace — with your name).

`'My name is:' + '1337'`

### 3d. At a restaurant, you order 1 coffee ($5) and 1 bagel ($3). Using math, calculate the total cost, and using concatenation, create the text: 'Total cost: $_' (replace — with the total you calculated).   

`'Total cost: $' + (5 + 3)`

### 3e. Do the same thing as 3d, but use a template string and interpolation.   
``` `Total cost: $${5 + 3}` ```

### 3f. Display the text from 3e in a popup using alert...);
```alert(`Total cost: $${5+3}`)```

### 3g. You order 1 coffee ($5.99) and 1 bagel ($2.95). Using math, calculate the total cost, and using concatenation, create the text: 'Total cost: $ ' (hint: calculate in cents to avoid inaccuracies)

`'Total cost: $' + (599 + 295)/100`

### 3h. Do the same thing as 3g, but use a template string and interpolation.

`Total cost: $${(599+295)/100}`

### 3i. Display the text from 3h in a popup.

```alert (`Total cost: $${(599+295)/100}`)```

### 3j. Using a multi-line string, create the text from 3h and add a line of text underneath: 'Thank you, come again!'. Display both lines in a popup.

alert(`Total cost: $${(599+295)/100}\nThank you, come again!`)

## Challenge Exercises Setup: in the Amazon project, update the cart to 2 basketballs ($20.95 each) with $4.99 shipping, and 2 t-shirts ($7.99 each) with $4.99 shipping.
<img width="531" alt="image" src="https://github.com/1337encrypted/zet/assets/46808309/da9f59a5-86fb-4ac9-aea6-509deb69a2d0">

