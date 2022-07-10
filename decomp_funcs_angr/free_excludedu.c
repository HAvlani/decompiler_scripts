typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int free_exclude()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v10[2];  // rdi
    struct_0 * v11;  // r8
    struct_1 * v12;  // r12
    unsigned long v13;  // r12
    unsigned long long v14[2];  // r13
    unsigned long v15;  // r13
    unsigned long v2;  // [bp-0x8]
    unsigned int v4;  // rax
    struct_2 * v7;  // rbx
    unsigned long|unsigned long long v8;  // rbx
    struct_1 *v9;  // rbp

    v2 = v15;
    v14 = v10;
    v1 = v13;
    v0 = v8;
    v12 = v10[0];
    if (v10[0] != 0)
    {
        while (true)
        {
            v9 = v12;
            v12 = v12->field_0;
            v4 = ((int)v9->field_8);
            if (v9->field_8 != 0)
            {
                if (v4 == 1)
                {
                    v11 = v9->field_10;
                    if (v9->field_20 > 0)
                    {
                        v8 = 0;
                        while (true)
                        {
                            if ((*(v11 + (v8 + (v8 << 3) << 3)) & 0x8000000) == 0)
                            {
                                v8 += 1;
                                if (v8 >= v9->field_20)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v8 += 1;
                                rpl_regfree();
                                v11 = v9->field_10;
                                if (v8 >= v9->field_20)
                                {
                                    break;
                                }
                            }
                        }
                    }
                    rpl_free();
                }
                rpl_free();
                if (v12 == 0)
                {
                    break;
                }
            }
            else
            {
                hash_free();
                rpl_free();
                break;
            }
        }
    }
    v7 = v14[1];
    if (v14[1] != 0)
    {
        while (true)
        {
            v7 = v7->field_0;
            rpl_free();
            rpl_free();
            if (v7 == 0)
            {
                break;
            }
        }
    }
}
