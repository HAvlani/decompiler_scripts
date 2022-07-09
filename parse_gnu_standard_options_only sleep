typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_1 exit_failure;
extern unsigned int opterr;

int parse_gnu_standard_options_only()
{
    unsigned int v0;  // [bp-0xf8]
    unsigned int v1;  // [bp-0xf4]
    BOT v10;  // [bp-0x58]
    BOT v11;  // [bp-0x48]
    BOT v12;  // [bp-0x38]
    char v14;  // al
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdi
    struct_0 *v18;  // fs
    BOT v19;  // xmm0
    unsigned long v2;  // [bp-0xf0]
    BOT v20;  // xmm1
    BOT v21;  // xmm2
    BOT v22;  // xmm3
    BOT v23;  // xmm4
    BOT v24;  // xmm5
    BOT v25;  // xmm6
    BOT v26;  // xmm7
    unsigned long v3;  // [bp-0xe8]
    unsigned long v4;  // [bp-0xe0]
    BOT v5;  // [bp-0xa8]
    BOT v6;  // [bp-0x98]
    BOT v7;  // [bp-0x88]
    BOT v8;  // [bp-0x78]
    BOT v9;  // [bp-0x68]

    if (((long long)v14) != 0)
    {
        v5 = v19;
        v6 = v20;
        v7 = v21;
        v8 = v22;
        v9 = v23;
        v10 = v24;
        v11 = v25;
        v12 = v26;
    }
    v4 = *(v18 + 0x28);
    opterr = 1;
    v16 = getopt_long();
    if (!(v16 != -1))
    {
        opterr = opterr;
        if ((v4 ^ *(v18 + 0x28)) == 0)
        {
            return v4 ^ *(v18 + 0x28);
        }
        __stack_chk_fail(); /* do not return */
    }
    else if (!(v16 != 104))
    {
        v17 = 0;
        *(&stack_base+8)();
        opterr = opterr;
        if ((v4 ^ *(v18 + 0x28)) == 0)
        {
            return v4 ^ *(v18 + 0x28);
        }
        __stack_chk_fail(); /* do not return */
    }
    else if (v16 != 118)
    {
        v17 = ((long long)exit_failure);
        *(&stack_base+8)();
        opterr = opterr;
        if ((v4 ^ *(v18 + 0x28)) == 0)
        {
            return v4 ^ *(v18 + 0x28);
        }
        __stack_chk_fail(); /* do not return */
    }
    else
    {
        v0 = 48;
        v2 = &stack_base+16;
        v1 = 48;
        v3 = &stack_base-216;
        version_etc_va();
        exit(0x0); /* do not return */
    }
}
