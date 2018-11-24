#include <string.h>

void copy(char* message)
{
	// declare a buffer-array, size 15 bytes
	char buffer[15];

	// copy the message into the buffer array
	strcpy(buffer, message);
}

int main(int argc, char* argv[]) 
{
	// integer local variable
	int local_variable = 1;

	// Call the copy function
	copy(argv[1]);

	return 0;
}