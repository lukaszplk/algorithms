# Selection Sort with Median Calculation

A C++ implementation of the selection sort algorithm using templates, with median calculation. Demonstrates generic programming and algorithm implementation.

## 🎯 Purpose

Educational project showcasing:
- **C++ Templates** for generic algorithms
- **Selection Sort** implementation
- **Median calculation** on sorted data
- Type-agnostic code (works with any comparable type)

## ✨ Features

- 🔢 **Generic Templates** - Works with `int`, `double`, or any comparable type
- 📊 **Selection Sort** - O(n²) sorting algorithm
- 📈 **Median Calculation** - Finds middle value of sorted array
- 🎯 **Type Safety** - Compile-time type checking
- 💡 **Educational** - Clear, commented code

## 🛠️ Technology

- **Language:** C++
- **Standard:** C++11 or higher
- **Features:** Templates, Generic Programming
- **Dependencies:** Standard Library only

## 📦 Compilation

```bash
g++ main.cpp -o selection_sort
```

Or with optimization:
```bash
g++ -std=c++11 -O2 main.cpp -o selection_sort
```

## 🎮 Usage

### Run the program:
```bash
./selection_sort
```

### Interactive Input:

1. **Choose data type:**
   - `i` for integers
   - `d` for doubles

2. **Enter number of elements**

3. **Enter each element** one by one

4. **View results:**
   - Sorted array
   - Median value

### Example Session:

```
Specify type of data i for int and d for double: i
Enter amount of elements in data: 5
Enter element 1: 42
Enter element 2: 17
Enter element 3: 93
Enter element 4: 28
Enter element 5: 55

Sorted array: 17 28 42 55 93
Median: 42
```

## 📁 File Structure

```
selection-sort-median/
├── main.cpp          # Complete implementation
├── README.md         # This file
└── LICENSE           # License file
```

## 🔧 How It Works

### Selection Sort Algorithm

```cpp
template<typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}
```

**Steps:**
1. Find minimum element in unsorted portion
2. Swap with first unsorted element
3. Repeat for remaining elements

**Time Complexity:** O(n²)  
**Space Complexity:** O(1)

### Median Calculation

```cpp
template<typename T>
T getMedian(T arr[], int n) {
    if (n % 2 == 0) {
        // Even: average of two middle elements
        return (arr[n/2 - 1] + arr[n/2]) / 2;
    } else {
        // Odd: middle element
        return arr[n/2];
    }
}
```

## 💡 Template Benefits

- **Type Safety:** Compile-time type checking
- **Code Reuse:** Single implementation for multiple types
- **Performance:** No runtime overhead (compared to void*)
- **Maintainability:** One codebase for all types

## 📊 Algorithm Analysis

### Selection Sort

| Aspect | Complexity |
|--------|-----------|
| **Best Case** | O(n²) |
| **Average Case** | O(n²) |
| **Worst Case** | O(n²) |
| **Space** | O(1) |
| **Stable** | No (can be made stable) |

### Median Calculation

| Aspect | Complexity |
|--------|-----------|
| **Time** | O(1) (on sorted array) |
| **Space** | O(1) |

## 🚀 Potential Improvements

- [ ] Add more sorting algorithms (quick sort, merge sort)
- [ ] Compare algorithm performance
- [ ] Add graphical visualization
- [ ] Support custom comparison functions
- [ ] Add unit tests
- [ ] Benchmark different data types
- [ ] Handle edge cases (empty array, single element)
- [ ] Add command-line arguments
- [ ] Output to file option

## 🎓 Educational Value

This project demonstrates:
- **Generic Programming** with C++ templates
- **Algorithm Implementation** (selection sort)
- **Statistical Operations** (median)
- **Memory Management** (in-place sorting)
- **Type Polymorphism** (same code, multiple types)

## 📚 Related Algorithms

- **Insertion Sort** - O(n²) but better for nearly sorted data
- **Quick Sort** - O(n log n) average, most practical
- **Merge Sort** - O(n log n) guaranteed, stable
- **Heap Sort** - O(n log n), in-place

## 📄 License

See [LICENSE](LICENSE) file for details.

## 🤝 Contributing

Educational project - feel free to fork and experiment!

---

**C++ Templates + Selection Sort + Median Calculation**
