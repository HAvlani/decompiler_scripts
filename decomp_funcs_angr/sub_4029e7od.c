extern struct_0 endian_types;
extern char input_swap;

int sub_4029e7()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned int v3;  // eax
    unsigned long v4;  // rax
    unsigned int v6;  // cc_dep1

    v1 = v4;
    v0 = 1;
    v3 = ((int)*(endian_types + (long long)__xargmatch_internal() * 4));
    if (v6 != 0)
    {
        v6 = v3;
        input_swap = 1;
    }
    else
    {
        input_swap = 0;
    }
}
