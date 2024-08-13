# Using `go test` in Go

Testing is an essential part of software development, and Go provides a built-in testing tool called `go test`. This tool allows you to write and run tests directly from your Go source code.

## Table of Contents
1. [Writing Tests](#writing-tests)
2. [Running Tests](#running-tests)
3. [Understanding Test Output](#understanding-test-output)
4. [Commonly Used Flags](#commonly-used-flags)
5. [Examples](#examples)
6. [Resources](#resources)

## Writing Tests

To write tests in Go, create a file with the suffix `_test.go`. Inside this file, define test functions using the following format:

```go
package yourpackage

import "testing"

func TestFunctionName(t *testing.T) {
    // Your test logic here
}
```

- The test function name must start with `Test`, followed by a descriptive name.
- The test function takes a pointer to `testing.T` as a parameter, which is used to log errors or fail the test.

### Example

```go
package math

import "testing"

func TestAdd(t *testing.T) {
    result := Add(2, 3)
    if result != 5 {
        t.Errorf("Add(2, 3) = %d; want 5", result)
    }
}
```

## Running Tests

To run tests, navigate to your package directory and execute:

```bash
go test
```

This command automatically discovers and runs all tests in the current package.

### Running Tests in Specific Files

You can also run tests in a specific file by specifying the file name:

```bash
go test -v your_test_file.go
```

## Understanding Test Output

When you run `go test`, it produces output that indicates whether the tests passed or failed:

- **PASS**: All tests passed.
- **FAIL**: One or more tests failed.

Use the `-v` flag for verbose output, which will show detailed information for each test:

```bash
go test -v
```

## Commonly Used Flags

- **`-v`**: Verbose output.
- **`-run`**: Run only tests that match a regular expression.

  ```bash
  go test -run ^TestAdd$
  ```

- **`-cover`**: Generate a coverage report.

  ```bash
  go test -cover
  ```

- **`-bench`**: Run benchmarks instead of tests.

  ```bash
  go test -bench=.
  ```

- **`-timeout`**: Set a timeout for tests.

  ```bash
  go test -timeout 30s
  ```

## Resources

- [Official Go Testing Documentation](https://pkg.go.dev/testing)
- [Effective Go - Testing](https://golang.org/doc/effective_go.html#testing)
- [Go by Example: Testing](https://gobyexample.com/testing)