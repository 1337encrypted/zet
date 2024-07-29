# Rules

```
%.o: %.C
    $(CC) -c $(CFLAGS) -o $@ $<
```
```
%.o: $. cpp
    $(СХХ) -c $ (CXXFLAGS) -o $@ $<
```
```
%.o: %. f
    $(FC) -c $(FFLAGS) -o $@ $<
```
```
%.o: %. p
    $(PC) -c $(PFLAGS) -o $@ $<
``` 

- Rules are shell commands emitted by Make to produce an output file
- Rules use pattern matching on file types. The rule Make uses depends on how the recipe is configured
- There are many implicit rules built into make for different file types
- Implicit rules become obsolete very quickly