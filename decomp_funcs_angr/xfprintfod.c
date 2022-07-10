typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int xfprintf()
{
    unsigned int v0;  // [bp-0xd8]
    unsigned int v1;  // [bp-0xd4]
    BOT v10;  // [bp-0x78]
    BOT v11;  // [bp-0x68]
    BOT v12;  // [bp-0x58]
    BOT v13;  // [bp-0x48]
    BOT v14;  // [bp-0x38]
    BOT v15;  // [bp-0x28]
    BOT v16;  // [bp-0x18]
    char v18;  // al
    unsigned long long v19;  // rax
    unsigned long v2;  // [bp-0xd0]
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
    unsigned long v3;  // [bp-0xc8]
    BOT v30;  // xmm5
    BOT v31;  // xmm6
    BOT v32;  // xmm7
    unsigned long v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0xa8]
    unsigned long v6;  // [bp-0xa0]
    unsigned long v7;  // [bp-0x98]
    unsigned long v8;  // [bp-0x90]
    BOT v9;  // [bp-0x88]

    v5 = v21;
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
        v4 = *(v24 + 0x28);
        v0 = 16;
        v2 = &stack_base+8;
        v1 = 48;
        v3 = &stack_base-184;
        v19 = xvfprintf();
        if ((v4 ^ *(v24 + 0x28)) == 0)
        {
            return v19;
        }
        __stack_chk_fail(); /* do not return */
    }
    v4 = *(v24 + 0x28);
    v0 = 16;
    v2 = &stack_base+8;
    v1 = 48;
    v3 = &stack_base-184;
    v19 = xvfprintf();
    if ((v4 ^ *(v24 + 0x28)) == 0)
    {
        return v19;
    }
    else
    {
        __stack_chk_fail(); /* do not return */
    }
}
