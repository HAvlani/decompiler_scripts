extern struct_0 optarg;

int sub_40451d()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long long|char v3;  // [bp+0x18]
    unsigned long v5;  // rdi
    unsigned long long v6;  // r9

    v6 = 99;
    if (optarg != 0)
    {
        v1 = v5;
        v0 = 1;
        v6 = ((long long)*(check_types + (long long)__xargmatch_internal()));
    }
    if (!(((long long)v3) != 0))
    {
        v3 = v6;
    }
    else if (((int)v3) == ((int)v6))
    {
        v3 = v6;
    }
    else
    {
        incompatible_options(); /* do not return */
    }
}
