typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int replace_invalid_chars()
{
    unsigned long v0;  // [bp-0x60]
    char v1;  // [bp-0x4c]
    unsigned long long v10;  // r12
    unsigned long long v11;  // r14
    char * v12;  // r15
    struct_0 *v13;  // fs
    unsigned long long v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x40]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rbx
    char * v7;  // rbp
    char *v8;  // rsi
    void *v9;  // rdi

    v7 = v9;
    v5 = strlen(v9);
    v2 = 0;
    v10 = v7 + v5;
    if (v7 != v7 + v5)
    {
        v12 = v7;
        v0 = &stack_base-76;
        while (true)
        {
            v11 = v10 - v12;
            v6 = (long long)rpl_mbrtowc();
            if (v11 >= v6)
            {
                v5 = iswcntrl(v1);
                if (v5 == 0)
                {
                    v8 = v12;
                    v12 += v6;
                    memmove(v7, v8, v6);
                    v7 += v6;
                    *(v7) = 0;
                    return v3 ^ *(v13 + 0x28);
                }
            }
            v6 = 1;
            if (v11 < v6 || v5 != 0)
            {
                v12 += v6;
                *(v7) = 63;
                v7 += 1;
                v2 = 0;
                *(v7) = 0;
                return v3 ^ *(v13 + 0x28);
            }
        }
    }
    *(v7) = 0;
    return v3 ^ *(v13 + 0x28);
}
