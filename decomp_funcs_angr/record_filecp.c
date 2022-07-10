int record_file()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v10;  // rbx
    unsigned long long v11[2];  // rbx
    unsigned long long v12[3];  // rbp
    unsigned long v13;  // rdi
    unsigned long long v14;  // r12
    unsigned long long v15;  // r12
    unsigned long long v16;  // r13
    unsigned long long v17;  // r13
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rbx

    if (v13 != 0)
    {
        v3 = v17;
        v2 = v14;
        v1 = &stack_base+0;
        v0 = v10;
        v11 = v8;
        v12 = (long long)xmalloc();
        v12[0] = (long long)xstrdup();
        v12[1] = v11[1];
        v12[2] = v11[0];
        v7 = hash_insert();
        if (!(v7 != 0))
        {
            xalloc_die(); /* do not return */
        }
        else
        {
            v9 = v0;
            v15 = v2;
            v16 = v3;
            return v7;
        }
    }
    else
    {
        return v6;
    }
}
