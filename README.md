# 42-push_swap 🧮
* [Description](#Description)
* [Usage](#Usage)
* [Features](#Features)

# Description
This project involves sorting data on a stack, with a limited set of instructions, and the smallest number of moves.
To make this happen, it will involve to manipulate various sorting algorithms and choose the most appropriate solutions for optimized data sorting.

# Usage

1. Clone the repo `git clone git@github.com:zcanales/42-push_swap.git`
3. Compile Push Swap `make`
4. Run `./push_swap 0 2 3 1` or  `./push_swap "0 2 3 1"`

# Features

- There are 2 stacks named a and b.
- At the beginning:
  - The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
  - The stack b is empty.
-  The goal is to sort in ascending order numbers into stack a. To do so there are the following operations:
    - sa (swap a): Swap the first 2 elements at the top of stack a.
    - sb (swap b): Swap the first 2 elements at the top of stack b.
    - ss : sa and sb at the same time.
    - pa (push a): Take the first element at the top of b and put it at the top of a.
    - pb (push b): Take the first element at the top of a and put it at the top of b.
    - ra (rotate a): Shift up all elements of stack a by 1.
    - rb (rotate b): Shift up all elements of stack b by 1.
    - rr : ra and rb at the same time.
    - rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
    - rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
    - rrr : rra and rrb at the same time.
