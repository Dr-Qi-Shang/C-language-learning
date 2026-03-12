# C Language Learning

This is a C language learning project based on the CS50 course content, featuring multiple beginner-level C programming examples and exercises.

## Project Overview

This project collects introductory C programming examples covering core concepts such as basic syntax, data types, control structures, function definitions, and structs. These examples are ideal for beginners learning and practicing C language.

## Directory Structure

```
CS50/
├── agree.c          # Command-line arguments example
├── argv.c           # argv parameter handling
├── block1.c         # Code block example 1
├── block2.c         # Code block example 2
├── cough0.c         # Cough function example (no parameters)
├── cough1.c         # Cough function example (with parameters)
├── cough3.c         # Cough function example (looped calls)
├── exit.c           # Program exit example
├── float.c          # Floating-point types
├── for.c            # for loop example
├── hi.c             # Hello World example
├── mario2.c         # Mario pyramid example
├── names.c          # String array example
├── numbers.c        # Number handling example
├── overflow.c       # Integer overflow example
├── phonebook.c      # Phonebook struct example
├── scores.c         # Arrays and functions example
├── string.c         # String handling example
├── switch1.c        # switch statement example
├── uppercase.c      # Case conversion example
└── output/          # Compiled executable files
```

## Main Content

### Basic Syntax
- **Variables and Data Types**: `float.c`, `numbers.c`
- **Control Structures**: `for.c`, `switch1.c`, `block1.c`, `block2.c`
- **Function Definitions**: `cough0.c`, `cough1.c`, `cough3.c`, `scores.c`

### Advanced Topics
- **Command-line Arguments**: `agree.c`, `argv.c`, `exit.c`
- **String Handling**: `string.c`, `names.c`, `uppercase.c`
- **Structs**: `phonebook.c`
- **Integer Overflow**: `overflow.c`

## Compilation and Execution

### Compile a Single File

```bash
gcc -o output/filename filename.c
```

For example, compiling `hi.c`:

```bash
gcc -o output/hi CS50/hi.c
./output/hi
```

### Run Examples

```bash
# Compile and run hi.c
gcc -o hi CS50/hi.c
./hi

# Compile and run mario2.c
gcc -o mario2 CS50/mario2.c
./mario2
```

## Learning Suggestions

1. **Start with the Basics**: Begin by reading `hi.c` to understand the basic structure of a C program.
2. **Progress Gradually**: Follow the directory order to gradually master more syntax elements.
3. **Practice Hands-on**: Try modifying the code and observe changes in output.
4. **Understand the Principles**: Pay attention to low-level concepts like integer overflow to deepen your understanding of C.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## References

The code in this project is primarily inspired by the [CS50](https://cs50.harvard.edu/x/) course, Harvard University's most popular introductory computer science course.