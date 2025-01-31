# Floating-Point Comparison Validator

This validator ensures that the contestant's floating-point output is within a specified precision tolerance. Since floating-point numbers can have small rounding errors, we use an **epsilon (`EPS`)** to allow slight differences.

## How It Works  

- The expected floating-point value is read from `ans` (the correct output file).  
- The contestant's floating-point value is read from `ouf`.  
- The absolute difference between both values is checked.  
- If the difference is greater than `EPS = 1e-6`, the output is considered **Wrong Answer (_wa_)**.  
- If the difference is within the allowed precision, the output is **Accepted (_ok_)**.  

## Usage  

To compile the validator:  

```sh
g++ -o validator floating_point_validator.cpp
```

To run the validator with testlib-compatible arguments:

```sh
./validator input.txt output.txt answer.txt
```
