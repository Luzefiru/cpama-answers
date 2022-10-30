/*
Write the following function:

void get_extension(const char *file_name, char *extension);

file_name points to a string containing a file name.
The function should store the extension on the file name in the string pointed to by extension.
For example, if the file name is "memo.txt", the function will store "txt" in the string pointed to by extension.
If the file name doesn't have an extension, the function should store an empty string
(a single null character) in the string pointed to by extension.
Keep the function as simple as possible by having it use the strlen and strcpy functions.
*/

#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void) // test program
{
    char *file_name = "memo.txt", extension[16];

    get_extension(file_name, extension);
    puts(extension);
}

void get_extension(const char *file_name, char *extension) // my answer
{
    const char *p = file_name;

    while (*p++ != '.')
    {
        if (*p == '\0')
        {
            strcpy(extension, "\0");
            return;
        }
    }

    strcpy(extension, p);
    return;
}