# **Frog Jump – Revision Notes**

## **Problem Summary**

* Stones placed at sorted positions.
* Frog starts at stone 0 with last jump = 0.
* First jump must be **1 unit**.
* From previous jump `k`, next jump can be:
  **k-1, k, k+1** (must be > 0).
* Goal: reach the last stone.

---

# **Core Idea**

Use **DFS + Memoization (Top-Down DP)**
State defined by:
`dp[currentStoneIndex][lastJump] = canReachEnd?`

We avoid TLE by memoizing `(stone index, last jump)`.

---

# **Key Observations**

* First jump **must be 1** → if `stones[1] != 1`, return false.

* We need the ability to quickly check
  *“Is there a stone at position X?”*
  → use `unordered_map<position, index>`.

* Max stones = 2000 → dp array size = 2001×2001.

---

# **DP State**

```
csi = current stone index
pj  = previous jump size
```

```
dp[csi][pj] = true/false (memo)
```

---

# **Transition**

For next jump:

```
for nextJump in {pj-1, pj, pj+1}:
    if nextJump > 0 AND stone exists at stones[csi] + nextJump:
        recursively check next state
```

---

# **Base Case**

```
if csi == n-1 → reached last stone → return true
```

---

# Final Approach Complexity

* Each state processed once → `O(n²)`
* Checking next stone lookup → `O(1)`
* Total → **Acceptable for n ≤ 2000**

---

# Why Your Iterative Solution Got TLE

* You explored all combinations (3 choices per step)
  → **O(3ⁿ)** brute force.
* No memo on `(stoneIndex, jumpSize)` pair.
* Repeating same states multiple times.

---

# Memoized Version (Your Correct Solution) – Key Points

* Store stone indices in `umpp`
* Use global `dp[2001][2001]`
* DFS + memo
* First jump check
* Works within time limit

---
