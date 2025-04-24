# V.impp Question with Many new Concepts

![alt text]({E2A2F713-E4EB-4D84-8D5E-85812CD70491}.png)

# Approach

![alt text]({C9E27D93-BBD6-4CEE-85F8-C9E0C8F00A62}.png)

##Note - 

1. The use of accumulate for calculating the tsum

![alt text]({9009053C-1240-4041-8FBD-DF14D89B664F}.png)


2. 
![alt text](image-1.png)

    Here acc to constraint the value of the array is always positive therefore we can simply use sliding window and shrink the window from the left.However if constraints include negative values then we must use map for calculating the longest subarray with sum equals to tsum-x

    The Solution for negative constraint is given below - 

![alt text]({0AD159B4-7220-4FE1-91B6-A465BB9B4035}.png)