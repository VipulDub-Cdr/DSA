**Question** - 
    Given an integer array nums, handle multiple queries of the following type:

    Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
    Implement the NumArray class:

    NumArray(int[] nums) Initializes the object with the integer array nums.    
    int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right])

**Answer**- 

    The first step is to simply do the linear traversal and find the sum between two pointers
    But this will take O(n) time complexity

    The other is to store the sum of all the subarrays in O(n^2) time complexity under the class difinition and then access one of them according to our need which will eventually take O(1) time complexity

    The another and the most efficient approach is prefix sum approach 
    what is prefix?
    array ke starting se jo cheez shuru hoti hai use prefix kehte hai
    what is prefix sum?
    -array me aagay badhte jaana and piche chore gaye elements ka sum store karaate jaana
    arr = {-2,0,3,-5,2,1}
    prefix sum = {-2,-2,1,-4,-2,-1}

![alt text](<Screenshot 2025-03-29 114420.png>)