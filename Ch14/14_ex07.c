// a //// long long_max(long x, long y) { return x > y ? x : y; }
// b //// it doesn't work for "unsigned long" because the function name will invalidate
// c //// we can use a type definition "typedef unsigned long u_long;" to make a valid function instead