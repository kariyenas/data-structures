# Reversal Algorithm

This is another way to rotate array. Here we divide the array into two parts
based on the number of elements the array needs to be rotated by. Lets consider
the below scenario:

**Input:**

|1|2|3|4|5|6|7|8|9|10|11|12|

**Output:**

|4|5|6|7|8|9|10|11|12|1|2|3|


Here the array needs to rotated left  by 3 elements.

**Steps:**

1. **Break the array into two parts**

|Part 1|Part 2|
|------|------|
|1,2,3|4,5,6,7,8,9,10,11,12|

2. **Reverse the Part 1**

|Part 1|Part 2|
|------|------|
|3,2,1|4,5,6,7,8,9,10,11,12|

3. **Reverse the Part 2**

|Part 1|Part 2|
|------|------|
|3,2,1|12,11,10,9,8,7,6,5,4|

4. **Combine Part 1 and Part 2 and reverse the whole printArray**

|4,5,6,7,8,9,10,11,12,1,2,3|
