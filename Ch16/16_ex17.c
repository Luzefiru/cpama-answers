// suppose b and i are declared as follows:
enum {FALSE, TRUE} b;
int i;

int main(void)
{
    // Which of the following statements are legal? Which ones are "safe" (always yield a meaningful result)

    // (a) b = FALSE;
    // Legal & Safe - it sets enum variable b to FALSE

    // (b) b = i;
    // Legal, but not safe - we can assign i (a random uninitialized int) to b, but it might store a garbage value
    
    // (c) b++;
    // Legal, but not safe - same reasons as before, it might initialize to a garbage value

    // (d) i = b;
    // Legal & Safe - i will have the value 0, the default value of an uninitialized enum variable

    // (e) i = 2 * b + 1;
    // Legal & Safe - i will have the value 1 since (2 * b) will result to 0 as b is initialized as 0 automatically.
}