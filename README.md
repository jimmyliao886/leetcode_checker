# Leetcode Checker

## Introduction
This project is created because it spend much time to check code errors when practice leetcode questions. I wrote and built using g++ command but it seems pretty inefficient. So I re-write an simple structure to add new questions easily, and can be run under one binary executable.

## Code Structure
### Solution.h
The `Solution` class is an interface here. All leetcode example can be written as a class which inherit `Solution`. The only function that should be implemented is `run()`.
### code.h
It is where to paste the code from leetcode editor. In leetcode editor it always wraps as `Solution` class. You need to change to another name after pasting to `code.h`, and inherit the Solution class.
### leetcode.h
Add the class you've added in `code.h` into `creator`. If all steps are done you can build your program.

## Build System
The cmake system is built using Gemini CLI, which is pretty powerful tool. It can also fix your silly errors and optimize your answer, which broaden your eyes but lose some chances to pratice. Be careful to use this tool.

If you find this project helpful, feel free to support me by buying me a coffee!

<a href="https://www.buymeacoffee.com/jimmyliao886" target="_blank" rel="noopener noreferrer">
<img width="140" alt="Buy me a coffee" src="https://github.com/user-attachments/assets/4eab51e0-9993-44e3-876e-8f463f17c174"/>
</a>
