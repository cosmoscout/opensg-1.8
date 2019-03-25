# Beware!

This is a stripped down version of OpenSG 1.8. It contains all relevant source files to build an OpenSG which is compatible with CosmoScout VR. Instead of autotools, this version uses CMake to generate build scripts. However, it is not guaranteed, whether this version works flawlessly, yet it is much easier to compile it recent versions of msvc and gcc. 

Several source files have been adapted to be compatible with these new compilers. This may lead to bugs. Here are the most notable changes:
* OSGSystem/OSGParSpaceTrimmer.cpp#L3262: Returns now NULL instead of false.
* OSGSystem/OSGAction.h#L365: Two new traverse methods have been added which do not take the functors per value. 
