typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xgethostname()
{
    unsigned long long v0;  // [bp-0x1c8]
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbx
    struct_0 *v13;  // rbx
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rbp
    unsigned long long v16;  // r12
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // r13
    char v2;  // [bp-0x98]
    unsigned long long v20;  // r14
    unsigned long long v21;  // r14
    unsigned long long v22;  // r14
    char v3;  // [bp-0x35]
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v6;  // [bp-0x10]
    unsigned long long v7;  // [bp-0x8]

    v7 = v22;
    v21 = 0;
    v6 = v18;
    v5 = v16;
    v4 = v12;
    v15 = &v2;
    v1 = 100;
    v13 = __errno_location();
    while (true)
    {
        v3 = 0;
        v13->field_0 = 0;
        v11 = gethostname(((int)v15), 0x63);
        if (v11 == 0)
        {
            v11 = strlen(v15) + 1;
            if (99 <= v11)
            {
                v13->field_0 = 0;
            }
            else if (v21 != 0)
            {
                v10 = v21;
                v14 = v4;
                v17 = v5;
                v19 = v6;
                v20 = v7;
                return v10;
            }
            else
            {
                v21 = (long long)ximemdup();
                break;
            }
        }
        if (99 <= v11 || v11 != 0)
        {
            rpl_free();
            v11 = ((long long)v13->field_0);
            if (v13->field_0 <= 36)
            {
                v0 = 68723675137;
                if ((((char)(((long long)*(&stack_base-456 + ((v11 & 63) >> 3))) >> ((long long)((char)(v11 & 63 & 7))))) & 1) != 0)
                {
                    v15 = (long long)xpalloc();
                    v21 = v15;
                }
                else
                {
                    v21 = 0;
                    v10 = v21;
                    v14 = v4;
                    v17 = v5;
                    v19 = v6;
                    v20 = v7;
                    return v10;
                }
            }
            else
            {
                v21 = 0;
                v10 = v21;
                v14 = v4;
                v17 = v5;
                v19 = v6;
                v20 = v7;
                return v10;
            }
        }
    }
    v10 = v21;
    v14 = v4;
    v17 = v5;
    v19 = v6;
    v20 = v7;
    return v10;
}
