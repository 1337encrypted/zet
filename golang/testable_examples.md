# Writing Testable Examples in Go

Go provides a unique feature called **Testable Examples** that allows you to write examples for your code, which can also serve as tests. These examples are particularly useful for documenting how to use your code while ensuring that the code in the documentation stays up to date and correct.

## Table of Contents
1. [What is a Testable Example?](#what-is-a-testable-example)
2. [Creating Testable Examples](#creating-testable-examples)
3. [Running Testable Examples](#running-testable-examples)
4. [Best Practices](#best-practices)
5. [Examples](#examples)
6. [Resources](#resources)

## What is a Testable Example?

A **Testable Example** is a function in Go that demonstrates how to use a function, method, or package. The `go test` tool can execute these examples to ensure they produce the expected output. This dual functionality makes examples both documentation and tests.

### Structure of a Testable Example

A testable example in Go typically has the following structure:

- It must be in a file ending with `_test.go`.
- The function name must start with `Example`.
- The function should print output using `fmt.Println` (or equivalent).
- The expected output is specified in a comment starting with `// Output:`.

## Creating Testable Examples

### Step 1: Create an Example Function

Create a function in your `_test.go` file that begins with `Example`. The function should demonstrate how to use the code you're documenting.

```go
package yourpackage

import "fmt"

// ExampleAdd demonstrates how to use the Add function.
func ExampleAdd() {
    sum := Add(2, 3)
    fmt.Println(sum)
    // Output: 5
}
```

### Step 2: Include the Output Comment

The `// Output:` comment tells the `go test` tool what the expected output of the example should be. If the actual output does not match this, the example will fail.

## Running Testable Examples

Testable examples are run automatically with the `go test` command:

```bash
go test
```

If the example output matches the expected output in the comment, the test passes. If not, it fails.

### Running Only Examples

You can run only the examples using the `-run` flag:

```bash
go test -run Example
```

## Best Practices

- **Keep Examples Simple**: Focus on clarity and demonstrating the primary use cases of your functions.
- **Document Edge Cases**: If applicable, include examples that cover edge cases.
- **Keep Output Stable**: Ensure the output is consistent and does not depend on factors like time or random values unless necessary.
- **Use `Example` Naming Convention**: Name your example functions descriptively, like `ExampleFunctionName`, `ExampleTypeName_MethodName`, or `Example` for package-level examples.

## Examples

### Example 1: Basic Example

```go
package math

import "fmt"

// ExampleAdd demonstrates a simple usage of the Add function.
func ExampleAdd() {
    result := Add(1, 2)
    fmt.Println(result)
    // Output: 3
}
```

### Example 2: Example for a Method

```go
package shapes

import "fmt"

// ExampleCircle_Area demonstrates the Area method of the Circle type.
func ExampleCircle_Area() {
    c := Circle{Radius: 5}
    fmt.Println(c.Area())
    // Output: 78.53981633974483
}
```

### Example 3: Example at Package Level

```go
package main

import "fmt"

// Example demonstrates basic usage of the main package.
func Example() {
    fmt.Println("Hello, World!")
    // Output: Hello, World!
}
```

## Resources

- [Go Testing Package Documentation](https://pkg.go.dev/testing)
- [Effective Go - Example Functions](https://golang.org/doc/effective_go.html#examples)
- [Go Wiki: Examples](https://github.com/golang/go/wiki/Examples)