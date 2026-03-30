

# Valid Anagram

## 🧠 Problem Statement
Given two strings `s1` and `s2`, return `true` if `s2` is an anagram of `s1`, otherwise return `false`.

An anagram is formed by rearranging the characters of a string such that both strings contain the same characters with the same frequency.

---

## 🔍 Examples

```
Input: s1 = "listen", s2 = "silent"
Output: true
```

```
Input: s1 = "rat", s2 = "car"
Output: false
```

---

## 🚀 Approaches

---

### 🟥 1. Sorting Approach

#### 💡 Idea:
Sort both strings and compare them.

#### 🔧 Logic:
- Sort `s1`
- Sort `s2`
- If both are equal → anagram

#### ⏱ Complexity:
```
Time: O(n log n)
Space: O(1)
```

#### ❌ Drawback:
- Sorting is expensive
- Not optimal

---

### 🟩 2. Optimal Approach (HashMap) ⭐

#### 💡 Idea:
Use a hashmap to count characters of `s1` and cancel them using `s2`.

---

## 🧠 Core Logic

```
Step 1: Count frequency of characters in s1  
Step 2: Decrease frequency using s2  
Step 3: If any count < 0 → not anagram  
Step 4: If all balanced → anagram
```

---

## 🔧 Code Explanation

```cpp
unordered_map<char, int> freq;
```

👉 Stores:
```
character → frequency
```

---

### 🔹 Step 1: Count characters in s1

```cpp
for(char c : s1){
    freq[c]++;
}
```

---

### 🔹 Step 2: Subtract using s2

```cpp
for(char c : s2){
    freq[c]--;
    if(freq[c] < 0){
        return false;
    }
}
```

---

## 🧠 Why `freq[c] < 0`?

```
It means s2 is using more of a character than s1 has
→ invalid anagram
```

---

## 🔥 Example Dry Run

```
s1 = "aab"
s2 = "abb"
```

After s1:
```
a:2, b:1
```

Processing s2:
```
a → 2→1
b → 1→0
b → 0→-1 ❌
```

👉 Not anagram

---

## ⏱ Complexity

```
Time: O(n)
Space: O(n)
```

---

## 🧠 Pattern Recognition

| Situation | Approach |
|----------|--------|
| Compare characters | Sorting |
| Count frequency | HashMap |
| Match/cancel strings | Increment + Decrement Pattern |

---

## 🔥 Key Insight

```
Instead of comparing two strings,
cancel them out using frequency
```

---

## 🎯 Interview Tip

Say this:

> "We use a hashmap to count characters of the first string and decrement using the second string. If any count becomes negative, the strings are not anagrams."

---

## 💯 Final Takeaway

```
Anagram problems = Frequency matching problems
```

```
Increment (s1) + Decrement (s2) → Check balance
```