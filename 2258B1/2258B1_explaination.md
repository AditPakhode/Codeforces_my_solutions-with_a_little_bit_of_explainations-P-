### Question : -
## B. B1. Carrot Chopdown (Easy Version)
time limit per test
1 second
memory limit per test
256 megabytes

This is the easy version of the problem. The difference between the versions is that in this version, you only need to solve the problem for k=1. You can hack only if you solved all versions of this problem.

Alp loves carrots. Since he hasn't eaten lunch yet, he wants to buy a carrot salad to eat outside. However, he has a weird obsession: all the carrots must be the exact same length; otherwise, the salad doesn't look aesthetically pleasing to him. Since he is in the middle of the street and doesn't have a knife, he can't cut the carrots himself. You need to divide all the carrots using your machine and sell them to Alp.

You are given n delicious carrots with sizes a1,a2,…,an. You are also given a cutting machine, which works as follows.

    For each operation, you choose a set of carrots (you can choose chopped carrots again) and a positive integer x (not necessarily the same for each operation).
    After that, consider every chosen carrot, let its length be l. If l≤x, this carrot is unaffected; otherwise, it is divided into two carrots of sizes x and l−x. 

We'll sell some of the final carrots to an interesting guy who wants them all to be the same length.

We are asking you to determine the maximum number of carrots we can sell after using this machine exactly k times. Solve the problem for only k=1.
Input

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤104). The description of the test cases follows.

The first line of each test case contains n and m (1≤n,m≤2⋅105), denoting the number of carrots and the maximum possible length of a carrot.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤m), denoting the initial carrot sizes.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105 and the sum of m over all test cases does not exceed 2⋅105.
Output

For each test case, output a single integer — the answer for k=1.
Example
Input
Copy

6
5 4
1 2 3 4 4
5 8
1 1 8 8 8
1 8
6
7 9
1 7 5 1 7 5 3
4 1
1 1 1 1
3 5
3 1 5

Output
Copy

6
6
2
7
4
3

Note

In the first test case, the given carrots are [1,2,3,4,4].

For k=1, it is best to choose x=2 with the set [2,3,4,4]. After the operation, we'll get [1,2,2,1,2,2,2,2]. We can sell 6 carrots of length 2.

### solution: -

- So, the answer is simple you have to find the number of carrots whose length it greater than 'i' ('i' is any number between 1 and maximum length of carrot 'm'), and increase the count if it is greater and the remaining half which is 'a'-'i' == 'i' as well('a' is the length of that particular carrot 'a' is given in the array you have to extract it row-wise).
- My brute-force solution as mentioned in @2258B1_attempt1.cpp is also correct but it contains double 'for- loop' which gives TLE.
- So I had to use vectors and hashtable for this problem.
- Both the solutions are the same '2*i' is just 'a' (send 'i' to the otherside in the equation a-i = i you get a = 2*i and it check for freq in the array and adds that many times 2*i occurs).
- The freq vector is the hashtable and suffix vector is the suffix sum of elements from idxth index to mth index. This is O(1) retrieval of the all elements in the array greater than 'i' length, so that it completely eliminates the need for a loop here.