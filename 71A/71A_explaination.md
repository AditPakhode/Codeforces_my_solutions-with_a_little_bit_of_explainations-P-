###Question : -
##A. Way Too Long Words
time limit per test
1 second
memory limit per test
256 megabytes

Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.
Input

The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.
Output

Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.
Examples
Input
4
word###solution: -

-So the answer is simpole conditional statment nothing really..
-You just have to add all of the three options and check if they are >=2 (atleast 2). If they are increased the solved_problem value and return it. :P
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

Output
word
l10n
i18n
p43s

###solution: -

-So the solution to this question is very easy to think about write out the first letter then the length of the word except the first and last letter are to be excluded from the length (i.e. word.length()-2 ()) then the last letter.
-The thing that was hard for me is the part of how you handle concatenation in c++ (if you do this in any other language just skip ahead). So the interesting part about c++ is that it handles all the indexing in terms of pointers which makes harder to explicitly convert numbers to string (unlike java where it's just a single line). The pointer makes it harder for separate string to concatenate when there's a string inside. I recommend you to learn pointers and strings before solving this question as I learnt this the hard way, :'( 