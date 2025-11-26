## C++ Programming
This repository is a small, hands-on C++ "course in a box".
Each file is a tiny, runnable example that focuses on a single concept, arranged in a logical learning path.
You can follow the numbered files like a mini textbook that you can execute and experiment with.

<br>

## Requirements
To run the examples in this repo you need:
- A C compiler (`gcc` or `clang`).
- **Visual Studio Code**.
- The **C/C++** extension by Microsoft.
- The **Code Runner** extension (for one-click run).

Quick setup with VS Code:
1. Install [VS Code](https://code.visualstudio.com/download) and add the **C/C++** and **Code Runner** extensions from the Extensions view.
2. Install a C compiler and make sure `gcc` or `clang` is available in the VS Code terminal:
   ```bash
   gcc --version
   # or
   clang --version
   ```
3. Open this folder in VS Code (`File` → `Open Folder…`).
4. Open any `.c` file and use **Code Runner** (the play icon) to compile and run it.

For more details on configuring C/C++ in VS Code, see the official docs:  
[C/C++ in Visual Studio Code](https://code.visualstudio.com/docs/languages/cpp).

<br>

## Learning Path
The main examples live in `libs/` and are numbered in a suggested order.
Practice scripts live in `scripts/` and continue the numbering.

### 1. Basics: variables, types, and I/O

- **Variables and types**
  - [01 - Variables](libs/01-variables.cpp)
  - [02 - Data types](libs/02-data_types.cpp)
  - [03 - Type casting](libs/03-type_casting.cpp)
  - [04 - sizeof operator](libs/04-sizeof-operator.cpp)

- **Input, output, and formatting**
  - [05 - User input](libs/05-user_input.cpp)
  - [06 - Format specifiers](libs/06-format_specifiers.cpp)
  - [07 - Escape sequences](libs/07-escape_sequences.cpp)

### 2. Operators and expressions

- **Arithmetic, logic, and bits**
  - [08 - Math operators](libs/08-math_operators.cpp)
  - [09 - Logical operator](libs/09-logical_operator.cpp)
  - [10 - Bitwise operators](libs/10-bitwise_operators.cpp)
  - [11 - Math functions](libs/11-math_functions.cpp)
  - [12 - Ternary operator](libs/12-ternary_operator.cpp)

### 3. Control flow

- **Branching and loops**
  - [13 - if statement](libs/13-if_statement.cpp)
  - [14 - switch statement](libs/14-switch_statement.cpp)
  - [15 - for loop](libs/15-for_loop.cpp)
  - [16 - while loop](libs/16-while_loop.cpp)
  - [17 - do-while loop](libs/17-do_while_loop.cpp)
  - [18 - break and continue statements](libs/18-break_continue_statements.cpp)
  - [19 - Nested loops](libs/19-nested_loop.cpp)
  - [20 - Range-based for (for-each) loop](libs/20-forEach_loop.cpp)

### 4. Arrays, strings, and `std::vector`

- **Raw arrays and algorithms**
  - [21 - Arrays](libs/21-arrays.cpp)
  - [22 - 2D arrays](libs/22-array_2D.cpp)
  - [23 - `fill` function](libs/23-fill_function.cpp)
  - [24 - Sorting arrays](libs/24-array_sort.cpp)

- **Strings and collections of strings**
  - [25 - Strings](libs/25-strings.cpp)
  - [26 - Array of strings](libs/26-array_strings.cpp)

- **STL dynamic array**
  - [27 - `std::vector`](libs/27-vector.cpp)

### 5. Functions

- **Function basics**
  - [28 - Functions](libs/28-function.cpp)
  - [29 - Return statement](libs/29-return_statement.cpp)
  - [30 - Const parameter](libs/30-const_parameter.cpp)
  - [31 - Pass by value](libs/31-pass-by-value.cpp)
  - [32 - Pass by reference](libs/32-pass-by-reference.cpp)
  - [33 - Function prototype](libs/33-function_prototype.cpp)

- **Overloads, templates, recursion, and static**
  - [34 - Function overloading](libs/34-functions_overloaded.cpp)
  - [35 - Function template](libs/35-function_template.cpp)
  - [36 - Recursion](libs/36-recursion.cpp)
  - [37 - Static functions](libs/37-functions_static.cpp)
  - [38 - Const member functions](libs/38-function_const.cpp)

### 6. Pointers and dynamic memory

- **Addresses and pointers**
  - [39 - Memory addresses](libs/39-memory_addresses.cpp)
  - [40 - Pointers](libs/40-pointers.cpp)
  - [41 - Null pointers](libs/41-pointers_null.cpp)

- **Dynamic allocation**
  - [42 - Dynamically allocated memory](libs/42-dynamic_allocated_memory.cpp)

### 7. User-defined types and language features

- **Structs and enums**
  - [43 - Structs](libs/43-structs.cpp)
  - [44 - Passing structs as arguments](libs/44-structs_pass_as_args.cpp)
  - [45 - Enums](libs/45-enums.cpp)

- **Type aliases and namespaces**
  - [46 - `typedef` and `using`](libs/46-typedef_and_using.cpp)
  - [47 - Namespaces](libs/47-namespaces.cpp)

### 8. Object-oriented programming

- **Classes and special member functions**
  - [48 - Classes](libs/48-classes.cpp)
  - [49 - Constructors](libs/49-constructors.cpp)
  - [50 - Overloaded constructors](libs/50-constructors_overloaded.cpp)
  - [51 - Delegating constructors](libs/51-constructors_delegation.cpp)
  - [52 - Destructors](libs/52-destructors.cpp)
  - [53 - Getters and setters](libs/53-getters_setters.cpp)
  - [54 - Friend function](libs/54-friend_function.cpp)
  - [55 - Static variables](libs/55-variables_static.cpp)
  - [56 - Object assignment](libs/56-object_assignment.cpp)

- **Inheritance and polymorphism**
  - [57 - Inheritance](libs/57-inheritance.cpp)
  - [58 - Inheritance and constructors](libs/58-inheritance_constructors.cpp)
  - [59 - Multiple inheritance](libs/59-inheritance_multiple.cpp)
  - [60 - Virtual binding](libs/60-virtual_binding.cpp)

### 9. Files and streams

- **File I/O**
  - [61 - File reading](libs/61-files_reading.cpp)
  - [62 - File writing](libs/62-files_writing.cpp)

### 10. Extras and utilities

- **Utilities**
  - [63 - Random numbers](libs/63-random_numbers.cpp)
  - [64 - Stacks](libs/64-stacks.cpp)

<br>

## Practice scripts
These files live in `scripts/` and extend the main lessons with small projects and games.
They continue the numbering from the core lessons.

- **Numeric utilities and arrays**
  - [65 - Calculator](scripts/65-calculator.cpp)
  - [66 - Temperature conversions](scripts/66-temperature_conversions.cpp)
  - [67 - Binary to decimal](scripts/67-binary_to_decimal.cpp)
  - [68 - Array fill (user input)](scripts/68-array_fill_user_input.cpp)
  - [69 - Array total](scripts/69-array_total.cpp)
  - [70 - Array search](scripts/70-array_search.cpp)

- **Randomness and games**
  - [71 - Random event](scripts/71-random_event.cpp)
  - [72 - Number guessing game](scripts/72-number_guessing_game.cpp)
  - [73 - Rock, paper, scissors](scripts/73-rock_paper_scissors.cpp)
  - [74 - Quiz game](scripts/74-quiz_game.cpp)
  - [75 - Tic-tac-toe](scripts/75-tic_tac_toe.cpp)

- **Mini projects and OOP practice**
  - [76 - Bank](scripts/76-bank.cpp)
  - [77 - Credit card validator](scripts/77-credit_card_validator.cpp)
  - [78 - Inheritance example](scripts/78-inheritance_example.cpp)
  - [79 - Dynamic memory example](scripts/79-dynamic_allocated_memory_example.cpp)


<br>
## How to work through the repo
- **New to C++?** Start at `libs/01-variables.cpp` and work forward in order.
  - Read the code, predict what it does, then run it.
  - Make tiny edits (change values, add extra prints) to see how the behavior changes.

- **Revising a specific topic?** Jump directly to the relevant section in the Learning Path.
  - For example, revisit functions in the 28-31 range or pointers in the 39-42 range.

- **Preparing for exams or interviews?**
  - Skim the core lessons to refresh syntax and key ideas.
  - Then focus on the Practice scripts to apply concepts in slightly larger, yet still contained, programs.

You can treat this repo as a compact reference: each file is small enough to read quickly and focused on a single C++ idea you can build on.