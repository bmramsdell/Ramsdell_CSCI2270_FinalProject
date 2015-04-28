# Ramsdell_CSCI2270_FinalProject

Phase 1 Requirements:

Project Summary:

For our project we will create a set of algorithms that will allow users to play a simple game of chess. We define a simple game of chess to be a game that will not include functions for some of the more intricate rules of the game. For example, our functions will be built to model the basic moves of each chess piece and will not include complex rules such as castling, en passant, etc. The program will allow two teams to play, team one and team two. At each turn of the game, players will be asked where they would like to move. Our program will be built to check if the move is elligible, and if so allow the players to proceed with the game. As with a normal game of chess, the game will end when one team gets a checkmate. 

How to Run:

This program is no different than any homework assignment we have done this semester. In order to run the program, contributors will simply download the files, add them to a new project in Code::Blocks, and run the program while following the directions prompted by the program itself. 

Dependencies:

Our project does require the user to include a few additional third party libraries. Our driver file will require the iostream and string libraires. Our header file will only require the iostream library. And, finally, our cpp file will require the string, queue, and iostream libraries. 

The iostream library simply will allow the user to perform simple input and output services for the program. This is a vital part of allowing for user input and output. The user can include this third party library at the top of the required files by writing, #include<iostream>. The string library will allow the user to convert strings to integers using the stoi operation as well as letting them use the data type string. The user can include this third party library at the top of the required files by writing, #include<string>. The queue library will allow the user to use the data structure queues. The user can include this third party library at the top of the required files by writing, #include<queue>. 

These three libraries were needed in certain parts of the program for various reasons. We needed iostream to allow the user to input what piece they would like to move, where they would like to move it, etc. We needed string for two reasons. The first is because the data type string is a vital part of the program that is used all over. The second is because when using the getline command, we needed to input a string and not an integer. Therefore, we initally declared the user's input as a string, and later converted it to an integer using stoi in order to allow the user to use the number pad to make directional moves. Finally, we needed the queue function to create the borders of the game board. This was especially helpful in labeling the rows and columns of the board. 

All of these libraries can be found at the top of each file included in the repository. Each third party library that is included will begin with #include. 

System Requirements:

Our program was written on the VirtualBox machine using the Code::Blocks IDE. The program is written using C++ as it's programming language. Due to this nature, our program should run on any computer, whether it be Windows, Mac, Linux, etc. As long as the computer has C++ programming capability, users can play simple chess!  

Group Members:

Our group was made up of two members: myself, Blaine Ramsdell (blaine.ramsdell@colorado.edu), and Zachary Withrow (zachary.withrow537@gmail.com. We evenly divided the work up amongst ourselves and joined our two projects into what you see in this repository. 

Contributors:

The initial work that was pushed to this repository was done by Zach and myself. However, this program is not entirely finished. As you will see below, we still have a few bugs that we hope our fellow classmates can help us fix. Those that contribute to this repository will be included in this section. 

Open Issues/Bugs:

We tested our program by playing several games of simple chess. Through these trials, we were able to locate a few of the errors that existed in the program, but we are almost certain that more exist. The tricky part is that we have not identified them yet. We urge those who will be reviewing this project to include descriptions of the errors that you many find in the program. Please include the piece/move in which it occured, where it occured, at which point in the game it occured, etc. 

As we mentioned in the project summary, the initial upload was meant to be a simple game of chess. That is, functions for intricate rules do not exist in the initial upload. We would like to see this program upgrade from a simple game of chess to a regular version game of chess. For those who wish to contribute to this project, we would love to see some functions for some of these intricate rules. These may include functions for check, checkmate, castling, en passant, or any other rules that you may know of. Thanks for evaluating and collaborating on our project! 
