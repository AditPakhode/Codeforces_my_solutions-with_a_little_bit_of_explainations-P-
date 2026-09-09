### Question : -
## A. Stones on the Table
time limit per test
2 seconds
memory limit per test
256 megabytes

There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.
Input

The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the table.

The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.
Output

Print a single integer — the answer to the problem.
### Examples
Input
3
RRG

Output
1

Input
5
RRRRR

Output
4

Input
4
BRBG

Output
0



### solution: -

- Save the first rock's colour and then compare it with the next rock's colour.
- If the colour's not same change saved colour's colour to the current colour.
- If the colour of saved rock is same as current rock's remove the current rock by increasing remove and keep the saved rock's colour unchanged
- I recommend you do a dry run of my explaination with a simple example(any one from above is fine as well).
- You get the intuition in the first try. ALL THE BEST!! :P