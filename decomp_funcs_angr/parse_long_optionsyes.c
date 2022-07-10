typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int opterr;
extern unsigned int optind;

int parse_long_options()
{
    unsigned int v0;  // [bp-0xf8]
    unsigned int v1;  // [bp-0xf4]
    BOT v10;  // [bp-0x58]
    BOT v11;  // [bp-0x48]
    BOT v12;  // [bp-0x38]
    char|unsigned long long v15;  // rax
    struct_0 *v17;  // fs
    BOT v18;  // xmm0
    BOT v19;  // xmm1
    unsigned long v2;  // [bp-0xf0]
    BOT v20;  // xmm2
    BOT v21;  // xmm3
    BOT v22;  // xmm4
    BOT v23;  // xmm5
    BOT v24;  // xmm6
    BOT v25;  // xmm7
    unsigned long v3;  // [bp-0xe8]
    unsigned long v4;  // [bp-0xe0]
    BOT v5;  // [bp-0xa8]
    BOT v6;  // [bp-0x98]
    BOT v7;  // [bp-0x88]
    BOT v8;  // [bp-0x78]
    BOT v9;  // [bp-0x68]

    if (((long long)v15) != 0)
    {
        v5 = v18;
        v6 = v19;
        v7 = v20;
        v8 = v21;
        v9 = v22;
        v10 = v23;
        v11 = v24;
        v12 = v25;
    }
    v4 = *(v17 + 0x28);
    opterr = 0;
    if (0 != 2)
    {
        opterr = opterr;
        optind = 0;
        if ((v4 ^ *(v17 + 0x28)) == 0)
        {
            return v4 ^ *(v17 + 0x28);
        }
        __stack_chk_fail(); /* do not return */
    }
    v15 = getopt_long();
    if (v15 == -1)
    {
        opterr = opterr;
        optind = 0;
        if ((v4 ^ *(v17 + 0x28)) == 0)
        {
            return v4 ^ *(v17 + 0x28);
        }
        else
        {
            __stack_chk_fail(); /* do not return */
        }
    }
    else if (!(v15 != 104))
    {
        0 = 0;
        r9<8>();
        opterr = opterr;
        optind = 0;
        if ((v4 ^ *(v17 + 0x28)) == 0)
        {
            return v4 ^ *(v17 + 0x28);
        }
        else
        {
            __stack_chk_fail(); /* do not return */
        }
    }
    else if (v15 != 118)
    {
        opterr = opterr;
        optind = 0;
        if ((v4 ^ *(v17 + 0x28)) == 0)
        {
            return v4 ^ *(v17 + 0x28);
        }
        else
        {
            __stack_chk_fail(); /* do not return */
        }
    }
    else
    {
        v0 = 48;
        v2 = &stack_base+8;
        v1 = 48;
        v3 = &stack_base-216;
        version_etc_va();
        exit(0x0); /* do not return */
    }
}
