/*
Write the following function:

bool test_extension(const char *file_name, const char *extension);

file_name points to a string containing a file name.
The function should return true if the file's extension matches the string pointed to by extension, ignoring the case of letters.
For example, the call test_extension ("memo.txt", "TXT") would return true.
Incorporate the "search for the end of a string" idiom into your function.
Hint: Use the toupper function to convert characters to upper-case before comparing them.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);

int main(void) // test program
{
    char *file_name = "memo.txt", *extension = "TXT";
    printf("%d", test_extension(file_name, extension));
}

bool test_extension(const char *file_name, const char *extension) // my answer
{

    while (*file_name++)
        ;
    
    while (*extension++)
        ;
    
    while (*--file_name != '.')
        if (toupper(*file_name) == toupper(*--extension))
            continue;
        else
            return false;
    
    return true;
}