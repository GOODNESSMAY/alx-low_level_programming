#include <stdio.h>

void first(void)_attribute_((constructor));


/**
* first - print sentence given by julien barbier before the main ()
* is excuted before main function
*/

void first(void)

{

	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
