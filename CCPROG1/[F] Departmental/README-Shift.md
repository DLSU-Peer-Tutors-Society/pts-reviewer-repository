# **Hands-On 03: Display Sequence**
## I. Introduction
The digits of a number can be shifted, depending on
its shift value. Generally, the shifting of digits
where the shift value is positive, follows this rule:

$$0 \to 1 \to 2 \to 3 \to 4 \to 5 \to 6 \to 7 \to 8 \to 9 \to 0$$

If the shift value is negative, the direction is done
in reverse:

$$0 \leftarrow 1 \leftarrow 2 \leftarrow 3 \leftarrow 4 \leftarrow 5 \leftarrow 6 \leftarrow 7 \leftarrow 8 \leftarrow 9 \leftarrow 0$$

If we were to shift the number `124809` by `-4` and `5` units, the results would be `780465` and `679354`, respectively.

## II. Task
Your task is to create the function `shift()`, taking
the input to be shifted (`nInput`) and the shift value
(`nShift`). The function will return the shifted value.

A maximum of **ONE** function can be created (aside from
`shift()` or `main()`) to aid in solving the problem.

You **CANNOT** touch the `main()` function.

## III. Sample Test Cases
These are sample test cases that can be used to simulate the program and check the correctness of the program.

```
TEST CASE 01
---
Input Number: 127509
Shift Number: 4
Shifted Number: 561943
```
```
TEST CASE 02
---
Input Number: 127509
Shift Number: -4
Shifted Number: 783165
```
```
TEST CASE 03
---
Input Number: -127509
Incorrect Input!
Input Number: -1
```