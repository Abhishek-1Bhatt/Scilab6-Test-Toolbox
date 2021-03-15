This repository uses the test toolbox for scilab to add a function to transpose a double type matrix. To use the transpose function the user needs the thirdparty folder which contains a compiled library for "transpose()" function written in C. The thirdparty folder is a part of this repository. The following steps need to be followed in order to build, load and execute the transpose() function in scilab 6.1.0 console:

1. In scilab console go to File>Browse for new.
2. Select the directory containing this repository.
3. Now run the following commands to build and load this toolbox in the console: 
	a. exec builder.sce (ignore any warnings and select create anyway) 
	b. exec loader.sce
4.Now the toolbox is ready to be used for transposing matrices, e.g., 
	x = [2, 5, 0, 9;
	      3, 8, 7, 11] (initializing a 2x4 matrix) 
	y = transpose(x) (assigns to y, a 4x2 matrix which is the transpose of x) 

Note: The software specifications are: -> OS : Ubuntu 18.04 lts -> Scilab 6.1.0