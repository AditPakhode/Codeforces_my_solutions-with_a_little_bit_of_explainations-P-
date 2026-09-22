### Question : -
## A. Yes or Yes
time limit per test
1 second
memory limit per test
256 megabytes

Last Christmas, your friend Fernando gifted you a string s consisting only of the characters Y and N, representing "Yes" and "No", respectively.

You can repeatedly apply the following operation on s:

    Choose any two adjacent characters and replace them with their logical OR. 

Formally, in each operation, you can choose an index i (1≤i≤|s|−1), remove the characters si and si+1, then insert:

    A single Y if at least one of si or si+1 is Y;
    A single N if both si and si+1 are N. 

Note that after each operation, the length of s decreases by 1.

Unfortunately, Fernando does not want you to combine "Yes OR Yes", as he has experienced trauma relating to a certain song.

Determine whether it is possible to reduce s to a single character by repeatedly applying the operation above, without ever combining two Y's.
Input

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤500). The description of the test cases follows.

The only line of each test case contains the string s (2≤|s|≤100). It is guaranteed that si=Y or N.
Output

For each test case, print "YES" if the string can be reduced to a single character by repeatedly applying the described operation, and "NO" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.
Example
Input

7
YY
NN
NNY
YYYNY
NNNNN
YYYYYY
YNNNNN

Output

NO
YES
YES
NO
YES
NO
YES

Note

In the first test case, you cannot combine s1 and s2 since they are both Y. Thus, the answer is NO.

In the third test case, the following is a valid sequence of operations: NN–––Y→NY–––→Y. Thus, the answer is YES.

In the fourth test case, there are two possibilities for the first operation: YYYN–––Y→YYYY or YYYNY–––→YYYY. However, in either case, it is not possible to perform any more operations without combining two Y's. Thus, the answer is NO.

In the fifth test case, the following is a valid sequence of operations: NNN–––NN→NN–––NN→NNN–––→NN–––→N. Thus, the answer is YES.

7
7




### solution: -

In any operation, there are two things we are allowed to do:

    Convert a 'Yes' and a 'No' into a 'Yes'
    Convert two 'No's into a 'No' 

In either operation the number of 'Yes's remains unchanged.

This means that if we start with at least two 'Yes's, then the final state must contain at least two 'Yes's, and cannot be a single character.

On the other hand, if we start with at most one 'Yes', then any operation we do will be legal, as there will not be two 'Yes's to combine. This means we can do any n−1 operations, and we will be left with a single character.

Thus, the answer to the question is 'Yes' if and only if the input string contains at most one 'Y'. 