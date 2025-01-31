# Graph Validator

This validator ensures that the contestant's output correctly represents an **undirected graph**. It checks for:  
- **Valid vertex numbers**: Each vertex must be between `1` and `n`.  
- **No self-loops**: An edge cannot connect a vertex to itself.  
- **No duplicate edges**: Each edge should appear only once in the output.  

## How It Works  

- Reads `n` (number of vertices) and `m` (number of edges) from `inf`.  
- Reads the contestant’s output and stores all edges in a **set** to track uniqueness.  
- If any edge is invalid, the output is considered **Wrong Answer (_wa_)**.  
- If all edges are correctly formatted and valid, the output is **Accepted (_ok_)**.  

## Usage  

To compile the validator:  

```sh
g++ -o validator graph_validator.cpp
```
To run the validator with testlib-compatible arguments:

```sh
./validator input.txt output.txt answer.txt
```
