### Question : -
## A. Be Positive
time limit per test
1 second
memory limit per test
256 megabytes

Given an array a of n elements, where each element is equal to −1, 0, or 1. In one operation, you can choose an index i and increase ai by 1 (that is, assign ai:=ai+1). Operations can be performed any number of times, choosing any indices.

The goal is to make the product of all elements in the array strictly positive with the minimum number of operations, that is, a1⋅a2⋅a3⋅…⋅an>0. Find the minimum number of operations.

It is guaranteed that this is always possible.
Input

Each test consists of several test cases.

The first line contains one integer t (1≤t≤104) — the number of test cases. The description of the test cases follows.

The first line of each test case contains one integer n (1≤n≤8) — the length of the array a.

The second line contains n integers a1,a2,…,an, where −1≤ai≤1 — the elements of the array a.
Output

For each test case, output one integer — the minimum number of operations required to make the product of the elements in the array strictly positive.
Example
Input

3
3
-1 0 1
4
-1 -1 0 1
5
-1 -1 -1 0 0

Output

3
1
4

Note

In the first test case: from [−1,0,1], you can obtain [1,1,1] in 3 operations.

In the second test case: it is enough to perform 0→1 (1 operation). In the resulting array a=[−1,−1,1,1], the product of all elements is 1.

In the third test case: turning two zeros into ones (2 operations), and one −1 into 1 (another 2 operations), for a total of 4.


### solution: -

- So this question is really easy.. count the number of '-1' s and '0' s in the array for the product to be positive the number of -1's should be even to cancel each other out if it is odd we need to make that '-1' to 1 which will take 2 steps. Also all the zeroes will zero out the product always so we need to change all '0's to '1's so that will take 1 step. So the total steps taken will result in '((count_neg%2)*2 + count_zero)"