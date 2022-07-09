typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    char field_4;
} struct_1;

int base2msbf_decode_ctx()
{
    BOT tmp_34;  // tmp #34
    BOT tmp_49;  // tmp #49
    unsigned int|unsigned long|unsigned long long v1;  // rax
    struct_1 *v10;  // rdi
    struct_2 *v11;  // r8
    unsigned long long v12;  // r9
    char * v13;  // r10
    unsigned long long v2;  // rax
    char v3;  // al
    unsigned int|unsigned long long v4;  // ecx
    unsigned long|unsigned long long v5;  // rdx
    unsigned int v6;  // edx
    unsigned long long v7;  // rsi
    unsigned long v8;  // rsi
    struct_0 *v9;  // rdi

    v11->field_0 = 0;
    v13 = v4;
    if (v5 != 0)
    {
        v7 = v8 + 1;
        v12 = v7 + v5;
        while (true)
        {
            v1 = ((long long)*(v7 + 1));
            if (*(v7 + 1) != 10)
            {
                if ((v1 - 48 & 255) <= 1)
                {
                    v6 = ((int)v10->field_4);
                    v1 = ((long long)(v1 == 49));
                    if (v10->field_0 == 0)
                    {
                        v10->field_0 = 7;
                        v5 = ((long long)(v6 | ((int)v1) * 128));
                        tmp_34 = v5;
                        v10->field_4 = tmp_34;
                    }
                    else
                    {
                        v4 = ((int)(v10->field_0 - 1));
                        v1 = ((int)(v1 << (((char)(v10->field_0 - 1)) & 31)));
                        v10->field_0 = ((int)(v10->field_0 - 1));
                        v5 = ((long long)(v6 | v1));
                        tmp_49 = v5;
                        v10->field_4 = tmp_49;
                        if (v4 == 0)
                        {
                            v7 += 1;
                            *(v13) = v5;
                            v13 += 1;
                            v10->field_4 = 0;
                            v11->field_0 = v11->field_0 + 1;
                            v10->field_0 = 0;
                            return 1;
                        }
                    }
                }
                else
                {
                    return 0;
                }
            }
            if (*(v7 + 1) == 10 || (v1 - 48 & 255) <= 1 && v10->field_0 == 0 || (v1 - 48 & 255) <= 1 && v4 != 0)
            {
                v7 += 1;
                return 1;
            }
        }
    }
    v2 = ((long long)v9->field_0);
    v3 = ((char)(v9->field_0 == 0));
    return rax<8>;
}
