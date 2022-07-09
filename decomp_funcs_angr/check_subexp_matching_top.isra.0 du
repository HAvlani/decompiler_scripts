typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int check_subexp_matching_top.isra.0()
{
    unsigned long v0;  // [bp-0x178]
    struct_1 * v1;  // [bp-0x50]
    unsigned long long v10;  // rbp
    struct_1 *v11;  // rsi
    unsigned long long v12[32];  // rdi
    unsigned long long v13;  // r9
    unsigned long long v14;  // r12
    unsigned long long v15[21];  // r14
    unsigned long long v16[32];  // r15
    unsigned long|struct_1 * v2;  // [bp-0x48]
    struct_1 *v3;  // [bp-0x40]
    unsigned long long|struct_1 *|unsigned long long [2] v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx
    struct struct_1 ** v8;  // rdx
    unsigned long long v9;  // rbx

    v15 = v12[19];
    if (v11->field_0 > 0)
    {
        v16 = v12;
        v14 = v7;
        v9 = 0;
        while (true)
        {
            v10 = *(v8[0] + v9 * 8);
            v5 = *(v8[0] + v9 * 8) * 16 + v15[0];
            if (*((*(v8[0] + (v9 << 3)) << 4) + v15[0] + 8) == 8)
            {
                v5 = v5->field_0;
                if (v5 <= 63)
                {
                    v0 = v15[20];
                    if ((((char)(((long long)*(&stack_base-376 + ((v5 & 63) >> 3))) >> ((long long)((char)(v5 & 63 & 7))))) & 1) != 0)
                    {
                        v13 = v16[31];
                        v7 = v16[29];
                        if (v16[30] == v16[29])
                        {
                            v1 = v8;
                            v2 = v7 * 2;
                            v13 = realloc(v12[31], v12[29] * 16);
                            if (v13 == 0)
                            {
                                v6 = 12;
                                return v6;
                            }
                            v16[31] = v13;
                            v7 = v16[29];
                            v16[30] = v2;
                        }
                        if (v16[30] != v16[29] || v13 != 0)
                        {
                            v2 = v7;
                            v1 = v13;
                            v3 = v8;
                            v5 = calloc(0x1, 0x30);
                            *(v1 + v2 * 8) = v5;
                            if (v5 != 0)
                            {
                                v5[0] = v14;
                                v8 = v3;
                                v9 += 1;
                                v5[1] = v10;
                                v16[29] = v2 + 1;
                                v6 = 0;
                                break;
                            }
                            else
                            {
                                v6 = 12;
                                return v6;
                            }
                        }
                    }
                }
            }
            if (...)
            {
                v9 += 1;
                v6 = 0;
                return v6;
            }
        }
        return v6;
    }
    v6 = 0;
    return v6;
}
