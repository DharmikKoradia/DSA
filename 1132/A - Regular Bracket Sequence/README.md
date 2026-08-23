<h2><a href="https://codeforces.com/contest/1132/problem/A" target="_blank" rel="noopener noreferrer">1132A — Regular Bracket Sequence</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1132A](https://codeforces.com/contest/1132/problem/A) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Regular Bracket Sequence</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A string is called <span class="tex-font-style-it">bracket sequence</span> if it does not contain any characters other than "<span class="tex-font-style-tt">(</span>" and "<span class="tex-font-style-tt">)</span>". A bracket sequence is called <span class="tex-font-style-it">regular</span> if it it is possible to obtain correct arithmetic expression by inserting characters "<span class="tex-font-style-tt">+</span>" and "<span class="tex-font-style-tt">1</span>" into this sequence. For example, "", "<span class="tex-font-style-tt">(())</span>" and "<span class="tex-font-style-tt">()()</span>" are regular bracket sequences; "<span class="tex-font-style-tt">))</span>" and "<span class="tex-font-style-tt">)((</span>" are bracket sequences (but not regular ones), and "<span class="tex-font-style-tt">(a)</span>" and "<span class="tex-font-style-tt">(1)+(1)</span>" are not bracket sequences at all.</p><p>You have a number of strings; each string is a bracket sequence of length $$$2$$$. So, overall you have $$$cnt_1$$$ strings "<span class="tex-font-style-tt">((</span>", $$$cnt_2$$$ strings "<span class="tex-font-style-tt">()</span>", $$$cnt_3$$$ strings "<span class="tex-font-style-tt">)(</span>" and $$$cnt_4$$$ strings "<span class="tex-font-style-tt">))</span>". You want to write all these strings in some order, one after another; after that, you will get a long bracket sequence of length $$$2(cnt_1 + cnt_2 + cnt_3 + cnt_4)$$$. You wonder: is it possible to choose some order of the strings you have such that you will get a regular bracket sequence? <span class="tex-font-style-bf">Note that you may not remove any characters or strings, and you may not add anything either</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of four lines, $$$i$$$-th of them contains one integer $$$cnt_i$$$ ($$$0 \le cnt_i \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer: $$$1$$$ if it is possible to form a regular bracket sequence by choosing the correct order of the given strings, $$$0$$$ otherwise.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002568036105824403" id="id0018984614174761238" class="input-output-copier">Copy</div></div><pre id="id002568036105824403">3
1
4
3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007551998968945908" id="id007024096905182016" class="input-output-copier">Copy</div></div><pre id="id007551998968945908">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0001995452621234728" id="id0039399558587121764" class="input-output-copier">Copy</div></div><pre id="id0001995452621234728">0
0
0
0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006024591881942083" id="id00607069416603266" class="input-output-copier">Copy</div></div><pre id="id006024591881942083">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009724420836174859" id="id000007070586164849013" class="input-output-copier">Copy</div></div><pre id="id009724420836174859">1
2
3
4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005837182733805498" id="id007902648267195552" class="input-output-copier">Copy</div></div><pre id="id005837182733805498">0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example it is possible to construct a string "<span class="tex-font-style-tt">(())()(()((()()()())))</span>", which is a regular bracket sequence.</p><p>In the second example it is possible to construct a string "", which is a regular bracket sequence.</p></div>