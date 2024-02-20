# Baremetal Arduino programming

![image](https://github.com/1337encrypted/zet/assets/46808309/02ee5fc4-1d7f-459a-8805-57f637492e06)

## Bit setting

**set nth bit**   
`reg  = reg | (1 << n)`

**unset the bit**  
`reg = reg &~(1 << n)`

- Set the **DDR** register as input or output example

Consider a pin pin 5, its on port D

```
#include <avr/io.h>
#include <util/delay.h>

//DDRD = B00100000;
DDRD |= (1 << DDR5);

while(1)
{
  PORTD |= (1 << PORTD5);
  _delay_ms(1000);
}
```
