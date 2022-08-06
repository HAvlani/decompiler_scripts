# Decompiler_scripts

## Setup
Scripts that I used to gather my data for my research internship at ASU's SEFCOM Lab.  
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
  2. \# of Logical Lines of Code (LLOC): LLOC is defined by the number of instructions with the semantic delimiter ";". This metric differs from other similiar research papers because most of those papers [add examples of such papers] traditionally use metrics like Source lines of Code (SLOC). SLOC counts every single line of code, and this may end up causing an error if, for example, one decompiler creates its brackets on a new line while the other decompiler doesn't, as the decompiler that creates these new line brackets may be penalized by having a higher SLOC when it actually isn't more verbose.
  
