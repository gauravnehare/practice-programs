# practice-programs
My practice codes (programming languages I know are C, C++, java, JS &amp; also html, CSS ) 
Description about main.c is as follows :
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix arr is shown below:
1 2 3
4 5 6
9 8 9  
The left-to-right diagonal = 1+5+9 = 15. The right to left diagonal = 3+5+9 = 17. Their absolute difference is |15 - 7| = 2.

Function description:
I declared & defined a function "diagonalDifference".
diagonalDifference takes the following parameter:
int arr_rows: number of rows,
int arr_columns: number of columns, 
int arr[size][size]: an array of integers

Return
int: the absolute diagonal difference

Input Format
The first line contains a single integer, n, the number of rows and columns in the square matrix.

Output Format
Return the absolute difference between the sums of the matrix's two diagonals as a single integer.

Sample Input

number of rows & columns: 3
11  2  4 
 4  5  6 
10  8 -12

Sample Output
15

Explanation:
The primary diagonal is:
11
   5
     -12
Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:
     4
   5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19
Difference: |4 - 19| = 15

Note: |x| is the absolute value of x, i.e sum should not be negative.
