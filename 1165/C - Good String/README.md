<h2><a href="https://codeforces.com/contest/1165/problem/C" target="_blank" rel="noopener noreferrer">1165C — Good String</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1165C](https://codeforces.com/contest/1165/problem/C) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Good String</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's call (yet again) a string <span class="tex-font-style-bf">good</span> if its length is even, and every character in odd position of this string is different from the next character (the first character is different from the second, the third is different from the fourth, and so on). For example, the strings <span class="tex-font-style-tt">good</span>, <span class="tex-font-style-tt">string</span> and <span class="tex-font-style-tt">xyyx</span> are good strings, and the strings <span class="tex-font-style-tt">bad</span>, <span class="tex-font-style-tt">aa</span> and <span class="tex-font-style-tt">aabc</span> are not good. <span class="tex-font-style-bf">Note that the empty string is considered good</span>.</p><p>You are given a string $$$s$$$, you have to delete minimum number of characters from this string so that it becomes good.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of characters in $$$s$$$.</p><p>The second line contains the string $$$s$$$, consisting of exactly $$$n$$$ lowercase Latin letters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line, print one integer $$$k$$$ ($$$0 \le k \le n$$$) — the minimum number of characters you have to delete from $$$s$$$ to make it good.</p><p>In the second line, print the resulting string $$$s$$$. <span class="tex-font-style-bf">If it is empty, you may leave the second line blank, or not print it at all</span>.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00309571983240275" id="id007035726782230967" class="input-output-copier">Copy</div></div><pre id="id00309571983240275">4
good
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004091903660188495" id="id006034171358963913" class="input-output-copier">Copy</div></div><pre id="id004091903660188495">0
good
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00522625321583428" id="id0010766793559458854" class="input-output-copier">Copy</div></div><pre id="id00522625321583428">4
aabc
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006626628859991475" id="id006433359100985355" class="input-output-copier">Copy</div></div><pre id="id006626628859991475">2
ab
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0029625718222513264" id="id004222670923796792" class="input-output-copier">Copy</div></div><pre id="id0029625718222513264">3
aaa
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0034989739777355455" id="id0003690560333348358" class="input-output-copier">Copy</div></div><pre id="id0034989739777355455">3

</pre></div></div></div>