# Automatic Dependency

- Make integrates with the compiler
- Dependency files contain information:
    a. -MT: Name of the target
    b. -MMD: List user header files
    c. -MP: Add phony targets
    d. -MF: Name of the file
- The DEPFILES recipe and the include line must be the last lines in the file
- Make will only rebuild prerequisites which have a newer timestamp than the generated dependency file