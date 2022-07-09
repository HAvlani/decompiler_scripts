typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int transfer_entries()
{
    unsigned long long [2] v1;  // rax
    unsigned long long v10;  // r15
    unsigned long|unsigned long long [2]|unsigned long long v2;  // rdx
    unsigned long long [2] v3;  // rbx
    unsigned long long [2] v4;  // rbp
    unsigned long long v5[4];  // rsi
    struct_0 *v6;  // rdi
    unsigned long long v7[4];  // r12
    unsigned long long v8;  // r13
    unsigned long long v9[10];  // r14

    v9 = v6;
    v8 = v2;
    v7 = v5;
    v4 = v5[0];
    if (v5[0] >= v5[1])
    {
        return 1;
    }
    while (true)
    {
        v10 = v4[0];
        if (v4[0] != 0)
        {
            v3 = v4[1];
            if (v4[1] == 0)
            {
            }
            else
            {
                while (true)
                {
                    v10 = v3[0];
                    v1 = safe_hasher();
                    v2 = v3;
                    v3 = v3[1];
                    if (v1[0] != 0)
                    {
                        v2[1] = v1[1];
                        v1[1] = v2;
                        if (v3 == 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v1[0] = v10;
                        v9[3] = v9[3] + 1;
                        v2[0] = 0;
                        v2[1] = v9[9];
                        v9[9] = v2;
                        if (v3 == 0)
                        {
                            break;
                        }
                    }
                }
                v10 = v4[0];
            }
            v4[1] = 0;
            if (((long long)v8) == 0)
            {
                v3 = (long long)safe_hasher();
                if (v3[0] != 0)
                {
                    v1 = v9[9];
                    if (v9[9] != 0)
                    {
                        v9[9] = v6->field_48->field_8;
                    }
                    else
                    {
                        v1 = malloc(0x10);
                        if (v1 == 0)
                        {
                            return 0;
                        }
                    }
                    if (v1 != 0 || v9[9] != 0)
                    {
                        v2 = v3[1];
                        *(rax<8> + None) = r15<8>;
                        *(rax<8> + 8) = v2;
                        v3[1] = rax<8>;
                    }
                }
                else
                {
                    v3[0] = r15<8>;
                    v9[3] = v9[3] + 1;
                }
                if (v3[0] == 0 || v1 != 0 || v9[9] != 0)
                {
                    v4[0] = 0;
                    v4 += 16;
                    v7[3] = v7[3] - 1;
                    return 1;
                }
            }
        }
        if (v4[0] == 0 || ((long long)v8) != 0)
        {
            v4 += 16;
            return 1;
        }
    }
}
