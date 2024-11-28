# Hash-Table-using-singly-Array to find sum of two distinct elements in C

## Overview
This project implements a basic **hash table** in C using linear probing for collision resolution. It includes functionalities for inserting values, searching for values, and displaying the hash table contents. The program also demonstrates a use case where it looks for elements whose sum equals 10.

---

## Features

1. **Hash Function**:  
   The hash key is calculated as:
   \[
   \text{hash\_key} = (\text{value} \% 10) - 1
   \]
   This determines the index for insertion and search operations.

2. **Collision Resolution**:  
   The hash table uses **linear probing** to handle collisions. If the computed index is occupied, the program iterates over subsequent slots until an empty one is found.

3. **Array-Based Storage**:  
   The hash table is implemented using a fixed-size array (`arr1`) of size 10, initialized to \(-1\) to indicate empty slots.

4. **Lookup for Complements**:  
   The program demonstrates how to search for elements in the hash table by looking for pairs of elements whose sum equals 10.

---

## Files

### `hash_table.c`
The C source code file contains the following components:
- **`insert(int val)`**: Inserts a value into the hash table.
- **`lookup(int num)`**: Searches for a value in the hash table.
- **`display()`**: Displays all elements in the hash table.

---

## Functions

### 1. `void insert(int val)`
- **Description**: Inserts a value into the hash table using the hash function. Handles collisions using linear probing.
- **Parameters**: 
  - `val`: The value to be inserted.
- **Logic**:
  - Compute the hash key.
  - Check if the computed slot is empty; if not, use linear probing to find the next available slot.

---

### 2. `int lookup(int num)`
- **Description**: Searches for a value in the hash table.
- **Parameters**:
  - `num`: The value to search for.
- **Returns**:
  - `1` if the value is found.
  - `0` otherwise.
- **Logic**:
  - Use the hash function to compute the starting index.
  - Search the hash table using linear probing.

---

### 3. `void display()`
- **Description**: Prints all elements in the hash table, including empty slots.
- **Logic**:
  - Iterates over the hash table array and prints each element.

---

## Usage

1. **Compilation**: Compile the code using a C compiler, e.g., `gcc`:
   ```bash
   gcc -o hash_table hash_table.c
 
