//
//  main.c
//  Operators
//
//  Created by David on 7/6/13.
//  Copyright (c) 2013 David. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
	int		myInt, anotherInt;

	myInt = 5;
	// anotherInt = myInt;

	// printf("The value of myInt is %d.\n", myInt++ );
	// printf("The value of myInt is %d.\n\n", ++myInt );

	printf("The value of myInt is %d.\n\n", myInt += 3 );
	printf("The value of myInt is %d.\n\n", myInt *= 3 );
	printf("The value of myInt is %d.\n\n", myInt++ );
	printf("The value of myInt is %d.\n\n", myInt++ );
	// printf("The value of my integers is %d and %d\n", myInt, anotherInt );

	return 0;
}

