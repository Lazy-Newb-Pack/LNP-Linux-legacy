Quickfort 2.04
-------------

**Author:** joelpt quickfort@joelpt.net

http://joelpt.net/quickfort

**Description:**

Quickfort 2 is a utility for Dwarf Fortress that helps you build fortresses from "blueprint" .CSV, .XLS, and .XLSX files. Many applications exist to edit these files, such as MS Excel and Google Docs. Most building-oriented DF commands are supported through the use of multiple files/worksheets, each describing a different phase of DF construction (designation, building, stockpiles, and making adjustments).


## Features

Design complete blueprints to handle 4 main phases of DF construction
.CSV and multi-worksheet .XLS/.XLSX blueprint files supported
Intelligent designator minimizes keystrokes needed to designate blueprints
Designates fast: 10x faster than QF1.11 typical
Manual material selection allows you to specify construction materials used
Multi-Z-level blueprints
Blueprint transformation (rotate, replace, repeat in up to 3 dimensions)
Aliases to automate frequent keystroke combos
Minimalist (and optional) GUI for Windows
Simple "command line" entry mode in GUI
Win/Linux/OSX support via command line qfconvert utility (Python based)
DF macro- or keysending-based output methods supported
Assortment of sample blueprints included

## For the impatient

WINDOWS USERS: Run Quickfort.exe for the GUI interface.

LINUX/OSX USERS: Please set [MACRO_MS:0] in your data/init/init.txt for best DF macro playback performance.

Run the command line qfconvert tool via python to generate DF macro files:

   > cd src/qfconvert
   > python ./qfconvert.py
or chmod +x qfconvert.py to run it like a shell script.

Command line example using qfconvert:

   > python ./qfconvert.py myblueprint.xls <DF folder>/data/init/macros/foo.mak

... then play your macro in DF with Ctrl+L, select foo, Ctrl+P.