int argmatch()
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v10;  // rsi
    char *v11;  // rdi
    unsigned long v12;  // r12
    unsigned long v13;  // r13
    char * v14;  // r15
    char v2;  // [bp-0x41]
    unsigned long v3;  // [bp-0x40]
    unsigned long|unsigned long long v5;  // rax
    unsigned long v6;  // rcx
    void *v7;  // rdx
    unsigned long long v8;  // rbx
    void * v9;  // rbp

    v13 = v6;
    v9 = v7;
    v8 = v10;
    v1 = v10;
    v3 = v7;
    v5 = strlen(v11);
    v14 = *(v8);
    if (*(v8) != 0)
    {
        v2 = 0;
        v12 = v5;
        v8 = 0;
        v0 = 18446744069414584319;
        while (true)
        {
            v5 = strncmp(v14, v11, v12);
            if (v5 == 0)
            {
                v5 = strlen(v14);
                if (v5 == v12)
                {
                    v0 = v8;
                    return v0;
                }
                else if (v0 == 18446744069414584319)
                {
                    v0 = v8;
                }
                else if (v3 != 0)
                {
                    v2 = ((char)(memcmp(v13 * v0 + v7, v9, v13) != 0? 1 : ((int)*(&stack_base-65))));
                }
                else
                {
                    v2 = 1;
                    /* goto 4274915; */
                }
            }
            if (v5 != v12 || v5 != 0)
            {
                v8 += 1;
                v9 += v6;
                v14 = *(v1 + v8 * 8);
                v0 = (v2 == 0? v0 : 18446744069414584318);
                return v0;
            }
        }
    }
    v0 = 18446744069414584319;
    return v0;
}
