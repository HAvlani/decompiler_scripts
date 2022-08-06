# Decompiler_scripts
Scripts that I used to gather data for my research internship at ASU's SEFCOM Lab.  My project centered around evaluating the decompilation quality of [angr](https://github.com/angr/angr) and [GHIDRA](https://github.com/NationalSecurityAgency/ghidra)
## Setup
The metrics, tools, and their appropriate scripts as listed below.   

| Metric | Tool | Script |
| --- | ----------- | ---|
| Cyclomatic Complexity (MCC) | [pmccabe](https://github.com/datacom-teracom/pmccabe) | addmccall.py |
| # of common functions | N/A | filterfunction.py |
| # of variables<sup>[1] | [joern](https://joern.io/)<sup>[2] | count_variables.py |
| # of gotos | N/A | findgoto.py |
| Logical Lines of Code (LLOC)| [easysloc](https://www.monperrus.net/martin/easysloc) | findLLOC.py |
| # of empty functions | N/A | GHIDRAlabel.py/angrlabel.py |
| # of aborted/halted functions | N/A | GHIDRAlabel.py/angrlabel.py |
| # of failed decompilations | N/A | angrerrorchecker.py |

<br>

<sup>[1] From our analysis, we saw no real indication that the number of variables was a good indicator of the complexity or readability of code. We plotted the number of variables vs. the MCC per LLOC and found no real correlation. You can generate this plot with evalvar.py

<sup>[2] In our script we utilize joern non-interactive mode which calls for the installation of [scala](https://www.scala-lang.org/). Additionally, within our scala script we use a JSON parsing library called [uPickle](https://com-lihaoyi.github.io/upickle/).   

**All scripts have certain functions to evaluate different subsets of the decompiled output. You will need to specify the function. Additionally, all the scripts only account for the unique functions in the decompiled output.**   
  
To generate the necessary files, the scripts should be ran in a certain order:
1. angrtestparallel.py and decompile_coreutil_ghidra.sh
2. filterfunction.py
3. filefunctioncorrangr.py and filefunctioncorrGHIDRA.py
4. angrlabel.py and GHIDRAlabel.py
5. addmccall.py
6. count_variables.py
7. findgoto.py
8. findLLOC.py
 
## Research
  
### Background
* Decompilers convert executable machine code to high level code
* Decompilers have huge potential in cyber security, as they are able to recover high-level abstractions from binary code 
  * This is extremely useful when trying to analyze malware as it is a lot easier to analyze high-level code
* As decompilers get more advanced and recover more high-level abstractions, these decompilers end up "creat[ing] very complex code and don't focus on readability"<sup>[1]
 
<sup>[1]: K. Yakdan, S. Dechand, E. Gerhards-Padilla and M. Smith, "Helping Johnny to Analyze Malware: A Usability-Optimized Decompiler and Malware Analysis User Study," 2016 IEEE Symposium on Security and Privacy (SP), 2016, pp. 158-177, doi: 10.1109/SP.2016.18.
  
### Primary Research Question
* **It is important to note that all of our metrics and numbers filter out duplicate functions unless otherwise stated**
* Our research primarily focused at the utility of the decompiled output of angr and GHIDRA in terms of manual analyzability and readability. We tried to capture this readability and analyzability through a series of 5 metrics.
  1. \# of gotos: We measured the number of goto statements in the total decompiled. More gotos suggest less structure to the decompiled output and this inhibits readability
  2. \# of Logical Lines of Code (LLOC): LLOC is defined by the number of instructions with the semantic delimiter ";". This metric differs from other similiar research papers because most of those papers [add examples of such papers] traditionally use metrics like Source lines of Code (SLOC). SLOC counts every single line of code, and this may end up causing an data misrepresentation if, for example, one decompiler writes its brackets on a new line while the other decompiler doesn't, as the decompiler that creates these new line brackets may be penalized by having a higher SLOC when it actually isn't more verbose. A lower LLOC means there are less instructions in the code and thus the code is easier to read.
  3. McCabe Cyclomatic Complexity (MCC): MCC (or Conditional Complexity) is a measurement of all the possible paths that can be taken in the control flow of the code. A lower MCC means that the code is less complex and easier to read.
  4. \# of empty functions: We define empty functions as functions with no instructions inside the functions. Since these functions have no instructions in them, they are useless for analyzing purposes.
  5. \# of aborted/halted functions: We define aborted/halted functions as functions with only a halt_baddata() or abort() call inside of them. If the only thing in inside a function is an abort call (for example) then the function is virtually useless for analyzing.
* The decompilers were evaluated on coreutils 9.1 (built in an Ubuntu 20.04 docker instance) with -O0 optimization.

### Experimental Overview: All Functions
* In this table, we are not going to go into some of the code based metrics here because of a metric disparity we found between angr common and exclusive functions. This disparity is discussed in the next section. Instead, we will focus on some general overview metrics; this sections is to get an idea of the quality of decompiled file output and less about the decompiled code quality.   
  
|  | GHIDRA | angr |
| --- | ----------- | ---|
| # of outputted unique functions | 1891| 1988 |
| # of outputted functions (including duplicates) | 20056 | 63566 |
| # of unique failed decompilations<sup>[1] | 0 | 21585 (only 385 failed decompilations if discounting “sub_” prefixed functions)|
| # of empty unique functions | 5 | 254 (70 if discounting “sub_” prefixed functions) |
| # of aborted/halted functions| 141 | 46 (37 if discounting “sub_” prefixed functions) |   
  
<sup>[1] We define failed decompilations as decompilations where an error is thrown and the whole decompilation process is stopped.

#### Takeaways
* While both GHIDRA and angr end up outputting a similiar number of outputted functions (1891 and 1988 for GHIDRA and angr respectively), angr produces far more duplicate functions, leading to the conclusion that for every angr unique function, far more duplicates are made than their GHIDRA counterparts. While this is not necessarily a bad thing, it is still interesting to note.
* angr is a lot less stable of a decompiler, throwing errors on 21,585 unique functions, while GHIDRA produces no such errors. An interesting thing to note here is that all but 385 of these failed decompilations are from function that are prefixed with "sub_". While we have not confirmed this, we suspect that these "sub_" functions maybe be the result of angr incorrectly identifying the debug symbols that coreutils was built with as functions.
* While angr does create far more empty unique functions than GHIDRA, GHIDRA has a lot more aborted/halted functions than angr. Additionally, the "sub_" prefixed functions continue to be a major proportion of these metrics for angr.

### Comparing common and exclusive functions for GHIDRA and angr
* In the graphs below, we split the angr and GHIDRA decompiled output into common and exclusive functions.
<img width="865" alt="Screen Shot 2022-08-06 at 2 07 56 PM" src="https://user-images.githubusercontent.com/99096999/183266055-2b352037-6b12-4f1b-a682-8528dd16308d.png">   
  
* Here, the metric discrepancy between angr common and exclusive functions that I talked about in the last section becomes clear. If you look at the graph for GHIDRA, you see that while the GHIDRA exclusive functions are a little lower in most metrics compared to the GHIDRA common functions, they are still largely similiar. On the other hand, angr's exclusive functions are far lower than its common functions. Due to this disparity in angr exclusive    functions, we only focus on the common functions for both decompilers.
* It is also interesting to note that nearly all of angr's exclusive functions are "sub_" prefixed functions.

### Experimental Results: Comparing GHIDRA and angr on common functions

  
