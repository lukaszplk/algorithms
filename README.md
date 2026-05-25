# Algorithms

Classic computer science algorithms implemented in C++ and Python. Originally written as university exercises; code reviewed and bugs corrected.

## Contents

| Folder | Algorithm | Language | Notes |
|--------|-----------|----------|-------|
| [`dijkstry/`](./dijkstry/) | Dijkstra's shortest path (O(V²), adjacency list) | C++ | |
| [`dijkstry_py/`](./dijkstry_py/) | Dijkstra's shortest path | Python (Jupyter) | |
| [`kruskal_algorithm/`](./kruskal_algorithm/) | Kruskal's MST (union-find) | C++ | |
| [`prima_algorithm/`](./prima_algorithm/) | Prim's MST (incomplete — see note) | C++ | Work-in-progress |
| [`sorting_algorithms/`](./sorting_algorithms/) | Selection, Insertion, Merge, Heap, Counting, Bucket sort | C++ | |
| [`selection-sort-median/`](./selection-sort-median/) | Selection sort + median finder | C++ (template) | |
| [`polish_notation/`](./polish_notation/) | Reverse Polish Notation evaluator | C++ | |
| [`gaussian_elimination/`](./gaussian_elimination/) | Gaussian elimination with fractions | C++ | |
| [`gray_code/`](./gray_code/) | N-bit Gray code generator | C++ | |
| [`conv_hex_to_dec_and_back/`](./conv_hex_to_dec_and_back/) | Hex ↔ decimal converter | C++ | |
| [`substring-search/`](./substring-search/) | Substring occurrence counter | C++ | |

## Bug fixes applied

| File | Bug | Fix |
|------|-----|-----|
| `polish_notation/notacja_polska.cpp` | `this->tab = tmp; delete [] tmp` freed the live buffer (use-after-free) | Replaced custom stack with `std::stack`; fixed operand order for `-` and `/` |
| `dijkstry/dijkstry.cpp` | `for(j=0;QS[j];j++)` could walk past array end; `infinity = 1000` too small | Safe min-search loop; `INT_MAX` sentinel |
| `sorting_algorithms/heap_sort.cpp` | `heap_sort()` body was empty | Implemented extract-max loop |
| `sorting_algorithms/bucket_sort.cpp` | `buckets[max-tab[i]][i]` wrote each element to a different column | Fixed distribution to `buckets[value][count++]` |
| `sorting_algorithms/sortwybieranie.cpp` | Missing braces made `counter++` count outer iterations, not comparisons | Added braces |
| `sorting_algorithms/counting_sort.cpp` | `tmp` array never freed | Added `delete [] tmp` |
| `substring-search/substring_search.cpp` | `printf("%x")` printed count as hex | Changed to `%d` |
| `dijkstry_py/dijkstry_algorithm_py.ipynb` | `add_edge` returned `ValueError(...)` instead of raising it | Changed `return` to `raise` |

## Build (C++)

Each subfolder contains a single `.cpp` file. Compile individually:

```bash
g++ -std=c++17 -O2 -o dijkstra dijkstry/dijkstry.cpp
g++ -std=c++17 -O2 -o polish  polish_notation/notacja_polska.cpp
# etc.
```

## Run (Python)

```bash
pip install jupyter
jupyter notebook dijkstry_py/dijkstry_algorithm_py.ipynb
```
