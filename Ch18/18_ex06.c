void print_error(const char *message)
{
    static int n = 1;
    printf("Error %d: %s\n", n++, message);
}