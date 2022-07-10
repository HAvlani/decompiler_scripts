typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
    char field_4;
} struct_0;

int base2lsbf_decode_ctx()
{
    BOT tmp_17;  // tmp #17
    char|unsigned long|unsigned long long v1;  // rax
    struct_0 *v10;  // rdi
    struct_1 *v11;  // r8
    unsigned long long v12;  // r9
    char v2;  // al
    unsigned long long v3;  // rax
    unsigned long|unsigned int v4;  // ecx
    unsigned long long v5;  // rdx
    unsigned long v6;  // rdx
    unsigned long v7;  // rsi
    unsigned long long v8;  // rsi
    struct_2 *v9;  // rdi

    v11->field_0 = 0;
    v12 = v4;
    if (v6 != 0)
    {
        v8 = v7 + 1;
        v5 = v6 + v8;
        while (true)
        {
            v1 = ((long long)*(v8 + 1));
            if (*(v8 + 1) != 10)
            {
                if ((v1 - 48 & 255) <= 1)
                {
                    v1 = ((long long)(v1 == 49)) << (((char)v10->field_0) & 31);
                    v4 = ((int)(v10->field_0 + 1));
                    tmp_17 = v1;
                    v1 = tmp_17 | v10->field_4;
                    v10->field_4 = tmp_17 | v10->field_4;
                    v10->field_0 = v4;
                    if (v4 == 8)
                    {
                        v10->field_4 = 0;
                        v12 += 1;
                        v11->field_0 = v11->field_0 + 1;
                        *(v12 + 1) = v1;
                        v10->field_0 = 0;
                    }
                }
                else
                {
                    return 0;
                }
            }
            if (*(v8 + 1) == 10 || (v1 - 48 & 255) <= 1)
            {
                v8 += 1;
                return 1;
            }
        }
    }
    v3 = ((long long)v9->field_0);
    v2 = ((char)(v9->field_0 == 0));
    return rax<8>;
}
