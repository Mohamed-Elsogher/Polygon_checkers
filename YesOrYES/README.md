# Testlib YES/NO Validator

This program is a validator using **testlib.h** to check if the contestant's output is either `"YES"` or `"NO"`, ignoring case sensitivity.

## How It Works

1. The program reads the expected answer from `ans` (the correct output file).  
2. It reads the contestant's output from `ouf`.  
3. Both outputs are converted to **uppercase** to ensure case insensitivity.  
4. The program validates that both values are either `"YES"` or `"NO"`.  
5. If the contestant's output is invalid (not `"YES"` or `"NO"`), it returns a **Presentation Error (_pe_)**.  
6. If the expected output is invalid, it returns a **Failure (_fail_)**.  
7. If the contestant's output does not match the expected output, it returns **Wrong Answer (_wa_)**.  
8. If everything is correct, it returns **Accepted (_ok_)**.  

## Usage

Compile the code using **g++**:  

```sh
g++ -o validator validator.cpp
```
Run it with testlib-compatible arguments:

```sh
./validator input.txt output.txt answer.txt
```
