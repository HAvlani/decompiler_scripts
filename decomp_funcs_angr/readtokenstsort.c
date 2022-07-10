typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int readtokens()
{
    unsigned int v0;  // [bp-0xa8]
    unsigned long v1;  // [bp-0xa0]
    unsigned long long v10;  // rax
    unsigned long long v12;  // rax
    unsigned long v13;  // rcx
    unsigned long v14;  // rdx
    struct_0 *v15;  // rbx
    unsigned long long v16;  // rbp
    unsigned long v17;  // rsi
    unsigned long v18;  // rdi
    struct_0 *v19;  // r8
    unsigned long v2;  // [bp-0x98]
    struct_0 *v20;  // r9
    unsigned long long v21;  // r12
    unsigned long long v22;  // r13
    struct_0 *v23;  // r14
    unsigned long long v24;  // r15
    unsigned long v3;  // [bp-0x90]
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]

    v1 = v18;
    v2 = v14;
    v3 = v13;
    if (v17 != 0)
    {
        v10 = v17 + 1;
    }
    else
    {
        v10 = 64;
    }
    v6 = v10;
    v21 = 0;
    v16 = (long long)xnmalloc();
    v7 = 0;
    v8 = 0;
    v22 = (long long)xnmalloc();
    v4 = &stack_base-88;
    v5 = &stack_base-96;
    while (true)
    {
        v24 = (long long)readtoken();
        if (v6 <= v21)
        {
            v16 = (long long)xpalloc();
            v22 = (long long)xreallocarray();
        }
        v15 = v22 + v21 * 8;
        v23 = rbp<8> + v21 * 8;
        if (v24 == 18446744069414584319)
        {
            break;
        }
        v21 += 1;
        ((unsigned int)v0) = v24 + 1;
        v15->field_0 = v24;
        v23->field_0 = memcpy((long long)xnmalloc(), NULL, ((unsigned int)v0));
    }
    v23->field_0 = 0;
    v15->field_0 = 0;
    rpl_free();
    v19->field_0 = v16;
    if (v20 != 0)
    {
        v20->field_0 = v22;
        v12 = v21;
        return v12;
    }
    rpl_free();
    v12 = v21;
    return v12;
}
