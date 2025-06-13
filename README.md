# 📚 C++ Concepts: 60 Practical Code Examples

## 01.cpp - Basic Output
- Demonstrates two ways to output text in C++
- Uses `cout` with `endl` and `\n` for new lines
- Simple "Hello world" program showing basic syntax

## 02.cpp - Variables and Scope
- Shows local and global variable usage
- Takes user input with `cin`
- Demonstrates accessing global variables with `::` scope resolution operator

## 03.cpp - Namespaces
- Illustrates namespace creation and usage
- Contains two namespaces (`first` and `second`) each with a `show()` function
- Calls functions from different namespaces using scope resolution

## 04.cpp - Basic Arithmetic
- Simple addition program
- Declares and initializes variables
- Performs calculation and displays result

## 05.cpp - Data Types and Sizes
- Demonstrates fundamental C++ data types:
  - int, float, double, char, string, bool
- Shows memory size of each type using `sizeof()`

## 06.cpp - Type Casting
- Illustrates implicit and explicit type conversion
- Shows conversion between int and double types
- Includes commented-out type identification code

## 07.cpp - Variable Storage Classes
- Demonstrates different variable storage classes:
  - Local (automatic)
  - Global
  - Static
- Shows how to declare and access each type

## 08.cpp - Identifiers and Functions
- Shows identifier naming for variables and functions
- Contains a simple function definition and call
- Combines string variable with function output

## 09.cpp - Operators
- Comprehensive example of C++ operators:
  - Arithmetic (+, -, *, /, %)
  - Relational (>, <, >=, <=, ==, !=)
  - Logical (&&, ||, !)
  - Assignment (+=, etc.)
  - Increment/decrement (++, --)
  - Ternary (?:)
  - Bitwise (&, |, ^)
- Each section is commented out except bitwise operators

## 10.cpp - While Loop and Conditional
- Simple password verification system
- Uses while loop for repeated input
- Conditional check with if-else
- Break statement to exit loop on success

## 11.cpp - Do-While Loop
- Demonstrates a do-while loop with a break statement
- Takes user input for a name and prints it once
- Shows basic loop control flow

## 12.cpp - For Loop (Multiplication Table)
- Generates a multiplication table for a user-input number
- Uses a for loop to calculate and display products from 1 to 10
- Shows formatted output with concatenated strings

## 13.cpp - Simple Conditional (Traffic Signal)
- Basic if statement example
- Checks for "red" signal input
- Demonstrates sequential execution after conditional

## 14.cpp - If-Else Statement (Weather Check)
- Simple if-else conditional
- Checks weather condition input
- Provides different output based on "raining" or other conditions

## 15.cpp - If-Else-If (Tax Calculation)
- Complex conditional structure for tax calculation
- Multiple tax brackets based on amount
- Calculates different tax percentages for different income ranges

## 16.cpp - Nested If (Age Verification)
- Demonstrates nested if statements
- Checks age for organizational work eligibility
- Multiple conditions for different age groups

## 17.cpp - Switch Case (Calculator)
- Simple calculator using switch-case
- Takes two numbers and an operation character
- Performs arithmetic operations based on user choice
- Includes default case for invalid operations

## 18.cpp - Loop Control Statements
- Demonstrates loop control with for loop
- Shows commented-out break and continue examples
- Includes goto statement example
- Also contains a simple addition function

## 19.cpp - Arrays
- Basic array operations
- Shows array declaration and initialization (commented)
- Takes user input for array elements
- Displays array in ascending and descending order
- Accesses individual array elements

## 20.cpp - String Operations
- Comprehensive string manipulation examples
- Demonstrates various ways to handle strings:
  - C-style character arrays
  - C++ string objects
  - getline() for input
  - String operations (push_back, pop_back)
  - String modification (replace, append)
  - String reversal
- Includes commented examples of different string techniques

## 21.cpp - Function Overloading
- Demonstrates function overloading with commented simple `msg()` function
- Shows parameterized version of `msg()` that takes string and integer
- Illustrates how different functions can share the same name with different parameters
- Commented example shows alternative output method (`puts`)

## 22.cpp - Recursive Functions
- Implements factorial calculation using recursion
- Base case (`num==0`) returns 1
- Recursive case multiplies current number with factorial of (num-1)
- Takes user input and displays calculated factorial
- Shows classic example of recursive problem-solving

## 23.cpp - Call by Value
- Demonstrates call-by-value parameter passing
- Changes to parameter inside function don't affect original variable
- Shows function modifying local copy of variable
- Output displays value before, during, and after function call

## 24.cpp - Call-by-Address
- Illustrates call-by-address parameter passing
- Function modifies original variable through pointer
- Uses dereference operator (`*`) to access value at pointer
- Shows how pointers enable functions to modify caller's variables

## 25.cpp - Call-by-References
- Demonstrates call-by-reference variables
- Creates reference `ref` that aliases variable `a`
- Shows operations on call-by-reference affect original variable
- Illustrates reference syntax and behavior

## 26.cpp - Pointer
- Shows multi-level pointer indirection
- Declares pointer `p` to `a` and pointer `q` to `p`
- Prints values and addresses at different indirection levels
- Illustrates how double pointers work in memory

## 27.cpp - Macros
- Uses `#define` for constants and macros
- Defines `PI` as constant and `square` as macro
- Calculates circle area using these definitions
- Shows macro expansion with proper parentheses for safety

## 28.cpp - Unions
- Demonstrates union data structure
- Shares memory between different data types (`int`, `double`, `char`)
- Shows how writing one member affects others
- Illustrates memory-efficient storage for mutually exclusive data

## 29.cpp - Structures
- Defines `Emp` structure with multiple member types
- Shows commented examples of member access and sizing
- Calculates total structure size with `sizeof`
- Demonstrates padding and alignment considerations

## 30.cpp - Exception Handling
- Implements basic banking operations with error checking
- Uses `try-catch` blocks for exception handling
- Throws `invalid_argument` and `runtime_error` exceptions
- Catches exceptions using base `exception` class
- Includes commented example of unhandled runtime error

## 31.cpp - File Handling
- Demonstrates various file operations:
  - File creation (commented)
  - Writing to files (commented)
  - Reading from files (commented)
  - File copying (commented)
  - File deletion (active example)
- Shows error handling for file deletion operation

## 32.cpp - Simple Class (Person)
- Basic class with private attributes (age, name, address)
- Public methods for input and display
- Demonstrates encapsulation by separating interface from implementation
- Shows object instantiation and method calling

## 33.cpp - Local Class
- Defines a class inside a function (`fun()`)
- Shows class usage limited to function scope
- Demonstrates local class with input/output methods
- Called from `main()` to execute the local class functionality

## 34.cpp - Global Class
- Accessible within `A` and derived class `B`
- Hidden from external code
- `B` inherits `input()` and `show()` from `A`
- Extends functionality with `disp()`
- Safeguards data while allowing controlled access

## 35.cpp - Nested Class
- Outer class `A` containing nested class `B`
- Nested class with private data members and public methods
- Demonstrates accessing nested class via scope resolution (`A::B`)
- Shows encapsulation through nested class structure

## 36.cpp - Constructor Basics
- Simple constructor initialization
- Demonstrates two ways of object construction:
  - Direct initialization
  - Assignment after declaration
- Constructor assigns default value to private member

## 37.cpp - Default Constructor
- When `A obj` is declared, the default constructor `A()` is invoked.
- It initializes the private member `a` to 100.
- The value is printed immediately during object creation.

## 38.cpp - Parameterized Constructor
- Constructor that takes parameters for initialization
- Demonstrates object creation with arguments
- Shows member initialization in constructor

## 39.cpp - Copy Constructor
- Contains both parameterized and copy constructors
- Demonstrates object copying mechanism
- Shows deep copy implementation for member variables
- Compares original and copied objects

## 40.cpp - Types of Constructors
- Class with three constructor types:
  - Default constructor (takes user input)
  - Parameterized constructor
  - Copy constructor
- Demonstrates constructor overloading
- Shows different object instantiation methods

## 41.cpp - Encapsulation
- Demonstrates private member access through public methods
- Shows private method (`show()`) called from public method (`setValue()`)
- Illustrates proper encapsulation with private data member (`age`)
- Public member (`name`) accessed directly from main

## 42.cpp - Polymorphism (Compile-time and Run-time)
- **Compile-time Polymorphism**:
  - Function overloading with `showInfo()` for different parameter types
  - Resolved at compile time based on argument types
- **Run-time Polymorphism**:
  - Method overriding in inheritance hierarchy
  - Base class `A` and derived class `B` with `disp()` methods
  - Dynamic method dispatch based on object type

## 43.cpp - Private Access
- Class `A` declares private members `a` and `b`
- Friend class `B` grants `B` special access to `A`'s private data
- `B::disp()` modifies `A`'s private data via object reference
- Output shows original (`A::show()`) vs. modified (`B::disp()`) values

## 44.cpp - Protected Access
- Base class `A` with protected members (`a`, `b`)
- Derived class `derive` accessing and modifying protected members
- Shows protected member accessibility in derived classes
- Demonstrates method overriding and extension

## 45.cpp - Public AcceSS
- Class declaration with member function prototype
- `show()` method defined outside class using scope resolution
- Demonstrates separating interface from implementation
- Shows public member variable access and modification

## 46.cpp - Inheritance
- Base class `father` with protected member (`surname`)
- Two derived classes (`son1` and `son2`) inheriting from `father`
- Each derived class adds its own private members (`name`)
- Demonstrates shared base class characteristics

## 47.cpp - Single Inheritance
- Base class `base` with private members and input/output methods
- Derived class `derive` extending functionality with new members
- Shows both inherited and new functionality in derived class
- Illustrates method chaining in inheritance

## 48.cpp - Multi-level Inheritance
- Three-level inheritance chain: `base` → `derive1` → `derive2`
- Each level adds new private members and methods
- Demonstrates progressive specialization
- Shows accumulated functionality through inheritance levels

## 49.cpp - Multiple Inheritance
- Derived class `derive` inheriting from two base classes (`base1` and `base2`)
- Each class has its own private members and methods
- Demonstrates combining functionality from multiple base classes
- Shows potential method naming conflicts (note: contains typo in method call)

## 50.cpp - Hierarchical Inheritance
- Base class `base` (note typo in code) with common functionality
- Two derived classes (`derive1` and `derive2`) with specialized features
- Shows different specializations from same base class
- Demonstrates independent evolution of derived classes

## 51.cpp - Hybrid Inheritance (Diamond Problem Solution)
- Demonstrates hybrid inheritance to solve the diamond problem
- Base class `A` inherited virtually by `B` and `C`
- Class `D` inherits from both `B` and `C`
- Ensures only one copy of base class `A` exists in `D`
- Note: Contains typo (`viod` instead of `void`)

## 52.cpp - Function Overloading
- Shows compile-time polymorphism through function overloading
- Class `A` contains two `fun()` methods with different parameters
- Demonstrates how different implementations are called based on arguments
- One version uses class members, the other uses parameters

## 53.cpp - Functions Overriding
- Illustrates runtime polymorphism using function Overriding
- Base class `A` with virtual `fun()`
- Derived class `B` overrides `fun()`
- Shows pointer-to-base calling derived class method
- Includes commented example of explicit base class method call

## 54.cpp - Abstraction
- `Car` class with engine state management
- Private member `startEngine` tracks car state
- Methods `start()` and `drive()` depend on engine state
- Demonstrates basic abstraction behavior
- Note: Missing semicolon in `drive()` method

## 55.cpp - Abstract Class
- Shows abstract base class with pure virtual function
- Class `A` cannot be instantiated (`show() = 0`)
- Derived class `B` implements the pure virtual function
- Demonstrates polymorphism through base class pointer

## 56.cpp - Inline Function
- Demonstrates inline function for finding maximum of three numbers
- Uses nested ternary operators
- Shows performance optimization for small, frequently-called functions
- Inline suggestion to compiler for function expansion

## 57.cpp - Friend Function
- Illustrates friend function accessing private members of two classes
- Classes `Ankit` and `Ankush` declare `rohit()` as friend
- Friend function accesses and sums private `money` members
- Demonstrates cross-class access through friendship

## 58.cpp - Friend Class
- Class `B` declared as friend of class `A`
- `B` can access private members of `A` (`a` and `b`)
- Shows friend class implementation
- Demonstrates how friendship breaks encapsulation selectively

## 59.cpp - Templates
- **Function Template**:
  - Generic `show()` function works with any type `T`
  - Demonstrated with int, float, and char types
- **Class Template**:
  - `Show` class template with type `T` members
  - Constructor and method work with any type
  - Demonstrated with int type (other types commented)
- Note: Contains duplicate `main()` functions

## 60.cpp - Static Class Members
- Demonstrates static data member (`b`) and static method (`disp()`)
- Static member shared across all class instances
- Shows static member initialization outside class
- Illustrates that static methods can only access static members
- Note: Contains object redefinition in `main()`
