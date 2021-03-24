@echo off
If %1=="u" Goto UVa
If %1=="l" Goto LeetCode
Set id=%2

:UVa
Set route=Uva/%id%/
Goto Compile

:LeetCode
Set route=LeetCode/%id%/
Goto Compile

:Compile
g++ -o %route%/solustion %route%/solustion.cpp
Start %route%/solustion
Pause