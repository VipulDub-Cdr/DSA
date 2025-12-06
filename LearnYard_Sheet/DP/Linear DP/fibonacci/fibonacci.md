# **1. Pure Recursive Approach (Top-Down, No Memoization)**

**Function:** `fibonacciRecursive(n)`

* This is the simplest form of recursion.
* For each `n`, it calls:

  * `fibonacciRecursive(n-1)`
  * `fibonacciRecursive(n-2)`
* This causes **repeated recalculation** of the same values many times.
* Time complexity is **exponential → O(2ⁿ)**.
* Very slow for large `n`.

---

# **2. Top-Down Approach with Memoization**

**Functions:** `solve1(n, dp)` + `fibonacciTB(n)`

* This improves the naïve recursion by storing results in `dp[]`.
* When a value of `f(n)` is computed once, it is saved, and future calls reuse it.
* Prevents repeated work.
* Still uses recursion, but now runs in **O(n)** time.
* Memory is `O(n)` due to recursion stack + dp array.

**Process:**

1. Check if answer is already in `dp[n]`.
2. If not, compute using recursion.
3. Store result in `dp[n]`.
4. Return it.

---

# **3. Bottom-Up Approach (Tabulation)**

**Functions:** `solve2(n, dp)` + `fibonacciBT(n)`

* This is an **iterative** approach.
* Instead of recursion, it **builds the dp array from 0 to n**.
* No repeated work and no recursion stack.
* Time: **O(n)**
* Space: **O(n)** (can be optimized to O(1)).

**Process:**

1. Set base values:

   * `dp[0] = 0`
   * `dp[1] = 1`
2. For each `i` from 2 to n:

   * `dp[i] = dp[i-1] + dp[i-2]`
3. Return `dp[n]`.

---

# **Best Approach**

**Bottom-Up Tabulation**

* No recursion
* No overhead
* Fastest and safest for large `n`

---

