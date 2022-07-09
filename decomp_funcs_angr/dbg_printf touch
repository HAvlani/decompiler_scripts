typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 stderr;

int dbg_printf()
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
    char v19;  // al
    unsigned long v2;  // [bp-0xd0]
    unsigned long v22;  // rcx
    unsigned long v23;  // rdx
    unsigned long v24;  // rsi
    unsigned long v25;  // r8
    unsigned long v26;  // r9
    struct_0 *v27;  // fs
    BOT v28;  // xmm0
    BOT v29;  // xmm1
    unsigned long v3;  // [bp-0xc8]
    BOT v30;  // xmm2
    BOT v31;  // xmm3
    BOT v32;  // xmm4
    BOT v33;  // xmm5
    BOT v34;  // xmm6
    BOT v35;  // xmm7
    unsigned long v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0xb0]
    unsigned long v6;  // [bp-0xa8]
    unsigned long v7;  // [bp-0xa0]
    unsigned long v8;  // [bp-0x98]
    unsigned long v9;  // [bp-0x90]

    v5 = v24;
    v6 = v23;
    v7 = v22;
    v8 = v25;
    v9 = v26;
    if (((long long)v19) != 0)
    {
        v10 = v28;
        v11 = v29;
        v12 = v30;
        v13 = v31;
        v14 = v32;
        v15 = v33;
        v16 = v34;
        v17 = v35;
        v4 = *(v27 + 0x28);
        fwrite("date: ", 0x1, 0x6, stderr);
        v2 = &stack_base+8;
        v0 = 8;
        v1 = 48;
        v3 = &stack_base-184;
        rpl_vfprintf();
        if ((v4 ^ *(v27 + 0x28)) == 0)
        {
            return v4 ^ *(v27 + 0x28);
        }
        __stack_chk_fail(); /* do not return */
    }
    v4 = *(v27 + 0x28);
    fwrite("date: ", 0x1, 0x6, stderr);
    v2 = &stack_base+8;
    v0 = 8;
    v1 = 48;
    v3 = &stack_base-184;
    rpl_vfprintf();
    if ((v4 ^ *(v27 + 0x28)) == 0)
    {
        return v4 ^ *(v27 + 0x28);
    }
    else
    {
        __stack_chk_fail(); /* do not return */
    }
}
