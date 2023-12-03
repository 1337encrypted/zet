<h1 align="center"><a href="https://www.youtube.com/watch?v=phWxA89Dy94">FLEXBOX</a></h1>

### Contents

- These flexbox properties apply on the container and not the direct children

1. [flex-direction](#flex-direction)
2. [justify-content](#justify-content)
3. [align-items](#align-items)
4. [flex-wrap](#flex-wrap)
5. [gap](#gap)

- These flexbox properties apply on direct children of the container.

6. [flex-grow](#flex-grow) 
7. [flex-shrink](#flex-shrink) 
8. [flex-basis](#flex-basis) 
9. [shorthand notation](#shorthand-notation)

## flex-direction

- By default the flex direction is horizontal
```
.container {
  display: flex;
  flex-direction:row;
}
```

<img width="300" alt="flex-direction-row" src="https://github.com/1337encrypted/zet/assets/46808309/de2e1c50-60c5-4a9e-bf09-e5ece237bf49">

```
.container {
  display: flex;
  flex-direction: column;
}
```

 <img width="300" alt="flex-direction-column" src="https://github.com/1337encrypted/zet/assets/46808309/16dc334e-4f0a-4179-9027-30b2f598f57d">


## justify-content

- justify-content is used to align content on the main axis
- [flex-start](#flex-start)
- [flex-end](#flex-end)
- [center](#center)
- [space-between](#space-between)
- [space-around](#space-around)
- [space-evenly](#space-evenly)

---

### flex-start

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: flex-start;
}
```

<img width="300" alt="flex-direction-row" src="https://github.com/1337encrypted/zet/assets/46808309/27577f88-1269-4b9d-b406-dfb50aef10f8">

### flex-end

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: flex-end;
}
```

<img width="300" alt="justify-content-flex-end" src="https://github.com/1337encrypted/zet/assets/46808309/7c0cfcc2-c169-44a2-97fc-c3fc1718347e">

### center

 ``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: center;
}
```

<img width="300" alt="justify-content-center" src="https://github.com/1337encrypted/zet/assets/46808309/cc3d51d2-048b-4cd1-8746-87fe18f6e8ef">

### space-between

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-between;
}
```

<img width="300" alt="justify-content-space-between" src="https://github.com/1337encrypted/zet/assets/46808309/84d58244-d4ee-4716-8249-c6a20f28f249">

### space-around

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-around;
}
```

<img width="300" alt="justify-content-space-around" src="https://github.com/1337encrypted/zet/assets/46808309/8138fe6c-391c-4f1d-9a17-6a0235a004ec">

### space-evenly

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-evenly;
}
```

<img width="300" alt="justify-content-space-evenly" src="https://github.com/1337encrypted/zet/assets/46808309/8a3eecb9-ce07-4c13-9dd4-5b52c4a38963">

## align-items

- Aligning items on the cross axis

- [flex-start](#flex-start)
- [flex-end](#flex-end)
- [center](#center)
- [basline](#basline)

### flex-start

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-evenly;
  align-items: flex-start;
}
```

![](align-items-flex-start.png)

### flex-end

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-evenly;
  align-items: flex-end;
}
```

![](align-items-flex-end.png)

### center

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-evenly;
  align-items: center;
}
```

![](align-items-center.png)

### baseline

- when font of item 1 increases the baselines of all the 3 items are same.

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-evenly;
  align-items: baseline;
}

.item-1{
  font-size: 1.5rem;
}
```

![](align-items-baseline.png)

## flex-wrap

- [nowrap](#flex-wrap)
- [wrap](#wrap)

### nowrap

- When the number of items increase inside a div they will squeeze and cram to fit inside the row

![](flex-wrap.png)

### wrap

- To solve this we can enable `flex-wrap` its set to `nowrap`.

```
.container {
  display: flex;
/* flex-direction:row; */
/* justify-content: space-evenly; */
/* align-items: baseline; */
  flex-wrap: wrap;
}
```

![](flex-wrap-wrap.png)

## align-content

- [flex-start](#flex-start)
- [flex-end](#flex-end)
- [center](#center)
- [basline](#basline)

- When `flex-wrap: wrap` is set and items are wrapping a new property is enabled that is `align-content`, 
- The possible properties are same as `justify-content`.

### flex-start

```
.container {
  display: flex;
/* flex-direction:row; */
/* justify-content: space-evenly; */
/* align-items: baseline; */
  flex-wrap: wrap;
  align-content: flex-start;
}
```

![](align-content-flex-start.png)

### flex-end

```
.container {
  display: flex;
/* flex-direction:row; */
/* justify-content: space-evenly; */
/* align-items: baseline; */
  flex-wrap: wrap;
  align-content: flex-end;
}
```

![](align-content-flex-end.png)

### center

```
.container {
  display: flex;
/* flex-direction:row; */
/* justify-content: space-evenly; */
/* align-items: baseline; */
  flex-wrap: wrap;
  align-content: center;
}
```

![](align-content-center.png)

### center

```
.container {
  display: flex;
/* flex-direction:row; */
/* justify-content: space-evenly; */
/* align-items: baseline; */
  flex-wrap: wrap;
  align-content: center;
}
```

![](align-content-center.png)

### space-around

```
.container {
  display: flex;
/* flex-direction:row; */
/* justify-content: space-evenly; */
/* align-items: baseline; */
  flex-wrap: wrap;
  align-content: space-around;
}
```

![](align-content-space-around.png)

### space-between

```
.container {
  display: flex;
/* flex-direction:row; */
/* justify-content: space-evenly; */
/* align-items: baseline; */
  flex-wrap: wrap;
  align-content: space-between;
}
```

![](align-content-space-between.png)

### space-evenly

```
.container {
  display: flex;
/* flex-direction:row; */
/* justify-content: space-evenly; */
/* align-items: baseline; */
  flex-wrap: wrap;
  align-content: space-evenly;
}
```

![](align-content-space-evenly.png)

## gap

- The gap property is used to add gap between items.

```
.container {
  display: flex;
/* flex-direction:row; */
/* justify-content: space-evenly; */
/* align-items: baseline; */
  flex-wrap: wrap;
  align-content: flex-start;
  gap: 1em;
}
```

![](gap.png)

## flex-grow

- The parent div must be a flexbox for this to work
- flexgrow takes a unitless value and sets it as a propotion to the item

#### Example 1

```
.container {
  display: flex;
  /* flex-direction:row;*/
  /*justify-content:flex-start;*/
  /* align-items:center; */
  /*flex-wrap: wrap;*/
  /*align-content: flex-start;*/
  /*gap: 1em;*/
}

.item-3{
  flex-grow: 1;
}
```

![](flex-grow.png)

#### Example 2

```
.container {
  display: flex;
  /* flex-direction:row;*/
  /* justify-content:space-between; */
  /* align-items:center; */
  /*flex-wrap: wrap;*/
  /*align-content: flex-start;*/
  /* gap: 1em;  */
}

.item-1{
  flex-grow: 1;
}

.item-2{
  flex-grow: 2;
}
.item-3{
  flex-grow: 3;
}
```

![](flex-grow-2.png)

## flex-shrink

- `flex-shrink` also takes a unitless value
- It defines how fast one item shrink in comparison to the others
- If we set `flex-shrink: 0` it will refuse to shrink.

```
.container {
  display: flex;
  /* flex-direction:row;*/
  /* justify-content:space-between; */
  /* align-items:center; */
  /*flex-wrap: wrap;*/
  /*align-content: flex-start;*/
  /* gap: 1em;  */
}

.item-2{
  flex-grow: 1;
  flex-shrink: 5; /*This indicates that item 1 will shrink 5 times faster compared to other item when the screen is resized*/
}
```

![](flex-shrink.mov)

## flex-basis

- `flex-basis` defines the size of an item before the remaining space is distributed.

```
.container {
  display: flex;
  /* flex-direction:row;*/
  /* justify-content:space-between; */
  /* align-items:center; */
  /*flex-wrap: wrap;*/
  /*align-content: flex-start;*/
  /* gap: 1em;  */
}

.item-1{
  /*flex-grow: 1; */
  /*flex-shrink: 5; */
  flex-basis: 300px;
}
```

![](flex-basis-300px.png)

- setting `flex-basis: 0 ` will shrink the item to the smallest possible size limit.

![](flex-basis-300px.png)

### Shorthand Notation

- syntax 
`flex: flex-grow flex-shrink flex-basis`

```
.container {
  display: flex;
  /* flex-direction:row;*/
  /* justify-content:space-between; */
  /* align-items:center; */
  /*flex-wrap: wrap;*/
  /*align-content: flex-start;*/
  /* gap: 1em;  */
}

.item-1{
  /*flex-grow: 1; */
  /*flex-shrink: 5; */
  /*flex-basis: 300px;*/
  flex: 1;  /*The other 2 values are selected intelligently for you*/
}
```