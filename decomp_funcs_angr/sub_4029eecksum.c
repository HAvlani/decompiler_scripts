extern char algorithm_specified;
extern struct_0 algorithm_types;
extern struct_0 cksum_algorithm;

int sub_4029ee()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned int v2;  // eax

    v0 = 0;
    algorithm_specified = 1;
    v2 = ((int)*(algorithm_types + (long long)__xargmatch_internal() * 4));
    cksum_algorithm = v2;
}
