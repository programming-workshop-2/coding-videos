# Stack using pointer to implementation design pattern

- We will implement a Stack class.
- We will rely upon a double linked link class to provide the underlying functionality.

The ll.h header file is shown on the right.  It provides add() and remove() methods.  We can use these methods to serve our purpose.

We do not have access to ll.cpp file.  Rather we are given ll.a file.  We will use this static library file in our program.

## Step 1

Create a Makefile

## Step 2

We will use stack.h and stack.cpp files to implement the stack class.

The stack class has two methods: push(int) and pop()

The stack method uses a pointer to implementation pattern.

## Step 3

Lets create stack_impl class.

Notice that ll.h is never included into stack.h.

Lets fix the Makefile.

Oops.  The linked list class is called llist, not ll.  Lets fix it. 

Now lets create a main.cpp file.

Now add it to makefile.

Whew it works!

## Conclusions

Notice how clean stack.h looks like.

Notice how it uses a pointer to implementation to do its work.

Notice how stack_impl is using a container (linked list) from a library.

It is possible forward declare a class so that compiler doesn't complain when using class pointers or references.  It keeps header files simpler.
