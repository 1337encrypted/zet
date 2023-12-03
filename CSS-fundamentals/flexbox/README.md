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

---

## flex-direction

- [flex-direction:row](#flex-direction-row)
- [flex-direction:column](#flex-direction-column)

### flex-direction:row

- By default the flex direction is horizontal
```
.container {
  display: flex;
  flex-direction:row;
}
```

<img width="300" alt="flex-direction-row" src="https://github.com/1337encrypted/zet/assets/46808309/4b068ee4-e866-43ce-a0a0-c652e4b61809">

### flex-direction-column

```
.container {
  display: flex;
  flex-direction: column;
}
```

<img width="300" alt="flex-direction-column" src="https://github.com/1337encrypted/zet/assets/46808309/316c672a-1a9a-45ad-9af3-9a3dc7820b2c">

## justify-content

- justify-content is used to align content on the main axis
- [justify-content:flex-start](#justify-content-flex-start)
- [justify-content:flex-end](#justify-content-flex-end)
- [justify-content:center](#justify-content-center)
- [justify-content:space-between](#justify-content-space-between)
- [justify-content:space-around](#justify-content-space-around)
- [justify-content:space-evenly](#justify-content-space-evenly)

---

### justify-content-flex-start

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: flex-start;
}
```

<img width="300" alt="flex-direction-row" src="https://github.com/1337encrypted/zet/assets/46808309/27577f88-1269-4b9d-b406-dfb50aef10f8">

### justify-content-flex-end

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: flex-end;
}
```

<img width="300" alt="justify-content-flex-end" src="https://github.com/1337encrypted/zet/assets/46808309/7c0cfcc2-c169-44a2-97fc-c3fc1718347e">

### justify-content-center

 ``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: center;
}
```

<img width="300" alt="justify-content-center" src="https://github.com/1337encrypted/zet/assets/46808309/cc3d51d2-048b-4cd1-8746-87fe18f6e8ef">

### justify-content-space-between

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-between;
}
```

<img width="300" alt="justify-content-space-between" src="https://github.com/1337encrypted/zet/assets/46808309/84d58244-d4ee-4716-8249-c6a20f28f249">

### justify-content-space-around

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-around;
}
```

<img width="300" alt="justify-content-space-around" src="https://github.com/1337encrypted/zet/assets/46808309/8138fe6c-391c-4f1d-9a17-6a0235a004ec">

### justify-content-space-evenly

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-evenly;
}
```

<img width="300" alt="justify-content-space-evenly" src="https://github.com/1337encrypted/zet/assets/46808309/8a3eecb9-ce07-4c13-9dd4-5b52c4a38963">

## align-items

+ Aligning items on the cross axis

- [align-items:flex-start](#align-items-flex-start)
- [align-items:flex-end](#align-items-flex-end)
- [align-items:center](#align-items-center)
- [align-items:basline](#align-items-basline)

### align-items-flex-start

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-evenly;
  align-items: flex-start;
}
```

<img width="300" alt="align-items-flex-start" src="https://github.com/1337encrypted/zet/assets/46808309/5c88337f-c92b-4e01-a525-c6221e8a5522">

### align-items-flex-end

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-evenly;
  align-items: flex-end;
}
```

<img width="300" alt="align-items-flex-end" src="https://github.com/1337encrypted/zet/assets/46808309/e280b1a6-3c05-4c4a-9a9c-f853c5111222">

### align-items-center

``` 
.container {
  display: flex;
  flex-direction:row;
  justify-content: space-evenly;
  align-items: center;
}
```

<img width="300" alt="align-items-center" src="https://github.com/1337encrypted/zet/assets/46808309/a24f33f8-ae72-4d69-8b27-ac0bb164916f">

### align-items-baseline

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

<img width="300" alt="align-items-baseline" src="https://github.com/1337encrypted/zet/assets/46808309/757f551d-02eb-45a9-8ed8-566d04e14317">

## flex-wrap

- [flex-wrap:nowrap](#flex-wrap-nowrap)
- [flex-wrap:wrap](#flex-wrap-wrap)

### flex-wrap-nowrap

- When the number of items increase inside a div they will squeeze and cram to fit inside the row

<img width="300" alt="flex-wrap" src="https://github.com/1337encrypted/zet/assets/46808309/fd1a433b-720b-4fc7-8d8a-048fca7f0436">

### flex-wrap-wrap

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

<img width="300" alt="flex-wrap-wrap" src="https://github.com/1337encrypted/zet/assets/46808309/b68a52ff-b203-4364-9a68-8150e8937717">

## align-content

- [align-content:flex-start](#align-content-flex-start)
- [align-content:flex-end](#align-content-flex-end)
- [align-content:center](#align-content-center)
- [align-content:space-around](#align-content-space-around)
- [align-content:space-between](#align-content-space-between)
- [align-content:space-evenly](#align-content-space-evenly)

+ When `flex-wrap: wrap` is set and items are wrapping a new property is enabled that is `align-content`, 
+ The possible properties are same as `justify-content`.

### align-content-flex-start

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

<img width="300" alt="align-content-flex-start" src="https://github.com/1337encrypted/zet/assets/46808309/21cdd567-c73b-4af3-becd-68109140c609">

### align-content-flex-end

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

<img width="300" alt="align-content-flex-end" src="https://github.com/1337encrypted/zet/assets/46808309/e0b3ed9f-307d-4e3d-aa80-85bb050f761a">

### align-content-center

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

<img width="300" alt="align-content-center" src="https://github.com/1337encrypted/zet/assets/46808309/0ac12834-a26e-4e27-a4df-0c52893a1f30">

### align-content-space-around

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

<img width="300" alt="align-content-space-around" src="https://github.com/1337encrypted/zet/assets/46808309/6422d184-0b16-4211-9934-15961ab272f6">

### align-content-space-between

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

<img width="300" alt="align-content-space-between" src="https://github.com/1337encrypted/zet/assets/46808309/5c0a8dee-6b81-4ad0-9632-9916053ab290">

### align-content-space-evenly

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

<img width="300" alt="align-content-space-evenly" src="https://github.com/1337encrypted/zet/assets/46808309/d3711d39-2928-4658-a6dc-3741318d9fb0">

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

<img width="300" alt="gap" src="https://github.com/1337encrypted/zet/assets/46808309/25829348-0b00-411d-b0ab-61b302c28e69">

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

<img width="300" alt="flex-grow-1" src="https://github.com/1337encrypted/zet/assets/46808309/03bbda9d-9c8e-40fe-9e8a-0e3f48ae6307">

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

<img width="300" alt="flex-grow-2" src="https://github.com/1337encrypted/zet/assets/46808309/698458fb-d7d4-4c11-8a48-1be64ac4969f">

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

https://github.com/1337encrypted/zet/assets/46808309/068588b5-ec15-4ea8-a6a4-e64ebb3902ff

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

<img width="300" alt="flex-basis-300px" src="https://github.com/1337encrypted/zet/assets/46808309/b223679a-fac9-4549-9b9f-2cdc59cbef3a">

- setting `flex-basis: 0 ` will shrink the item to the smallest possible size limit.

<img width="300" alt="flex-basis-0" src="https://github.com/1337encrypted/zet/assets/46808309/7c0db7a4-bb88-47b8-8f66-6c39c2421c77">

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
