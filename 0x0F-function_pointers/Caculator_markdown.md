# Caculator program with C

```markdown
# Calc program Algorithim
## LIBRARIES: <stdio.h> <stdlib.h> "3-calc.h" <string.h>
### main.c (Entry point of program) - FILE 1
- Description: Program that performs arithmetic operations
- INPUT : gets 'num1', 'num2', and 'operator' from use
- OUTPUT: Prints result of operation stored in 'calc' and newline
- protype: main(int argc, char **strarg)

- **// declare variables:**
- int num1 - stores first number strarg[1]
- int num2 - stores second number strarg[3]
- int calc -  stores result of operation
- char **operator - string with symbol to be checked, strarg[2]
- int (*calculate)(int, int); - pointer to function that accepts return of
  get_op_fun() and makes a call to appriopriate.

**// check for invalid no of arguments**
- IF (argc != 4)
    - print ERROR and exit(98) from function
- convert num1, num2 to integers; atoi(strarg[1]); atoi(strarg[3])

**// check for valid INPUTS and operator**
#### HOW do you check through an array of structures inside get_op_func.c?
- search throuch array of struct - calulate = get_op_func(operator);
     - if operator isn't found, IF (calculate == NULL)
     - printf Error and exit(99);
- othewise, **// check for 0 when using / or % operator**
- IF (operator[0] == '/' || '%') && num2 == 0
    - PRINT Error and exit(100) from function
- call required function to get result, calc = calculate(num1, num2);
- PRINT value of 'calc' with newline

### get_op_func.c - FILE 2
- Description: searches and selects the correct function to
  perform the operation asked by the user.
- INPUT: pointer to the operator string, s
- OUTPUT: function pointer that points to various operation functions.
- Prototype: int (*get_op_func(char *s))(int, int);

- **// declare variables:**
- initialize loop variable, i
- initialize array of struct, op_t op[];
- iterate array for valid operations defined, WHILE (i < 6 && ops[i].op != NULL)
    - Is there a match? - IF (strcmp(s, ops[i].op) == 0)
        - YES 's' matches, return (pointer to that function)
    - i++
- NO match found, return NULL i.e return (ops[i].f);

### op_functions.c (stores code instructions for operation function) - FILE 3

- fuction int op_add(int a, int b);
    - return (a + b);

- int op_sub(int a, int b);
    - return (a - b);

- int op_mul(int a, int b);
    - return (a * b);

- int op_div(int a, int b);
    - return (a / b);

- int op_mod(int a, int b);
    - return (a % b);

### 3-calc.h - FILE 4
```