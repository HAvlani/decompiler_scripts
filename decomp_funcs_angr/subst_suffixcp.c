int subst_suffix()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long v11;  // r12
    unsigned long v12;  // r13
    unsigned long v13;  // r14
    unsigned long v14;  // r15
    unsigned long v15;  // r15
    unsigned long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    void *v6;  // rdx
    unsigned long v7;  // rsi
    unsigned long long v8;  // rsi
    unsigned long v9;  // rdi

    v3 = v15;
    v8 = v7 - v9;
    v2 = v13;
    v1 = v12;
    v0 = v11;
    v14 = strlen(v6) + 1;
    memcpy((long long)ximalloc() + v8, v6, v14);
}
