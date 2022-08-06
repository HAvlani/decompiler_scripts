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

<br>

<sup>[1] From our analysis, we saw no real indication that the number of variables was a good indicator of the complexity or readability of code. We plotted the number of variables vs. the MCC per LLOC and found no real correlation.   

<sup>[2] In our script we utilize joern non-interactive mode which calls for the installation of [scala](https://www.scala-lang.org/). Additionally, within our scala script we use a JSON parsing library called [uPickle](https://com-lihaoyi.github.io/upickle/).

To generate the necessary files, the script should be ran in a certain order:
* For angr   
  
