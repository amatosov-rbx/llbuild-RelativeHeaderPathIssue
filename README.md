# Summary:
If relative search path is used, header's changes will not cause rebuild of cpp files.

# Steps to Reproduce:
Test project can be found here: https://github.com/amatosov-rbx/llbuild-RelativeHeaderPathIssue
It consists of 3 main parts:
 1. Header only lib sitting in OtherHeaderLib declaring abstract class
 2. Static library that implements that class
 3. Console app
Console app and static library access header lib using relative path

Attached video shows issue of partial rebuilds. Here is the description of performed steps.
1. Open app in xcode and build it
2. Make sure it performs as expected
3. Swap order of virtual methods in the AbstractClass.h
4. Change something in ConcreteClass.cpp to force it's compilation
5. Run app again
6. Observe that main.cpp is not recompiled even tho it includes AbstractClass.h indirectly. 
7. Run application and observe that wrong virtual method is called.

## Expected Results:
All dependent cpp files should rebuild automatically upon header changes

## Actual Results:
No cpp files are rebuilt automatically and this results in severe issues

# Version/Build:
Any version of Xcode 10

# Configuration:
New build system (llbuild)
