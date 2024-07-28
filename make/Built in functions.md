# built in functions

### Text functions 
`$(SRCS:.c=.o)`   
### Filename functions
`#(addprefix build/,$(OBJS))`   
### Conditional functions
`$(if ..) $(or ..) $(and..)`    
`$(foreach var, list, text)`
### Value function   
`$(value (VARIABLE))`   
### Shell function
`$ (shell ..)`   
### Control functions
`$(error ..)`   
`$ (warning ..)`  
`$(info ..)`  
