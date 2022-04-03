Next Permutation Meaning : Given: 1 2 3
It's lexicographic permutations are:  1 2 3
**1 3 2**
2 1 3
2 3 1
3 1 2
3 2 1
Now, If arr= 1 2 3, It's Next Permutation = 1 3 2
​
Now, If arr = 3 2 1, It's Next Permutation = 1 2 3 (1st One)
​
Algorithm: 1) Linearly traverse array from back i.e from right.
2) Check a[i] < a[i+1]  => Index 1
3) a[index2] > a[index1]
4) swap(a[index1], a[index2]
5) reverse (index1 + 1  till last(Right)]
​
Time complexity: O(n) , Space Complexity: O(1)
​
​