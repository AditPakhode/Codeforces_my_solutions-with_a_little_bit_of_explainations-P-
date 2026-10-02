### Question : -
## A. SauSaGe Bank
time limit per test
1 second
memory limit per test
256 megabytes

Everyone in SauSaGe City is talking about its famous bank that offers a seemingly impossible deal:

"Leave your money with us, and we'll double it every single day!"

Hamed decides to give it a try, so he deposits 1 dollar into his account.

Suppose that at the beginning of a day, his bank balance is x dollars. Every day, the following events happen in order:

    In the morning, the bank magically doubles his balance, so it becomes 2x dollars.
    At night, Hamed may choose to withdraw all of the money from his bank account. If he does, the withdrawn amount is added to his card, and his bank account is immediately reset to 1 dollar so that the doubling process can begin again the next day. Otherwise, he leaves the money in the bank. 

Unfortunately, this incredible bank will remain open for exactly n days before shutting down forever.

Hamed wants to withdraw money on exactly k different days before the bank closes. Determine the maximum amount of money that can be on Hamed's card after the n-th day.
Input

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤500). The description of the test cases follows.

The only line of each test case contains the two integers n and k (1≤k≤n≤30).
Output

For each test case, print a single integer — the maximum amount of money that can be on Hamed's card after the n-th day.
Example
Input

5
1 1
2 1
4 3
5 5
10 2

Output

2
4
8
10
514

Note

In the first test case, his bank balance becomes 2 on the first day, and he chooses to withdraw it.

In the second test case, he can withdraw his money on the 2-nd day.

In the third test case, he can withdraw his money on the 1-st, 3-rd, and 4-th days. He receives 2, 4, and 2, respectively.



### solution: -

If Hamed waits d days before withdrawing, the amount of money in his card increases by exactly 2d.

Therefore the problem becomes: Split n into exactly k positive integers a1,…,ak, and maximize
2a1+2a2+...+2ak

For fixed a+b, 2a+2b is larger when one of them is as large as possible.
#### Proof

{ Suppose two segment lengths are a≤b, with a>1. Move one day from the smaller segment to the larger one:
(a,b)→(a−1,b+1)

Compare the contributions:
2a−1+2b+1−(2a+2b)=2b−2a−1>0

So this change always increases the answer.

Hence, in an optimal solution, we cannot have two segments with length greater than 1. We keep transferring days from smaller segments to the largest one until all but one segment have length 1.

Thus the optimal lengths are
n−k+1,1,1,…,1(k−1 times) }

So the maximum amount is 2^(n−k+1)+2*(k−1)