# Testlib Output Validator

This program is a validator using **testlib.h** to check if the output of a contestant's program matches the expected output, regardless of the order of numbers.

## How It Works

1. The program reads the expected output from `ans` (the correct output file).  
2. It reads the contestant's output from `ouf`.  
3. Both outputs are stored in vectors (`expected` and `actual`).  
4. The lists are sorted to ignore order differences.  
5. If both sorted lists are identical, the output is considered correct (`_ok`).  
6. Otherwise, the output is considered wrong (`_wa`).  

## Usage

Compile the code using **g++**:  

```sh
g++ -o validator validator.cpp
```
Run it with testlib-compatible arguments:
```
./validator input.txt output.txt answer.txt
```
