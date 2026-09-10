### Question : -
## A. Odd Eraser
time limit per test
1 second
memory limit per test
256 megabytes

Given an array a1,a2,…,an, you can apply the following operation any number of times (possibly zero):

    Choose an integer k≥1 such that 2k+1≤m and 2k+1 indices, i1,i2,…,i2k+1 (1≤i1<i2<…<i2k+1≤m), where m is the current length of the array. Then, remove the ik+1-th element from the array. 

Note that after any operation, the length of the array is reduced by one, and the rest of the array is concatenated.

Let b1,b2,…,bm be the remaining array after all operations.

What is the maximum possible value of gcd(b1,b2,…,bm), where gcd of an array of integers denotes the greatest common divisor (GCD) of them?
Input

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤500). The description of the test cases follows.

The first line of each test case contains n (1≤n≤100), denoting the size of the array.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109).
Output

For each test case, output a single integer — the maximum possible value.
Example
Input
4
7
2 4 6 7 8 9 10
2
55 55555
4
1000000 1000 1 1000000000
5
23 32 23 32 23

Output
2
5
1000000
23

Note

In the first test case, the given array is [2,4,6,7,8,9,10].

Choosing indices [1,3,4,6,7] results in the removal of a4=7 and the array [2,4,6,8,9,10].

Then, choosing indices [2,5,6] results in the removal of a5=9 and the array [2,4,6,8,10]. You can't get an answer greater than 2. 



### solution: -

- So, the intuition goes as follows.. we have to find the GCD of the whole array and we can remove exactly one middle element from the array and calculate the GCD again.. we can calcaulate the infinite times as long as we have elements in the array.
- The only element that are definite are the first and last element, All the elements in the middle are removable. Eventually  every element in the array except the first and last element will be removed.
- The lesser the number of elements in the GCD the higher the chances of it being the maximum possible GCD/
- So the my solution only on the first and last elements. If you try to find the GCD including any of the middle element. The GCD will be greater than or equal to GCD of only the first and last element but never greater than it(to confirm my theory perform trial and error and see for yourself).