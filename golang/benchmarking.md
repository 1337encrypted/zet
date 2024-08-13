# Benchmarking in Go

Benchmarking is an essential part of optimizing your Go code. The Go testing package provides built-in support for writing and running benchmarks, allowing you to measure the performance of your code and identify bottlenecks.

## Table of Contents
1. [What is Benchmarking?](#what-is-benchmarking)
2. [Creating a Benchmark](#creating-a-benchmark)
3. [Running Benchmarks](#running-benchmarks)
4. [Understanding Benchmark Output](#understanding-benchmark-output)
5. [Common Benchmarking Techniques](#common-benchmarking-techniques)
6. [Using Benchmarks to Profile Code](#using-benchmarks-to-profile-code)
7. [Best Practices](#best-practices)
8. [Examples](#examples)
9. [Resources](#resources)

## What is Benchmarking?

Benchmarking involves running a piece of code multiple times to measure its performance, typically in terms of execution time and memory usage. This is useful for:
- Identifying slow parts of your code.
- Comparing the performance of different implementations.
- Ensuring that performance does not degrade over time.

## Creating a Benchmark

### Step 1: Write a Benchmark Function

Benchmark functions are similar to test functions but have the prefix `Benchmark`.  
They take a pointer to `testing.B` as a parameter and use it to control the benchmarking process.

```go
package yourpackage

import "testing"

func BenchmarkFunctionName(b *testing.B) {
    for i := 0; i < b.N; i++ {
        // Code to benchmark
    }
}
```

### Step 2: Structure the Loop

The loop `for i := 0; i < b.N; i++` is critical because `b.N` determines the number of iterations. The Go testing tool automatically adjusts `b.N` to ensure the benchmark runs for a sufficient amount of time.

### Example

```go
package math

import "testing"

func BenchmarkAdd(b *testing.B) {
    for i := 0; i < b.N; i++ {
        Add(1, 2)
    }
}
```

## Running Benchmarks

### Run All Benchmarks

To run all benchmarks in a package, use the following command:

```bash
go test -bench=.
```

### Run a Specific Benchmark

You can run a specific benchmark by providing its name:

```bash
go test -bench=BenchmarkAdd
```

### Run Benchmarks with Memory Allocation Reporting

To see memory allocation statistics, use the `-benchmem` flag:

```bash
go test -bench=. -benchmem
```

## Understanding Benchmark Output

Benchmark output includes several key metrics:

- **Benchmark Name**: The name of the benchmark function.
- **Iterations**: The number of iterations (determined by `b.N`).
- **Time per Operation**: The average time taken for each operation (e.g., `ns/op`).
- **Memory Allocations**: If using `-benchmem`, it includes memory allocations per operation and bytes allocated per operation.

### Example Output

```plaintext
BenchmarkAdd-8       1000000000      2.33 ns/op
BenchmarkAdd-8       1000000000      0 B/op      0 allocs/op
```

In this output:
- **BenchmarkAdd-8**: The benchmark name (`-8` indicates it was run on 8 CPU cores).
- **1000000000**: The number of iterations.
- **2.33 ns/op**: The average time per operation.
- **0 B/op**: Bytes allocated per operation.
- **0 allocs/op**: Allocations per operation.

## Common Benchmarking Techniques

### Benchmarking Different Inputs

You can benchmark your function with different inputs by creating multiple benchmark functions:

```go
func BenchmarkAddSmall(b *testing.B) {
    for i := 0; i < b.N; i++ {
        Add(1, 2)
    }
}

func BenchmarkAddLarge(b *testing.B) {
    for i := 0; i < b.N; i++ {
        Add(1000000, 2000000)
    }
}
```

### Resetting the Timer

If your benchmark function has setup code that you don't want to measure, you can reset the timer:

```go
func BenchmarkWithSetup(b *testing.B) {
    setup()
    b.ResetTimer()
    for i := 0; i < b.N; i++ {
        DoWork()
    }
}
```

### Running Parallel Benchmarks

To simulate concurrent execution, use `b.RunParallel`:

```go
func BenchmarkParallel(b *testing.B) {
    b.RunParallel(func(pb *testing.PB) {
        for pb.Next() {
            DoWork()
        }
    })
}
```

## Using Benchmarks to Profile Code

Go provides tools like `pprof` to profile your benchmarks:

```bash
go test -bench=. -cpuprofile=cpu.out
go tool pprof cpu.out
```

This allows you to visualize and analyze CPU usage, helping to identify performance bottlenecks.

## Best Practices

- **Isolate Code**: Benchmark only the code you want to measure, avoiding unrelated operations.
- **Avoid Optimizing Compilers**: Ensure the compiler doesn't optimize away your benchmarked code by using the result in some way (e.g., storing it in a global variable).
- **Run Multiple Times**: Run benchmarks multiple times under different conditions to get reliable results.
- **Use Realistic Data**: Benchmark with data that closely resembles what your application will handle in production.

## Examples

### Example 1: Simple Benchmark

```go
package math

import "testing"

func BenchmarkMultiply(b *testing.B) {
    for i := 0; i < b.N; i++ {
        Multiply(2, 3)
    }
}
```

### Example 2: Benchmark with Memory Allocation

```go
package math

import "testing"

func BenchmarkAllocate(b *testing.B) {
    for i := 0; i < b.N; i++ {
        _ = make([]int, 1000)
    }
}
```

### Example 3: Parallel Benchmark

```go
package math

import "testing"

func BenchmarkAddParallel(b *testing.B) {
    b.RunParallel(func(pb *testing.PB) {
        for pb.Next() {
            Add(1, 2)
        }
    })
}
```

## Resources

- [Go Testing Package Documentation](https://pkg.go.dev/testing)
- [Effective Go - Benchmarking](https://golang.org/doc/effective_go.html#benchmarking)
- [Go Blog: Writing Benchmarks in Go](https://blog.golang.org/benchmarking)