### Question : -
## A. FizzBuzz Remixed
time limit per test
1 second
memory limit per test
512 megabytes

FizzBuzz is one of the most well-known problems from coding interviews. In this problem, we will consider a remixed version of FizzBuzz:

Given an integer n, process all integers from 0 to n. For every integer such that its remainders modulo 3 and modulo 5 are the same (so, for every integer i such that imod3=imod5), print FizzBuzz.

However, you don't have to solve it. Instead, given the integer n, you have to report how many times the correct solution to that problem will print FizzBuzz.
Input

The first line contains one integer t (1≤t≤104) — the number of test cases.

Each test case contains one line consisting of one integer n (0≤n≤109).
Output

For each test case, print one integer — the number of times the correct solution will print FizzBuzz with the given value of n.
Example
Input
Copy

7
0
5
15
42
1337
17101997
998244353

Output
Copy

1
3
4
9
270
3420402
199648872

Note

In the first test case, the solution will print FizzBuzz for the integer 0.

In the second test case, the solution will print FizzBuzz for the integers 0,1,2.

In the third test case, the solution will print FizzBuzz for the integers 0,1,2,15.




### solution: -

The key observation in this problem is that, if you pick two integers x and x+15, both their remainders modulo 3 and modulo 5 are the same. So, the number of integers we need to count in [0,14] is the same as in [15,29], the same as in [30,44], and so on.

So, you can calculate the number of segments of length 15 starting from 0 before n (which is ⌊n15⌋), multiply it by the number of values we need in [0,14], and then process the last (partial) segment naively, since it will contain at most 15 elements.

Time complexity: O(1).