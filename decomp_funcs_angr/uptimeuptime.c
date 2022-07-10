typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int uptime()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long long v6;  // r12
    unsigned long v7;  // r12
    struct_1 *v8;  // fs

    v2 = v7;
    v1 = *(v8 + 0x28);
    v0 = 0;
    if (read_utmp() == 0)
    {
        print_uptime();
        exit(0x0); /* do not return */
    }
    v6 = (long long)quotearg_n_style_colon();
    error(0x1, *(__errno_location()), "%s");
}
