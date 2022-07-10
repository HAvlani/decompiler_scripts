typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    char padding_0[4];
    unsigned int field_4;
} struct_3;

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    char field_8;
    char field_9;
    char field_a;
    char field_b;
    char field_c;
} struct_0;

extern char z85_decoding;

int z85_decode_ctx()
{
    unsigned long long|char * v1;  // rax
    struct_3 *v10;  // rdi
    struct_0 *v11;  // rdi
    struct_1 *v12;  // r8
    unsigned long long v13;  // r10
    unsigned int v14;  // r11d
    char v2;  // al
    unsigned long long v3;  // rax
    unsigned long long v6;  // rdx
    unsigned long v7;  // rdx
    unsigned long long v8;  // rsi
    unsigned long v9;  // rsi

    v12->field_0 = 0;
    if (v7 != 0)
    {
        v8 = v9 + 1;
        v6 = v7 + v8;
        while (true)
        {
            v1 = ((long long)*(v8 + 1));
            if (*(v8 + 1) != 10)
            {
                if ((v1 - 33 & 255) <= 92)
                {
                    v1 = ((long long)(((int)v1) - 33));
                    v13 = ((long long)*(v1 + 0x409980));
                    if (((char)v13) >= 0)
                    {
                        v1 = ((long long)v11->field_4);
                        v14 = ((int)(((long long)v11->field_4) + 1));
                        v11->field_4 = ((int)(((long long)v11->field_4) + 1));
                        v11 + v1->field_8 = v13;
                        if (v14 == 5)
                        {
                            if (...)
                            {
                                v8 += 1;
                                v12->field_0 = v12->field_0 + 4;
                                *(rcx<8> + 4 + 4) = ...;
                                v11->field_4 = 0;
                                v11->field_0 = v11->field_4;
                                return 1;
                            }
                            return 0;
                        }
                    }
                    return 0;
                }
                return 0;
            }
            if (*(v8 + 1) == 10 || (v1 - 33 & 255) <= 92 && ((char)v13) >= 0 && v14 != 5)
            {
                v8 += 1;
                v11->field_0 = v11->field_4;
                return 1;
            }
        }
    }
    v3 = ((long long)v10->field_4);
    v2 = ((char)(v10->field_4 <= 0));
    return rax<8>;
}
