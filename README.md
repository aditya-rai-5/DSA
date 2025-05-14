# 🚀 My DSA Journey in C++

Welcome to my personal DSA (Data Structures and Algorithms) journey! This repository captures my consistent practice of solving algorithmic problems in **C++**, guided by both curiosity and a drive to excel as an AI engineer and entrepreneur.

---

## 🧠 Why This Repository?

* **Solidify Fundamentals**: Reinforce core data structures and algorithms concepts.
* **Structured Growth**: Maintain a clear roadmap and weekly goals.
* **Skill Showcase**: Demonstrate problem-solving ability for interviews and collaborations.
* **Reflect & Iterate**: Track progress, identify gaps, and refine strategies.

---

## 📂 Repository Structure

```
solutions/           # C++ solutions organized by topic
  ├── arrays/
  │     ├── two_sum.cpp
  │     └── max_subarray.cpp
  ├── strings/
  │     └── longest_palindrome.cpp
  ├── trees/
  │     └── bst_insert.cpp
  ├── dp/
  │     └── knapsack.cpp
  └── graphs/
        └── dfs_bfs.cpp

notes/               # Written notes, templates, and cheat sheets
  ├── complexity.md
  ├── patterns.md
  └── dp_template.md

progress/            # Logs of weekly activity and topic completion
  ├── weekly-log.md
  └── topics-completed.md

.github/             # GitHub Actions workflows
  └── worklfows/
        └── track.yml
```

Each solution file includes:

* **Problem Statement** (brief)
* **Approach & Intuition**
* **Well-commented Code**
* **Time & Space Complexity Analysis**

---

## ✅ Weekly Progress Plan

| Week | Topic Area                  | Platform(s)      | Status     |
| ---- | --------------------------- | ---------------- | ---------- |
| 1    | Arrays & STL Basics         | LeetCode, GFG    | ✅ Done     |
| 2    | Recursion & Backtracking    | GeeksforGeeks    | ✅ Done     |
| 3    | Trees & Binary Search Trees | LeetCode + Notes | 🕒 Ongoing |
| 4    | Dynamic Programming Basics  | Striver’s Sheet  | ⬜ Pending  |

---

## ⚙️ GitHub Actions (Auto-Tracker)

Use this workflow to auto-log your solved problem count every week:

`.github/workflows/track.yml`

```yaml
name: Weekly Progress Tracker

on:
  schedule:
    - cron: '0 0 * * MON'  # Every Monday UTC
  workflow_dispatch:

jobs:
  track:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v2
      - name: Count C++ Solutions
        run: |
          COUNT=$(find solutions/ -name '*.cpp' | wc -l)
          echo "Problems Solved So Far: $COUNT"
      - name: Update README Badge
        run: |
          # Placeholder: implement badge update logic here
          echo "Update badge with $COUNT"
```

> *Tip:* Adapt or extend this action to generate status badges or update logs automatically.

---

## 📚 Key Resources

* **Striver’s DSA Sheet** – Comprehensive list of pattern-based problems.
* **GeeksforGeeks** – Detailed tutorials and problem discussions.
* **LeetCode** – Practice and contests.
* **Love Babbar 450** – Classic problem set.
* **C++ STL Handbook** – Quick reference for standard library usage.

---

## 🎯 Goals & Milestones

1. Solve **150** unique DSA problems in C++.
2. Master **STL** and advanced language features.
3. Complete **all tree & graph** topic problems.
4. Build a **searchable notebook** of patterns & solutions.
5. **Mentor** at least 3 peers, sharing insights and feedback.

---

## 🤔 Questions & Reflection

* Am I identifying the optimal data structure for each challenge?
* How can I refine my approach to reduce complexity further?
* Which topics reveal consistent gaps in understanding?
* What strategies help me tackle unfamiliar problem types efficiently?

Keep these questions in mind as you code and review — self-skepticism sharpens skills.

---

## 📬 Connect & Contribute

* ⭐ Star this repo if it inspires you.
* 🍴 Fork to adapt and personalize your own DSA roadmap.
* 💬 Open issues or discussions to share feedback.
* ✉️ Reach out via [LinkedIn](https://www.linkedin.com/in/aditya-rai/) or email: [youremail@example.com](mailto:youremail@example.com).

---

> *Every line of code is a step forward. Stay consistent, stay curious, and the results will follow!* 🚀
