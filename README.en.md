# C Language Learning

A personal C learning repository with small, focused programs inspired by CS50 exercises, plus a few LeetCode solutions.

## Repository Overview

- `CS50/`: standalone C examples for core language concepts
- `LeetCode/`: function-based algorithm solutions
- `README.md` and `README.en.md`: Chinese and English documentation

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
│  ├─ mario2.c
│  ├─ names.c
│  ├─ numbers.c
│  ├─ overflow.c
│  ├─ phonebook.c
│  ├─ recursion(递归).c
│  ├─ scores.c
│  ├─ string.c
│  ├─ uppercase.c
│  └─ output/
├─ LeetCode/
│  ├─ 136.c
│  └─ 704.c
├─ README.md
├─ README.en.md
└─ LICENSE
```

## CS50 File Guide

| File | Focus |
|------|-------|
| `address.c` | Pointer arithmetic on a string literal |
| `agree.c` | Branching on single-character input (`y`/`n`) |
| `argv.c` | Reading command-line arguments |
| `compare.c` | Dynamic allocation with `malloc` and string input |
| `copy.c` | Deep-copying strings with `malloc` + `strcpy` |
| `cough0.c` | Repeated output with plain `printf` |
| `cough1.c` | Defining and calling a no-argument function |
| `cough3.c` | Function with parameter-controlled repeated output |
| `exit.c` | Returning exit codes based on CLI argument validation |
| `float.c` | Floating-point input, division, and precision formatting |
| `for.c` | Basic `for` loop example |
| `hi.c` | Character-to-ASCII integer output |
| `iteration(迭代).c` | Drawing a triangle using iterative nested loops |
| `mario2.c` | Input validation with `do-while`, then horizontal output |
| `names.c` | Linear search in a string array |
| `numbers.c` | Linear search in an integer array |
| `overflow.c` | Integer overflow demo by repeated doubling |
| `phonebook.c` | `struct` array and lookup by name |
| `recursion(递归).c` | Drawing a triangle recursively |
| `scores.c` | Variable-length array and average calculation |
| `string.c` | `fgets` input and character-by-character output |
| `uppercase.c` | Manual lowercase-to-uppercase conversion via ASCII math |

## LeetCode File Guide

| File | Problem | Idea |
|------|---------|------|
| `136.c` | Single Number | XOR accumulation, $O(n)$ time and $O(1)$ extra space |
| `704.c` | Binary Search | Two-pointer binary search on sorted array, $O(log n)$ time |

## Build and Run

### Windows PowerShell (GCC)

```powershell
Set-Location .\CS50
gcc -std=c11 -Wall -Wextra -o scores.exe scores.c
.\scores.exe
```

### Linux/macOS

```bash
cd CS50
gcc -std=c11 -Wall -Wextra -o scores scores.c
./scores
```

### Files with Parentheses/Chinese Characters in Names

Use quotes around filenames:

```bash
gcc -std=c11 -Wall -Wextra -o iteration "iteration(迭代).c"
gcc -std=c11 -Wall -Wextra -o recursion "recursion(递归).c"
```

## Notes

- Programs in `CS50/` are mostly standalone and read from standard input.
- Files in `LeetCode/` are judge-style function implementations. Add your own `main` to test locally.
- `overflow.c` includes `unistd.h`; GCC environments (MinGW/WSL/Linux/macOS) are recommended.

## License

See `LICENSE` for details.