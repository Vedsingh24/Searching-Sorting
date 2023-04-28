# Searching-Sorting
Searching and Sorting is an essential tool for data management. One cannot do much with data without having a way to look for specefic data and conversely, having  data arranged in desirable ways to make searching easier. There are many different ways to search and sort data. The ways to sort data we will be covering in this repository will be the following:
# Bubble Sort 
Algorithm:
1. At pass 1 :  Number of comparisons = (n-1)
2. At pass 2 :  Number of comparisons = (n-2)
3. At pass 3 :  Number of comparisons = (n-3)Number of swaps = (n-3)
4. At pass n-1 :  Number of comparisons = 1
                        Number of swaps = 1

Now , calculating total number of comparison required to sort the array
= (n-1) + (n-2) +  (n-3) + . . . 2 + 1
= (n-1)*(n-1+1)/2  { by using sum of N natural Number formula }= n (n-1)/2  
# Insertion Sort
Algortihm:
 1. To sort an array of size N in ascending order: 
 2. Iterate from arr[1] to arr[N] over the array. 
 3. Compare the current element (key) to its predecessor. 
 4. If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
  # Selection Sort 
 Algorithm
 1. Set min to the first location
 2. Search the minimum element in the array
 3. swap the first location with the minimum value in the array
 4. assign the second element as min.
 5. Repeat the process until we get a sorted array.
 # Searching
 We will cover two types of searching techniques:
 1. Linear Searching
 2. Binary Searching
 # Linear Searching
 Algortihm:
 1. Set i to 1
 2. if i > n then go to step 7
 3. if A[i] = x then go to step 6
 4. Set i to i + 1
 5. Go to Step 2
 6. Print Element x Found at index i and go to step 8
 7. Print element not found
 8. Exit
 # Binary Searching
 Algortihm:
 1. Set two pointers, start and end, to the first and last indices of the array, respectively.
2. Calculate the middle index by taking the average of start and end: mid = (start + end) / 

3. Check if the middle element of the array is equal to the target value:
 If it is, return the index of the middle element.
 If it is not, compare the target value with the middle element:
 If the target value is less than the middle element, set end = mid - 1 (since the target     value must be in the left half of the array).
 If the target value is greater than the middle element, set start = mid + 1 (since the       target value must be in the right half of the array).
4. Repeat steps 2-3 until either the target value is found or start is greater than end. If    start is greater than end, the target value is not in the array, so return -1 (or any      other value that indicates the target value was not found).
