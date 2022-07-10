typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int progress_len;
extern unsigned long long stderr[7];

int nl_error()
{
    unsigned long v0;  // [bp-0xf0]
    unsigned int v1;  // [bp-0xe8]
    BOT v10;  // [bp-0x88]
    BOT v11;  // [bp-0x78]
    BOT v12;  // [bp-0x68]
    BOT v13;  // [bp-0x58]
    BOT v14;  // [bp-0x48]
    BOT v15;  // [bp-0x38]
    BOT v16;  // [bp-0x28]
    char *|char v18;  // rax
    unsigned int v2;  // [bp-0xe4]
    unsigned long v20;  // rcx
    unsigned long v21;  // rdx
    unsigned long v22;  // r8
    unsigned long v23;  // r9
    struct_0 *v24;  // fs
    BOT v25;  // xmm0
    BOT v26;  // xmm1
    BOT v27;  // xmm2
    BOT v28;  // xmm3
    BOT v29;  // xmm4
    unsigned long v3;  // [bp-0xe0]
    BOT v30;  // xmm5
    BOT v31;  // xmm6
    BOT v32;  // xmm7
    unsigned long v4;  // [bp-0xd8]
    unsigned long v5;  // [bp-0xd0]
    unsigned long v6;  // [bp-0xb0]
    unsigned long v7;  // [bp-0xa8]
    unsigned long v8;  // [bp-0xa0]
    BOT v9;  // [bp-0x98]

    v6 = v20;
    v7 = v22;
    v8 = v23;
    if (((long long)v18) != 0)
    {
        v9 = v25;
        v10 = v26;
        v11 = v27;
        v12 = v28;
        v13 = v29;
        v14 = v30;
        v15 = v31;
        v16 = v32;
    }
    v5 = *(v24 + 0x28);
    if (progress_len > 0)
    {
        v18 = *(stderr + 40);
        if (*(stderr + 40) < *(stderr + 48))
        {
            *(stderr + 40) = *(stderr + 40) + 1;
            *(v18) = 10;
            progress_len = 0;
            v3 = &stack_base+8;
            v4 = &stack_base-200;
            v1 = 24;
            v2 = 48;
            verror();
            if ((v5 ^ *(v24 + 0x28)) == 0)
            {
                return v5 ^ *(v24 + 0x28);
            }
            __stack_chk_fail(); /* do not return */
        }
        v0 = v21;
        __overflow();
        progress_len = 0;
        v3 = &stack_base+8;
        v4 = &stack_base-200;
        v1 = 24;
        v2 = 48;
        verror();
        if ((v5 ^ *(v24 + 0x28)) == 0)
        {
            return v5 ^ *(v24 + 0x28);
        }
        else
        {
            __stack_chk_fail(); /* do not return */
        }
    }
    v3 = &stack_base+8;
    v4 = &stack_base-200;
    v1 = 24;
    v2 = 48;
    verror();
    if ((v5 ^ *(v24 + 0x28)) == 0)
    {
        return v5 ^ *(v24 + 0x28);
    }
    else
    {
        __stack_chk_fail(); /* do not return */
    }
}
