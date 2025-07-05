# Leetcode Checker

This project is created because it spend much time to check code errors when practice leetcode questions. I wrote and built using g++ command but it seems pretty inefficient. So I re-write an simple structure to add new questions easily, and can be run under one binary executable.

The `Solution` class is an interface here. All leetcode example can be written as a class which inherit `Solution`. The only function that should be implemented is `run()`. After that, check `leetcoce.h` and add the example class in `creator`. If all steps are done you can build your program.

The cmake system is built using Gemini CLI, which is pretty powerful tool. It can also fix your silly errors and optimize your answer, which broaden your eyes but lose some chances to pratice. Be careful to use this tool.


If you find this helpful, please buy me a coffee.
[!["Buy Me A Coffee"](https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png)](https://www.buymeacoffee.com/jimmyliao886)
