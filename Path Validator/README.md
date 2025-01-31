# Path Validator (Shortest Path Problem)

This validator ensures that the contestant's output represents a **valid shortest path** in a weighted graph. It verifies:  
- The path follows **valid edges** from the input graph.  
- The total weight of the path matches the expected answer.  

## How It Works  

- Reads the number of vertices `n` and edges `m` from `inf`.  
- Stores all edges and their weights in a **map** for fast lookups.  
- Reads the expected shortest path cost from `ans`.  
- Reads the contestant’s output path and calculates the total cost.  
- If any edge in the path does not exist in the graph, the output is considered **Wrong Answer (_wa_)**.  
- If the total cost does not match the expected cost, the output is considered **Wrong Answer (_wa_)**.  
- If everything is correct, the output is **Accepted (_ok_)**.  

## Usage  

To compile the validator:  

```sh
g++ -o validator path_validator.cpp
```
To run the validator with testlib-compatible arguments:

```sh
./validator input.txt output.txt answer.txt
```
