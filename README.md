# Algorithms

Classic CS algorithms in C++ and Python, organized by category with a CMake build system.

## Structure

```
algorithms/
├── graph/           Dijkstra, Kruskal MST, Prim MST
├── sorting/         Selection, Insertion, Merge, Heap, Counting, Bucket sort + median finder
├── math/            Gaussian elimination (fractions), Gray code, Hex ↔ decimal converter
├── strings/         Reverse Polish Notation evaluator, Substring search
└── python/          Dijkstra (Jupyter Notebook)
```

## Build (C++)

Requires CMake ≥ 3.16 and a C++17 compiler (GCC, Clang, or MSVC).

```bash
cmake -B build
cmake --build build
```

Each algorithm compiles to its own named executable inside `build/`.

## Algorithms

### Graph
| File | Algorithm | Complexity |
|------|-----------|------------|
| `graph/dijkstra.cpp` | Dijkstra's shortest path | O(V²) |
| `graph/kruskal.cpp` | Kruskal's MST (union-find) | O(E log E) |
| `graph/prim.cpp` | Prim's MST | Work-in-progress |

### Sorting
| File | Algorithm | Complexity |
|------|-----------|------------|
| `sorting/selection_sort.cpp` | Selection sort | O(n²) |
| `sorting/insertion_sort.cpp` | Insertion sort | O(n²) |
| `sorting/merge_sort.cpp` | Merge sort | O(n log n) |
| `sorting/heap_sort.cpp` | Heap sort | O(n log n) |
| `sorting/counting_sort.cpp` | Counting sort | O(n + k) |
| `sorting/bucket_sort.cpp` | Bucket sort | O(n + k) |
| `sorting/selection_sort_median.cpp` | Selection sort + median | O(n²) |

### Math
| File | Algorithm |
|------|-----------|
| `math/gaussian_elimination/` | Row-reduction with exact fractions |
| `math/gray_code.cpp` | N-bit Gray code generator |
| `math/hex_converter.cpp` | Hex ↔ decimal bidirectional converter |

### Strings
| File | Algorithm |
|------|-----------|
| `strings/rpn_evaluator.cpp` | Reverse Polish Notation evaluator |
| `strings/substring_search.cpp` | Substring occurrence counter |

### Python
| File | Algorithm |
|------|-----------|
| `python/dijkstra.ipynb` | Dijkstra's shortest path (graph class) |

## Bug fixes applied

| File | Bug | Fix |
|------|-----|-----|
| `strings/rpn_evaluator.cpp` | Use-after-free in custom stack; wrong `-`/`/` operand order | Replaced with `std::stack`; fixed pop order |
| `graph/dijkstra.cpp` | Out-of-bounds array walk; `infinity=1000` too small | Safe min-search; `INT_MAX` sentinel |
| `sorting/heap_sort.cpp` | `heap_sort()` body was empty | Implemented extract-max loop |
| `sorting/bucket_sort.cpp` | Wrong distribution index | Fixed to `buckets[value][count++]` |
| `sorting/selection_sort.cpp` | Missing braces put `counter++` outside inner loop | Added braces |
| `sorting/counting_sort.cpp` | `tmp` array never freed | Added `delete[] tmp` |
| `strings/substring_search.cpp` | `printf("%x")` printed count as hex | Changed to `%d` |
| `python/dijkstra.ipynb` | `return ValueError(...)` instead of raising | Changed to `raise` |
| `math/gaussian_elimination/main.cpp` | `#include "matrix.cpp"` (non-standard) | Changed to `#include "matrix.h"` |
