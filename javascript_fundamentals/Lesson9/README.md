# Lesson 9

## Document Object Model (DOM)

- Every HTML element has a property called innerHTML which controls the HTML inside the element.
- HTML elements are javascript objects.
- Values that we get from the DOM are by default strings, you need to explictly convert them to numbers.

### document.querySelector()

- This method selects the first element on the page.

For example

```
  document.querySelector('button).innerHTML = 'Changed'
```

### Properties
1. innerHTML - content inside the element
2. innerText - content without spaced inside the element
3. value - used for input element text boxes placeholders.

### onkeydown keyword

```
  <input type="text" placeholder="Cost of order" class="js-cost-input" onkeydown="
    console.log(event);

    if(event === 'Enter){
      //Do something
    }
  ">
```

- This is an event which is triggered upon pressing a button on the keyboard
- We can use it to track if Enter is being pressed or not.

## window object

- The window object is implicit and is being appended to all the elements implicitly.

For example

```
  window.document                   //Manipulate the document model
  window.console.log('wiindow');    //Manipulate the console
  window.alert;                     //Manipulate the alert window
```