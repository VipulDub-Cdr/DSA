**Problem**

* You need to climb a staircase of `n` steps.
* Each move you can climb either 1 or 2 steps.
* Find how many distinct ways to reach the top.

**Examples**

* n = 2 → 2 ways: (1+1), (2)
* n = 3 → 3 ways: (1+1+1), (1+2), (2+1)

**Your solution (DP, bottom-up tabulation)**

* Handle base cases: `dp[0] = 1`, `dp[1] = 1`.
* Use a vector `dp` of size `n+1`.
* For `i` from 2 to n: `dp[i] = dp[i-1] + dp[i-2]`.
* Return `dp[n]`.

---

