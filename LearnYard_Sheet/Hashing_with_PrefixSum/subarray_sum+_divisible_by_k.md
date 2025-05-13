**Qustion**

    Give the count of all the subarray with sum divisible by 
    
**Solution**

Approach-1

    The standard approach is to calculate the sum of all the subarray and then check if that sum is divisibly by k or not.

Approach-2

    Tha another approach involves a concept
    (sum_i - sum_j) % k == 0  →  sum_i % k == sum_j % k

    Toh agar me ese subarrays ke baare me pataa karlu jinke sum ka modulo k same hai sum bol sakte hain 

    So, we count how often a particular mod value (sum % k) appears as we traverse the array.



