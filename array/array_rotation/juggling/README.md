# Juggling Algorithm

In this we will swap selective array indexes based on the [GCD](https://en.wikipedia.org/wiki/Greatest_common_divisor)(or HCF) of the total number of elements in array and the number with which rotation needs to happen. In the above example we have 12 total number of elements in the array and the array needs to be moved left by 3 elements.

Input:
|1|2|3|4|5|6|7|8|9|10|11|12|

Output:
|4|5|6|7|8|9|10|11|12|1|2|3|

First, we will find the highest common factor  which divides 12 and 3. In our case it will be 3.

What does this HCF tell us?

The HCF tell us that in 3(which is the HCF) iteration the numbers in the array can be arranged as desired.

Let us see how.

1. First Iteration:

Number at index 0, 3, 6, 9 will moved to left in a way so that the output will be as below:
|4|2|3|7|5|6|10|8|9|1|11|12|

2. Second Iteration

Number at index 1, 4, 7, 10 will moved to left in a way so that the output will be as below:
|4|5|3|7|8|6|10|11|9|1|2|12|

3. Third Iteration

Number at index 2, 5, 8, 11 will moved to left in a way so that the output will be as below:
|4|5|6|7|8|9|10|11|12|1|2|3|

Hence the rotation of array is using GCD is done.

For more information and learning checkout geeksforgeeks array rotation [here](https://www.geeksforgeeks.org/array-rotation/)
