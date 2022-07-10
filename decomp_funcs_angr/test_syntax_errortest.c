typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int test_syntax_error()
{
    BOT tmp_14;  // tmp #14
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
    unsigned long long v18;  // [bp-0x8]
    unsigned long v2;  // [bp-0xd0]
    unsigned long long v20;  // rax
    unsigned long long v22;  // rax
    unsigned long v23;  // rcx
    unsigned long v24;  // rdx
    unsigned long v25;  // rsi
    unsigned long v26;  // r8
    unsigned long v27;  // r9
    struct_0 *v28;  // fs
    BOT v29;  // xmm0
    unsigned long v3;  // [bp-0xc8]
    BOT v30;  // xmm1
    BOT v31;  // xmm2
    BOT v32;  // xmm3
    BOT v33;  // xmm4
    BOT v34;  // xmm5
    BOT v35;  // xmm6
    BOT v36;  // xmm7
    unsigned long v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0xb0]
    unsigned long v6;  // [bp-0xa8]
    unsigned long v7;  // [bp-0xa0]
    unsigned long v8;  // [bp-0x98]
    unsigned long v9;  // [bp-0x90]

    v18 = v20;
    v22 = v18;
    v5 = v25;
    v6 = v24;
    v7 = v23;
    v8 = v26;
    v9 = v27;
    tmp_14 = v22;
    if (((long long)tmp_14) != 0)
    {
        v10 = v29;
        v11 = v30;
        v12 = v31;
        v13 = v32;
        v14 = v33;
        v15 = v34;
        v16 = v35;
        v17 = v36;
        v4 = *(v28 + 0x28);
        v2 = &stack_base+8;
        v0 = 8;
        v1 = 48;
        v3 = &stack_base-184;
        verror();
        exit(0x2); /* do not return */
    }
    v4 = *(v28 + 0x28);
    v2 = &stack_base+8;
    v0 = 8;
    v1 = 48;
    v3 = &stack_base-184;
    verror();
    exit(0x2); /* do not return */
}
