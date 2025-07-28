# Radix Sort in C

This repository contains a simple implementation of the **Radix Sort** algorithm in C, which sorts an array of non-negative integers efficiently by processing individual digits.

## Overview

Radix Sort is a non-comparative integer sorting algorithm that sorts data with integer keys by grouping keys by the individual digits which share the same significant position and value. It uses **Counting Sort** as a subroutine to sort the digits.

### Key Components:
- `getMax`: Finds the maximum value in the array to determine the number of digits.
- `countingSort`: Performs a stable counting sort on digits at a specific exponent (digit place).
- `radixSort`: Sorts the entire array by processing each digit from least significant to most significant.
- `printArray`: Utility function to print the array contents.
- `main`: Demonstrates the radix sort with an example array.

## How it works

1. Find the maximum number in the array to know the number of digits.
2. Perform counting sort on each digit, starting from the least significant digit (ones place) to the most significant digit.
3. After processing all digits, the array is sorted.

## Usage

To compile and run the program:

```bash
gcc radix_sort.c -o radix_sort
./radix_sort

Expected output for the example array

2 24 45 66 75 90 170 802 
