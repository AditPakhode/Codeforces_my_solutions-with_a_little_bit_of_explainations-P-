### Question : -
## A. Sublime Sequence
time limit per test
1 second
memory limit per test
256 megabytes

Farmer John has an integer x. He creates a sequence of length n by alternating integers x and −x, starting with x.

For example, if n=5, the sequence looks like: x,−x,x,−x,x.

He asks you to find the sum of all integers in the sequence.
Input

The first line contains an integer t (1≤t≤100)  — the number of test cases.

The only line of input for each test case is two integers x and n (1≤x,n≤10).
Output

For each test case, output the sum of all integers in the sequence.
Example
Input

4
1 4
2 5
3 6
4 7

Output

0
2
0
4




### solution: -

- There are only 4 cycles present in this summation.
- If n's a multiple of 4n+0 or 4n+2 both will always cancel each other out.
- If n's a multiple of 4n+1 all behind it will cancel out and only one positive 'x' will remain.
- If n's a multiple of 4n+3 all behinf will cancel out and only the negative 'x' will remain.