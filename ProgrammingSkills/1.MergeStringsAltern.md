# Merge Strings Alternately

## Problem Description

You are given two strings `word1` and `word2`. Merge the strings by adding letters in alternating order, starting with `word1`. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

## Examples

### Example 1

```text
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
```

**Explanation:** The merged string will be merged as so:

```text
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
```

### Example 2

```text
Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
```

**Explanation:** Notice that as word2 is longer, "rs" is appended to the end.

```text
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
```

### Example 3

```text
Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
```

**Explanation:** Notice that as word1 is longer, "cd" is appended to the end.

```text
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d
```

## Constraints

- `1 <= word1.length, word2.length <= 100`
- `word1` and `word2` consist of lowercase English letters.

## Solution

### Approach

The solution uses a two-pointer approach to merge the strings alternately:

1. Use two pointers `i` and `j` to track positions in `word1` and `word2` respectively
2. While both pointers are within bounds, alternately add characters from both strings
3. After the loop, append any remaining characters from the longer string

### Time Complexity

- **Time:** O(n + m) where n and m are the lengths of word1 and word2
- **Space:** O(n + m) for the result string
