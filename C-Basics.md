# C-Basics.md — Core C Programming Concepts

## 1. Data Types

| Data Type | Description                                                                                                            |
| --------- | ---------------------------------------------------------------------------------------------------------------------- |
| `int`     | Stores whole numbers (no decimal point), typically 4 bytes. Used for counting, indexing, and integer arithmetic.       |
| `float`   | Stores single-precision floating-point numbers (numbers with decimals), typically 4 bytes.                             |
| `double`  | Stores double-precision floating-point numbers, typically 8 bytes. Offers more precision than `float`.                 |
| `char`    | Stores a single character (letter, digit, or symbol), typically 1 byte. Internally stored as an integer (ASCII value). |
| `bool`    | Stores a boolean value: `true` or `false`. Requires `<stdbool.h>` in C. Typically 1 byte.                              |
| `void`    | Represents "no type" or "no value." Used for functions that return nothing, or generic pointers (`void *`).            |

## 2. Format Specifiers

| Specifier | Meaning                                                  |
| --------- | -------------------------------------------------------- |
| `%d`      | Signed decimal integer                                   |
| `%u`      | Unsigned decimal integer                                 |
| `%o`      | Unsigned octal integer                                   |
| `%x`      | Unsigned hexadecimal integer (lowercase letters a–f)     |
| `%X`      | Unsigned hexadecimal integer (uppercase letters A–F)     |
| `%f`      | Floating-point number (decimal notation)                 |
| `%e`      | Floating-point number in scientific/exponential notation |
| `%c`      | Single character                                         |
| `%s`      | String (sequence of characters)                          |
| `%ld`     | Signed decimal integer for `long int`                    |

## 3. Input/Output Functions

- **`scanf()`** — Reads formatted input from the user (keyboard). Requires format specifiers matching the variable type, and the address-of operator (`&`) for most variables (e.g. `scanf("%d", &num);`).
- **`printf()`** — Writes formatted output to the screen. Uses format specifiers to control how values are displayed (e.g. `printf("Value: %d\n", num);`).
- **`getchar()`** — Reads a single character from input (keyboard) and returns it as an `int`. Commonly used for simple character-by-character input.
- **`putchar()`** — Writes a single character to output. Takes a character (or its integer/ASCII value) and displays it.
- **`fgets()`** — Reads a line of text (including spaces) from input into a character array, up to a specified size. Safer than `scanf("%s", ...)` because it prevents buffer overflow by limiting how many characters are read.
- **`puts()`** — Writes a string to output followed by a newline. Simpler than `printf()` when no formatting is needed.

## 4. Escape Sequences

| Escape Sequence | Meaning                                                       |
| --------------- | ------------------------------------------------------------- |
| `\n`            | Newline — moves the cursor to the next line                   |
| `\t`            | Horizontal tab — inserts a tab space                          |
| `\\`            | Backslash — prints a literal `\` character                    |
| `\"`            | Double quote — prints a literal `"` character inside a string |
| `\'`            | Single quote — prints a literal `'` character                 |

## 5. Precision

Precision for floating-point output is specified by placing a `.` followed by a number between the `%` and the format specifier letter. For example:

- `%f` — default precision (usually 6 digits after the decimal point)
- `%.2f` — 2 digits after the decimal point
- `%.4f` — 4 digits after the decimal point
- `%.6f` — 6 digits after the decimal point

Example: `printf("%.2f", 3.14159);` outputs `3.14`.

Precision can also be applied to `%e` (scientific notation) in the same way, e.g. `%.3e`.
