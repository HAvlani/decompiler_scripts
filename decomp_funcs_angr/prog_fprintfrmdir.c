typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 program_name;

int prog_fprintf()
{
    unsigned int v0;  // [bp-0xe8]
    unsigned int v1;  // [bp-0xe4]
    BOT v10;  // [bp-0x88]
    BOT v11;  // [bp-0x78]
    BOT v12;  // [bp-0x68]
    BOT v13;  // [bp-0x58]
    BOT v14;  // [bp-0x48]
    BOT v15;  // [bp-0x38]
    BOT v16;  // [bp-0x28]
    char *v18;  // rax
    unsigned long v2;  // [bp-0xe0]
    char v21;  // al
    unsigned long v23;  // rcx
    unsigned long v24;  // rdx
    unsigned long long v25[7];  // rbp
    unsigned long long v26[7];  // rdi
    unsigned long v27;  // r8
    unsigned long v28;  // r9
    struct_0 *v29;  // fs
    unsigned long v3;  // [bp-0xd8]
    BOT v30;  // xmm0
    BOT v31;  // xmm1
    BOT v32;  // xmm2
    BOT v33;  // xmm3
    BOT v34;  // xmm4
    BOT v35;  // xmm5
    BOT v36;  // xmm6
    BOT v37;  // xmm7
    unsigned long v4;  // [bp-0xd0]
    unsigned long v5;  // [bp-0xb8]
    unsigned long v6;  // [bp-0xb0]
    unsigned long v7;  // [bp-0xa8]
    unsigned long v8;  // [bp-0xa0]
    BOT v9;  // [bp-0x98]

    v25 = v26;
    v5 = v24;
    v6 = v23;
    v7 = v27;
    v8 = v28;
    if (((long long)v21) != 0)
    {
        v9 = v30;
        v10 = v31;
        v11 = v32;
        v12 = v33;
        v13 = v34;
        v14 = v35;
        v15 = v36;
        v16 = v37;
    }
    v4 = *(v29 + 0x28);
    fputs_unlocked(program_name, v26);
    fwrite_unlocked(": ", 0x1, 0x2, v26);
    v0 = 16;
    v2 = &stack_base+8;
    v1 = 48;
    v3 = &stack_base-200;
    rpl_vfprintf();
    v18 = v25[5];
    if (v25[5] < v25[6])
    {
        v25[5] = v26[5] + 1;
        *(v18) = 10;
        if ((v4 ^ *(v29 + 0x28)) == 0)
        {
            return v4 ^ *(v29 + 0x28);
        }
        __stack_chk_fail(); /* do not return */
    }
    __overflow(((int)v25), 0xa);
    if ((v4 ^ *(v29 + 0x28)) == 0)
    {
        return v4 ^ *(v29 + 0x28);
    }
    else
    {
        __stack_chk_fail(); /* do not return */
    }
}
