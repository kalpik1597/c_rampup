# include <stdio.h>

int main()
{
	int num;
	printf ("Enter the number: ");
	scanf ("%d", num );
	printf("The number is %d\n",num);

}

/*

copy pasted below gdb commands from GFG

Command	Description
run or r	Executes the program from start to end.
break or b	Sets a breakpoint on a particular line.
disable	Disables a breakpoint
enable	Enables a disabled breakpoint.
next or n	Executes the next line of code without diving into functions.
step	Goes to the next instruction, diving into the function.
list or l	Displays the code.
print or p	Displays the value of a variable.
quit or q	Exits out of GDB.
clear	Clears all breakpoints.
continue	Continues normal execution

*/