/*
Write the following function:

void build_index_url(const char *domain, char *index_url);

domain points to a string containing an Internet domain, such as "knking.com".
The function should add "http://www." to the beginning of this string and "/index.html" to the end of the string,
storing the result in the string pointed to by index_url.
(In this example, the result will be "http://www.knking.com/index.html".)
You may assume that index_url points to a variable that is long enought to hold the resulting string.
Keep the function as simple as possible by having it use the strcat and strcpy functions.
*/

#include <stdio.h>
#include <string.h>

#define MAX_CHARS 64

void build_index_url(const char *domain, char *index_url);

int main(void) // test program
{
    char *domain = "knking.com", index_url[MAX_CHARS];
    build_index_url(domain, index_url);
    puts(index_url);
}

void build_index_url(const char *domain, char *index_url) // my answer
{
    strcpy(index_url, "http://www.");
    strcpy(index_url, strcat(strcat(index_url, domain), "/index.html"));
}