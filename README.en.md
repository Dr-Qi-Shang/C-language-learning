# C Language Learning

A personal C learning repository built around small, focused programs. The content is split into two parts: CS50-style fundamentals and LeetCode algorithm implementations.

## Repository Overview

- `CS50/`: standalone programs for core syntax, control flow, strings, pointers, structs, file I/O, and recursion
- `LeetCode/`: algorithm practice files and alternative solutions to the same problem
- `README.md` / `README.en.md`: Chinese and English documentation

## Directory Layout

```text
C-language-learning/
├─ CS50/
│  ├─ address.c
│  ├─ agree.c
│  ├─ argv.c
│  ├─ compare.c
│  ├─ copy.c
│  ├─ cough0.c
│  ├─ cough1.c
│  ├─ cough3.c
│  ├─ exit.c
│  ├─ float.c
│  ├─ for.c
│  ├─ hi.c
│  ├─ iteration(迭代).c
│  ├─ jpeg.c
│  ├─ mario2.c
│  ├─ memory.c
│  ├─ names.c
│  ├─ noswap.c
│  ├─ numbers.c
│  ├─ overflow.c
│  ├─ phonebook(2).c
│  ├─ phonebook.c
│  ├─ recursion(递归).c
│  ├─ scnaf.c
│  ├─ scores.c
│  ├─ string.c
│  ├─ swap.c
│  ├─ uppercase.c
│  └─ output/
│     ├─ phonebook.csv
│     └─ *.exe
├─ LeetCode/
│  ├─ 136.c
│  ├─ 27.c
│  ├─ 283(1).c
│  ├─ 283(2).c
│  ├─ 344.c
│  └─ 704.c
├─ README.md
├─ README.en.md
└─ LICENSE
```

## CS50 File Guide

| File | Focus |
|------|-------|
| `address.c` | Accessing string characters via pointer offsets |
| `agree.c` | Single-character input branching (`y`/`n`) |
| `argv.c` | Reading and validating command-line arguments |
| `compare.c` | Allocating string buffers with `malloc` and reading input |
| `copy.c` | Deep-copying strings with `malloc` + `strcpy`, then modifying the copy |
| `cough0.c` | Repeated output using plain `printf` |
| `cough1.c` | Declaring, defining, and repeatedly calling a no-argument function |
| `cough3.c` | Parameterized function with nested loop output |
| `exit.c` | Exit status handling based on CLI validation |
| `float.c` | Floating-point input, division, and high-precision formatting |
| `for.c` | Basic `for` loop usage |
| `hi.c` | Character-to-ASCII integer output |
| `iteration(迭代).c` | Printing a triangle iteratively |
| `jpeg.c` | Reading file headers and checking JPEG signature bytes |
| `mario2.c` | Input validation using `do-while`, then printing one row |
| `memory.c` | Basic heap allocation and deallocation with `malloc`/`free` |
| `names.c` | Linear search in a string array with `strcmp` |
| `noswap.c` | Why pass-by-value swap does not affect caller variables |
| `numbers.c` | Linear search in an integer array |
| `overflow.c` | Integer overflow demonstration via repeated doubling |
| `phonebook(2).c` | Appending name-number pairs to `phonebook.csv` |
| `phonebook.c` | `struct` array and name-to-number lookup |
| `recursion(递归).c` | Printing a triangle recursively |
| `scnaf.c` | Fixed-size string input/output example |
| `scores.c` | Variable-length array input and average calculation |
| `string.c` | `fgets` input and character-by-character output |
| `swap.c` | Swapping values through pointer parameters |
| `uppercase.c` | Manual lowercase-to-uppercase conversion via ASCII range checks |

## LeetCode File Guide

| File | Problem | Main Idea |
|------|---------|-----------|
| `136.c` | Single Number | XOR accumulation, $O(n)$ time and $O(1)$ extra space |
| `27.c` | Remove Element | Two-pointer in-place swapping to move values not equal to `val` forward |
| `283(1).c` | Move Zeroes | Multi-pass swapping approach, intuitive but less efficient |
| `283(2).c` | Move Zeroes | Two-pointer in-place swapping, keeping non-zero elements in front |
| `344.c` | Reverse String | Two-pointer swap from both ends, done in place |
| `704.c` | Binary Search | Binary search on a sorted array, $O(log n)$ time |

## Build and Run

### Windows PowerShell (GCC)

```powershell
Set-Location .\CS50
gcc -std=c11 -Wall -Wextra -o .\output\scores.exe .\scores.c
.\output\scores.exe
```

### Linux/macOS

```bash
cd CS50
gcc -std=c11 -Wall -Wextra -o scores scores.c
./scores
```

### Files with Parentheses or Chinese Characters

Use quotes around filenames:

```powershell
gcc -std=c11 -Wall -Wextra -o .\output\iteration.exe ".\iteration(迭代).c"
gcc -std=c11 -Wall -Wextra -o .\output\recursion.exe ".\recursion(递归).c"
gcc -std=c11 -Wall -Wextra -o ".\output\phonebook(2).exe" ".\phonebook(2).c"
```

### Local Testing for LeetCode Files

Most files in `LeetCode/` are judge-style function implementations and do not include `main`. Add your own test entry file when compiling locally.

## Notes

- `CS50/output/` currently contains sample build artifacts (`.exe`) and `phonebook.csv`.
- `overflow.c` uses `unistd.h`; GCC-compatible environments (MinGW/WSL/Linux/macOS) are recommended.
- Files in `LeetCode/` are usually judge-style function implementations, so local testing requires an extra `main` or test harness.

## License

See `LICENSE` for details.