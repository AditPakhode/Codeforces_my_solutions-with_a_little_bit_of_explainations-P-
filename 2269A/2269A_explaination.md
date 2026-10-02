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

- You check the corresponding first and last then second and second last elements and so on. If the last elements in the array are not equal then ..
- If any one is equal to the character given to us then only one of the two characters in the string will change so increase ans by 1. 
- If the above is not the case then you would have to change both of the characters in the array which would increase ans by 2.
- If both the characters are equal then there's no need to do anything..