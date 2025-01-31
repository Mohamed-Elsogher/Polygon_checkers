# Polygon_Checkers
Polygon_Checkers is a repository that contains validators designed to check the correctness of contest problem outputs using testlib.h.

# 🔹 What does this repository do?
The repository provides ready-to-use validators to validate various types of outputs in competitive programming problems. These validators ensure the accuracy of contestant outputs against expected results, with each validator focusing on specific problem constraints or requirements.

# 🔹 Key Features:
Answer Case-Insensitive Validator: Validates outputs like "YES" and "yes" while ignoring case sensitivity.
Floating-Point Comparison Validator: Compares floating-point outputs with a precision threshold to handle rounding errors.
Graph Validator: Ensures the contestant’s output represents a valid undirected graph with no duplicate or invalid edges.
Path Validator: Verifies that the output represents a valid shortest path in a weighted graph.
Each validator is implemented to suit different problem types, ensuring reliable results in competitive programming environments.

# 🔹 How it Works:
The repository uses testlib.h to facilitate input/output handling and comparison. Each validator reads the output files (ans, ouf) and compares them against the expected values while checking problem-specific constraints.

# 🔹 How to Use:
Compile the corresponding validator.
Run it with testlib-compatible arguments like the input file, contestant output, and expected output.
This repository is perfect for competitive programming contests, especially when validating the correctness of outputs that follow specific rules, such as case-insensitive matching, floating-point precision, graph structure, and path validation.
