typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int base64url_decode_ctx_wrapper()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    unsigned int v3;  // rdx
    struct_0 *v4;  // rbp
    void *v5;  // rsi
    char * v6;  // rsi
    void * v7;  // rdi
    struct_0 *v8;  // rdi
    struct_1 *v9;  // r8

    v4 = v8;
    v7 = v8->field_10;
    if (((unsigned int)v3) > v4->field_18)
    {
        v4->field_18 = ((unsigned int)v3) * 2;
        v4->field_10 = v7;
        v7 = (long long)xreallocarray();
    }
    memcpy(v7, v5, ((unsigned int)v3));
    v6 = v4->field_10;
    if (((unsigned int)v3) != 0)
    {
        v2 = v6 + ((unsigned int)v3);
        while (true)
        {
            v1 = ((long long)*(v6));
            if (((char)(((int)*(v6)) & -5)) == 43)
            {
                v9->field_0 = 0;
                return 0;
            }
            else if (v1 != 45)
            {
                if (v1 == 95)
                {
                    *(v6) = 47;
                }
                v6 += 1;
                v4->field_0 = v4->field_4;
                return (long long)base64_decode_ctx();
            }
            else
            {
                *(v6) = 43;
                v6 += 1;
                v4->field_0 = v4->field_4;
                return (long long)base64_decode_ctx();
            }
        }
    }
    v4->field_0 = v4->field_4;
    return (long long)base64_decode_ctx();
}
