### Question : -
## A. You Delete, I Delete
time limit per test
1 second
memory limit per test
256 megabytes

Alice and Bob are given a binary string∗ s of length n. It contains at least one 0 and at least one 1.

They each perform exactly one operation in the following order:

    First, Alice chooses an occurrence of 0 in s and deletes it.
    Then, Bob chooses an occurrence of 1 in the resulting string and deletes it. 

Alice wants the final string to be lexicographically† as large as possible, while Bob wants it to be lexicographically as small as possible. Determine the final string if both players act optimally.

∗A binary string is a string consisting only of the characters 0 and 1.

†For two distinct binary strings a and b of the same length, a is lexicographically smaller than b if, at the first position where they differ, a has the smaller digit.
Input

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤100). The description of the test cases follows.

The only line of each test case contains a binary string s of length n (3≤n≤100).

It is guaranteed that s contains at least one 0 and at least one 1.
Output

For each test case, output the final string if both players act optimally.
Example
Input
Copy

4
101
11001
0010
0101010000010100100101

Output
Copy

1
101
00
01010000010100100101

Note

In the first test case, Alice must delete the only 0. Bob may delete either occurrence of 1, so the resulting string is 1.

In the second test case, Alice may delete either occurrence of 0. Bob optimally deletes one of the first two occurrences of 1, so the resulting string is 101.

In the third test case, Alice may delete any occurrence of 0. Bob then deletes the only occurrence of 1, so the resulting string is 00.
0110––11→011111.



### solution: -

- So the answer is simple, find the first occurance of 1 and 0 and neglect those bits and continue adding the rest of the bits to the new array.
- Remember add to the new array via str.oush_back('1'/'0') function because single strings are passed as characters and characters cannot be appended .append() function expects a string and if you pass character it will throw compilation error.