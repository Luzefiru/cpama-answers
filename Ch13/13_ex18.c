/*
Write the following function:

void remove_filename(char *url);

url points to a string containing a URL that ends with a file name (such as "http://www.knking.com/index.html").
The function should modify the string by removing the file name and the preceding slash.
(In this example, the result will be "http://www.knking.com".)
Incorporate the "search for the end of a string" idiom into your function.
Hint: Have the function replace the last slash in the string by a null character.
*/

#include <stdio.h>
#include <string.h>

void remove_filename(char *url);

int main(void)
{
    char url[] = "http://www.knking.com/index.html";
    remove_filename(url);
    puts(url);
}

void remove_filename(char *url)
{
    while (*url++)
        ;
    
    while (*--url != '/')
        ;

    *url = '\0';
}