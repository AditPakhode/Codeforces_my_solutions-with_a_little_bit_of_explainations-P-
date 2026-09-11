### Question : -
## A. A. Divisibility Problem
time limit per test
1 second
memory limit per test
256 megabytes

You are given two positive integers a and b. In one move you can increase a by 1 (replace a with a+1). Your task is to find the minimum number of moves you need to do in order to make a divisible by b. It is possible, that you have to make 0 moves, as a is already divisible by b. You have to answer t independent test cases.
Input

The first line of the input contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

The only line of the test case contains two integers a and b (1≤a,b≤109).
Output

For each test case print the answer — the minimum number of moves you need to do in order to make a divisible by b.
Example
Input
5
10 4
13 9
100 13
123 456
92 46

Output
2
5
4
333
0





### solution: -

- So the problem basically states that find the nearest upward multiple of the divisior(b), we have to find the closest upward multiple of the divisor(b).
- We can only move upwards and not reduce the number.
- So what we can do is find the remainder of the dividend(a) and subtract it with the divisor(b) because the length between the smaller multiple of the divisor(b) and the greater multiple of 'b' with respect to 'a' will be 'b'.
- And when we subtract that difference we get the remaining number of increases we need to make 'a' divisble by 'b'.