typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int xasprintf()
{
    unsigned int v0;  // [bp-0xd8]
    unsigned int v1;  // [bp-0xd4]
    BOT v10;  // [bp-0x88]
    BOT v11;  // [bp-0x78]
    BOT v12;  // [bp-0x68]
    BOT v13;  // [bp-0x58]
    BOT v14;  // [bp-0x48]
    BOT v15;  // [bp-0x38]
    BOT v16;  // [bp-0x28]
    BOT v17;  // [bp-0x18]
    unsigned long long v19;  // rax
    unsigned long v2;  // [bp-0xd0]
    char v20;  // al
    unsigned long v21;  // rcx
    unsigned long v22;  // rdx
    unsigned long v23;  // rsi
    unsigned long v24;  // r8
    unsigned long v25;  // r9
    struct_0 *v26;  // fs
    BOT v27;  // xmm0
    BOT v28;  // xmm1
    BOT v29;  // xmm2
    unsigned long v3;  // [bp-0xc8]
    BOT v30;  // xmm3
    BOT v31;  // xmm4
    BOT v32;  // xmm5
    BOT v33;  // xmm6
    BOT v34;  // xmm7
    unsigned long v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0xb0]
    unsigned long v6;  // [bp-0xa8]
    unsigned long v7;  // [bp-0xa0]
    unsigned long v8;  // [bp-0x98]
    unsigned long v9;  // [bp-0x90]

    v5 = v23;
    v6 = v22;
    v7 = v21;
    v8 = v24;
    v9 = v25;
    if (((long long)v20) != 0)
    {
        v10 = v27;
        v11 = v28;
        v12 = v29;
        v13 = v30;
        v14 = v31;
        v15 = v32;
        v16 = v33;
        v17 = v34;
        v4 = *(v26 + 0x28);
        v0 = 8;
        v2 = &stack_base+8;
        v1 = 48;
        v3 = &stack_base-184;
        v19 = xvasprintf();
        if ((v4 ^ *(v26 + 0x28)) == 0)
        {
            return v19;
        }
        __stack_chk_fail(); /* do not return */
    }
    v4 = *(v26 + 0x28);
    v0 = 8;
    v2 = &stack_base+8;
    v1 = 48;
    v3 = &stack_base-184;
    v19 = xvasprintf();
    if ((v4 ^ *(v26 + 0x28)) == 0)
    {
        return v19;
    }
    else
    {
        __stack_chk_fail(); /* do not return */
    }
}
