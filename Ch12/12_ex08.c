/* old version */
void store_zeros(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        a[i] = 0;
}

/* my version */
void store_zeros(int *a, int n)
{
    for (int *p = &a[0]; p < &a[n]; p++)
        *p = 0;
}