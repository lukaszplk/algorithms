# Substring Search

A simple C++ utility for searching substrings within text files. This program reads text from a file and counts occurrences of a specified substring.

## 🎯 Purpose

Educational project demonstrating:
- File I/O operations in C++
- String manipulation
- Substring searching algorithms
- Basic error handling

## ✨ Features

- 📁 Read text from any file
- 🔍 Search for substring occurrences
- 📊 Count total matches
- ⚠️ File validation and error handling
- 🔄 Multiple file processing in one session

## 🛠️ Technology

- **Language:** C++
- **Standard:** C++11 or higher
- **Dependencies:** Standard Library only

## 📦 Compilation

```bash
g++ substring_search.cpp -o substring_search
```

Or with C++11:
```bash
g++ -std=c++11 substring_search.cpp -o substring_search
```

## 🎮 Usage

### Run the program:
```bash
./substring_search
```

### Interactive Prompts:

1. **Enter filename** to search in
2. **Enter substring** to search for
3. **View results** (number of occurrences)
4. **Continue** with another file or press `n` to exit

### Example Session:

```
Podaj nazwe pliku: example.txt
Podaj ciag: hello
Znaleziono: 3

Podaj nazwe pliku: another.txt
Podaj ciag: world
Znaleziono: 5

Podaj nazwe pliku: n
```

## 📁 File Structure

```
substring-search/
├── substring_search.cpp    # Main source file
├── README.md              # This file
└── LICENSE                # License file
```

## 🔧 How It Works

1. Prompts user for filename
2. Opens and validates file
3. Prompts for substring to search
4. Reads file line by line
5. Counts substring occurrences using `string::find()`
6. Displays total count
7. Allows processing multiple files

## 💡 Algorithm

Uses C++ Standard Library's `std::string::find()` method:
- Iterates through each line
- Searches for substring from current position
- Increments counter for each match
- Continues until end of line

**Time Complexity:** O(n*m) where n = text length, m = pattern length

## 🚀 Potential Improvements

- [ ] Add case-insensitive search option
- [ ] Support regular expressions
- [ ] Output line numbers with matches
- [ ] Highlight matches in context
- [ ] Support multiple file patterns (wildcards)
- [ ] Export results to file
- [ ] Add command-line arguments
- [ ] Unicode support

## 📝 Note

Interface is in Polish (original educational project). Key terms:
- **"Podaj nazwe pliku"** = "Enter filename"
- **"Podaj ciag"** = "Enter substring"
- **"Znaleziono"** = "Found"
- **"Nie udalo sie otworzyc pliku"** = "Failed to open file"

## 📄 License

See [LICENSE](LICENSE) file for details.

## 🤝 Contributing

This is an educational project. Feel free to fork and improve!

---

**Simple substring search utility in C++**
