This code only works with some specified compilers like dev c++, code blocks, etc. If you want to run this code in another compiler then you have to make some inner changes like 

step 1: You have to remove the header file "#include<conio.h>".

Step 2: Find the getch() function and remove it or make it a comment.

step 3: Check code is running or not if not then fix some errors. This code will work perfectly.



Simple Queue Implementation in C

This C program implements a basic Queue data structure using an array. The program provides a menu-driven interface that allows users to perform the following operations:

Enqueue: Add an element to the end of the queue.

Dequeue: Remove an element from the front of the queue.

Front: Display the element at the front of the queue.

Is Empty: Check if the queue is empty.

Is Full: Check if the queue is full.

Exit: Exit the program.


Features:

Uses a fixed-size array to store the queue elements.

Handles overflow and underflow conditions gracefully.

Provides a simple text menu for user interaction.


How to Run:

Compile the program using a C compiler.

Run the executable and follow the on-screen menu to perform queue operations.
