<h2><a href="https://codeforces.com/contest/2285/problem/B" target="_blank" rel="noopener noreferrer">2285B — Diverse String</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2285B](https://codeforces.com/contest/2285/problem/B) |

## Topics
`combinatorics` `math` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. Diverse String</div><div class="time-limit"><div class="property-title">time limit per test</div>1.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p>The <span class="tex-font-style-it">diversity</span> of a binary string $$$s$$$ is the number of distinct$$$^{\text{∗}}$$$ strings that can be obtained by performing the following operation <span class="tex-font-style-bf">at most once</span>:</p><p>Choose an integer $$$0 \leq x \leq 1$$$ and two integers $$$1 \leq l \leq r \leq n$$$, and set $$$s_i := x$$$ for all $$$l \leq i \leq r$$$.</p><p>For example, the string <span class="tex-font-style-tt">10</span> has diversity $$$3$$$ because the strings <span class="tex-font-style-tt">10</span>, <span class="tex-font-style-tt">11</span>, and <span class="tex-font-style-tt">00</span>. can be obtained.</p><p>You are given a string $$$s$$$ of length $$$n$$$ as well as an integer $$$k$$$. You are allowed to toggle the values of <span class="tex-font-style-bf">at most</span> $$$k$$$ characters in the string. Your task is to determine the maximum possible diversity of the resulting string. </p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$Two strings $$$a$$$ and $$$b$$$ are distinct if there exists an index $$$i$$$ such that $$$a_i \neq b_i$$$.</p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \leq n \leq 2 \cdot 10^5$$$, $$$0 \leq k \leq n$$$) — the length of the string and the maximum number of characters you are allowed to toggle.</p><p>The second line of each test case contains a binary string $$$s$$$ of length $$$n$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a line with a single integer — the maximum possible diversity of the string after toggling at most $$$k$$$ characters.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008326747417462865" id="id004317342820431762" class="input-output-copier">Copy</div></div><pre data-content="4
1 1
0
4 4
1001
5 1
11111
7 2
1101001
" id="id008326747417462865"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1</div><div class="test-example-line test-example-line-odd test-example-line-1">0</div><div class="test-example-line test-example-line-even test-example-line-2">4 4</div><div class="test-example-line test-example-line-even test-example-line-2">1001</div><div class="test-example-line test-example-line-odd test-example-line-3">5 1</div><div class="test-example-line test-example-line-odd test-example-line-3">11111</div><div class="test-example-line test-example-line-even test-example-line-4">7 2</div><div class="test-example-line test-example-line-even test-example-line-4">1101001</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005990496861752297" id="id003195353469488774" class="input-output-copier">Copy</div></div><pre data-content="2
11
16
23
" id="id005990496861752297"><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-even test-example-line-2">11</div><div class="test-example-line test-example-line-odd test-example-line-3">16</div><div class="test-example-line test-example-line-even test-example-line-4">23</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, it is optimal to toggle the first character, resulting in the string <span class="tex-font-style-tt">1</span> with a diversity of $$$2$$$.</p><p>In the second test case, the string <span class="tex-font-style-tt">1111</span> achieves the maximum possible diversity of $$$11$$$.</p></div>