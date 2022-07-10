typedef struct struct_0 {
    unsigned long long field_0;
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int savewd_process_files()
{
    unsigned long v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x58]
    unsigned long|unsigned long long v10;  // rdx
    unsigned long long v11;  // rbp
    unsigned long|unsigned long long v12;  // rsi
    unsigned long long|unsigned int v13;  // rdi
    unsigned int v14;  // edi
    unsigned long long v15;  // r13
    unsigned long|unsigned long long v16;  // r14
    char **|struct_0 *|struct_2 * v17;  // r15
    unsigned int v2;  // [bp-0x4c]
    unsigned int v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x44]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long v9;  // rcx

    v0 = v10;
    v13 = ((int)v14) - 1;
    v3 = 0;
    v2 = v13;
    if (((int)(((long long)v2) - 1)) >= 0)
    {
        v6 = ((long long)v2);
        do
        {
            v11 = v6;
            v11 = v6 - 1;
            v6 -= 1;
        }
        while (*(v17[v6]) == 47 && ((int)v11) >= 0);
        if (((int)v11) > 0)
        {
            v17 = v12;
            v16 = 0;
            v1 = v12 + (v11 - 1) * 8 + 8;
            do
            {
                if (v4 <= 0 || ((int)0) != 3)
                {
                    v13 = v17->field_0;
                    v10 = v9;
                    v12 = &v3;
                    v6 = *(&stack_base-96)();
                    v16 = ((long long)(((int)v16) < v6? ((int)v6) : ((int)v16)));
                }
                if (v17->field_8->field_0 != 47)
                {
                    v6 = savewd_restore();
                    v16 = ((long long)(((int)v16) < v6? ((int)v6) : ((int)v16)));
                }
                v17 += 8;
            }
            while (v17 != v1);
        }
    }
    if (((int)(((long long)v2) - 1)) < 0 || ((int)v11) <= 0)
    {
        v16 = 0;
        v11 = 0;
    }
    savewd_finish();
    if (((unsigned int)v13) > ((int)v11))
    {
        v17 += v11 * 8;
        v15 = v17 + (v11 + ((long long)(v2 - ((int)v11)))) * 8 + 8;
        while (true)
        {
            v13 = v17->field_0;
            v10 = v9;
            v12 = &v3;
            v7 = *(&stack_base-96)();
            v16 = ((long long)(((int)r14<8>) < v7? ((int)v7) : ((int)r14<8>)));
            v17 += 8;
            if (v17 == v15)
            {
                break;
            }
        }
        v8 = v16;
        return v8;
    }
    v8 = v16;
    return v8;
}
