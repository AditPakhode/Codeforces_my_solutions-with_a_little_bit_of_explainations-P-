### Question : -
## B. String Construction
time limit per test
1 second
memory limit per test
256 megabytes

You are given two integers n and k.

Construct a binary string∗ s of length n, such that both of the following conditions hold:

    The absolute difference between the number of characters 0 and the number of characters 1 in s is at most 1.
    There are exactly k pairs of adjacent equal characters in s. Formally, there are exactly k indices i (1≤i≤n−1) satisfying si=si+1. 

Or determine that no such string exists.

∗A binary string is a string where each character is either 0 or 1.
Input

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤1000). The description of the test cases follows.

The only line of each test case contains two integers n and k (2≤n≤2⋅105, 0≤k≤n−1).

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.
Output

For each test case, output a binary string s of length n — the string you constructed. Print −1 if such a string does not exist.

If there are multiple answers, you may output any of them.
Example
Input

8
5 2
4 3
6 1
5 0
7 3
4 2
3 2
7 4

Output

01110
-1
101001
01010
0100011
0011
-1
0111000

Note

In the first test case, one possible answer is s=01110. It contains three characters 1 and two characters 0, and there are exactly 2 adjacent equal pairs in s: (s2,s3) and (s3,s4).

In the second test case, k=n−1. All characters in s should be equal, so the numbers of characters 0 and 1 could not differ by at most 1. Thus, the answer is −1.

In the third test case, note that 010110 is also a possible answer.




### solution: -

given n and k, build a binary string of length n where the counts of 0s and 1s differ by at most 1, and exactly k adjacent pairs are equal. Print -1 if impossible.

 Impossible case. k == n-1 means every character is equal, so the counts differ by n ≥ 2. That's the only impossible case, and the check is correct.
 Switch to runs. k = n-k converts "equal pairs" into the number of runs, i.e. maximal blocks of identical characters. A string has n-1 adjacent pairs, so n-1-k are different, and runs = different pairs + 1 = n-k.
 Letter counts. c0 = ceil(n/2), c1 = floor(n/2) are how many 0s and 1s to use, which keeps the difference at most 1.
 Build the runs. Alternate between 1 and 0. Every run except the last two is a single character (--c; cout << ...). The last two runs (i+2 > k) use up all remaining 1s and all remaining 0s (while(c--)). This guarantees exactly runs blocks, with the leftovers absorbed at the end.