# Lesson 8 Objects

1. Objects
2. Nested Objects
3. Functions inside Objects
4. Built-in Objects
5. Auto-Boxing
6. Objects as References
7. Shortcuts for objects
  7.1 Destructuring property
  7.2 Shorthand property
  7.3 Shorthand method

## Objects

- Objects group related values together.
- Objects consists of property-value pair. For example:

syntax:

Dot notation

```
  const product = {
      name: 'socks',
      price: 1090
  };
```

square bracket notation

```
  const product = {
      ['name']: 'socks',
      ['price']: 1090,
      'quantity': 0       /*Note that [] are optional inside object/
  };
```

### Accessing object values
1. Dot notation .
2. Square notation []

- To access the elements use the dot (.) operator

```
  console.log(product.name);
  console.log(product.price);
```

- To access the elements using square notation
- square bracket notation is used to access objects names which contain a -, as JS treates - as a minus symbol and tries subtracting them.

```
  console.log(product['name']);
  console.log(product['price']);
  console.log(product['delivery-time']);
```

- If we try accessing values which are not a memeber of the objects, it will return a `undefined` value

### Add new property

`poduct.newProperty = true;`

### Delete a property from object

`delete product.newproperty;`

## Nested objects

- Objects within objects are nested objects

syntax

```
  const product2 = {
    name: 'shirt', 
    'delivery-time': '1 day',
    rating: {                       /*Nested object*/
      starts: 4.5,
      count: 87
    }
  }
```

### Acess nested objects

```
  console.log(product2.rating.starts);
  console.log(product2.rating.count);
```

## Functions inside objects

```
  const product2 = {
    name: 'shirt', 
    'delivery-time': '1 day',
    rating: {                       /*Nested object*/
      starts: 4.5,
      count: 87
    }

    function displayItems(){
      console.log(name);
      console.log(delivery-time);
      console.log(rating.starts);
      console.log(rating.count);
    }
  }
```

## Built-in Objects

1. JSON Built-in Object
2. localStoage

### JSON Built-in Object

- helps us work with JSON objects

#### Methods

1. JSON.stringify(parameter);   // Converts objects to JSON strings
2. JSON.parse(jsonString);      // Converts JSON string into JS object

### JSON localStorage

- localStorage only supports strings

### Methods

1. localStorage.setItem('message', 'messageContent');    /* This stores hello inside message  */
2. localStorage.getItem('message');     /*This method gets back the value from localStorage. */


### Example

- Note that score is an object having multiple values inside it

Store the strings using locacalStorage.setItem()

```
  localStorage.setItem('score', JSON.stringify(score));
```

Retrive the items using localStorage.getItem()

```
  const score = JSON.parse(localStorage.getItem('score'));
```

## Auto-boxing

- Javascript automatically abstracts variables according to their types and allows pre-defined inbuilt properties to be used with it.


```
  console.log('Hello'.length);
  console.log('Hello'.toUpperCase());
```

## Objects as References

```
  const object1 = {
    message: 'hello'
  }

  const object2 = object1;    /* Object2 points to the same location as object1 */
```

## Shortcuts for objects

### Destructuring property

Lets consider an object with multiple values

```
  const object = {
    message: 'Good job!',
    price: 799
  };
```

```
  const message = object.message;

  //is same as

  const {message} = object;
```

**- To access multiple values**

```
  const message = object.message;
  const price = object.price;

  //is same as

  const {message, price} = object;
```

### Shorthand property

- If the property and value are same then the shorthand syntax can be followed as follows

```
  const message = 'Good job!';

  const object = {
    message: message
  }

  //This can be written as

    const message = 'Good job!';

    const object = {
    message
  }  
```

### Shorthand method


```
  const object = {
    message,

    method: function function1(){
      console.log('method');
    }

    //The method can be written as

    method(){
      console.log('method');
    }
  };

  object.method();
  ```