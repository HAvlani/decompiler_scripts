typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
} struct_1;

int mpz_mul()
{
    BOT tmp_97;  // tmp #97
    BOT tmp_13;  // tmp #13
    unsigned int v0;  // [bp-0x4c]
    unsigned long|unsigned long long v1;  // [bp-0x48]
    unsigned long long v10;  // rbx
    struct_0 *v11;  // rbp
    struct_1 *|unsigned int v12;  // esi
    struct_0 *v13;  // rdi
    unsigned long long v14;  // r8
    unsigned long long v15;  // r9
    unsigned long long v16;  // r13
    unsigned int v17;  // r14d
    struct_1 *v2;  // [bp-0x40]
    unsigned long long v4;  // rax
    char v5;  // al
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    struct_1 *v9;  // rdx

    v11 = v13;
    v7 = ((long long)v12->field_4);
    v14 = ((long long)v9->field_4);
    if (!(v12->field_4 != 0))
    {
        v13->field_4 = 0;
        return v7;
    }
    else if (((int)v9->field_4) != 0)
    {
        v2 = v12;
        v0 = ((int)v7) ^ ((int)v14);
        tmp_97 = ((long long)(v14 >> 31));
        v14 = ((long long)(((int)v14) ^ ((int)(v14 >> 31))));
        v16 = ((long long)(v14 - tmp_97));
        v1 = ((long long)((v12->field_4 ^ v12->field_4 >> 31) - (v12->field_4 >> 31))) + v16;
        v17 = ((int)(((((long long)((((int)v7) ^ ((int)v7) >> 31) - (((int)v7) >> 31))) + v16) * 64 - 1 >> 6) + 1));
        v10 = (long long)gmp_default_alloc();
        if (((long long)((v12->field_4 ^ v12->field_4 >> 31) - (v12->field_4 >> 31))) < v16)
        {
            v1 = v1;
            mpn_mul();
            v15 = v1;
            v4 = 0;
            v8 = ((long long)v0);
            v5 = ((char)(*(v10 + (v15 << 3) + 8) == 0));
            v12 = ((int)v11->field_0);
            v11->field_0 = v17;
            tmp_13 = rax<8>;
            v11->field_8 = v10;
            v7 = ((long long)(((char)(v8 >> 31 & 1 ^ 1))? ((int)(v15 - tmp_13)) : ((int)(tmp_13 - v15))));
            v11->field_4 = (((char)(v8 >> 31 & 1 ^ 1))? ((int)(v15 - tmp_13)) : ((int)(tmp_13 - v15)));
            if (v12 != 0)
            {
            }
            else
            {
                return v7;
            }
        }
        mpn_mul();
        v15 = v1;
        v4 = 0;
        v8 = ((long long)v0);
        v5 = ((char)(*(v10 + (v15 << 3) + 8) == 0));
        v12 = ((int)v11->field_0);
        v11->field_0 = v17;
        tmp_13 = rax<8>;
        v11->field_8 = v10;
        v7 = ((long long)(((char)(v8 >> 31 & 1 ^ 1))? ((int)(v15 - tmp_13)) : ((int)(tmp_13 - v15))));
        v11->field_4 = (((char)(v8 >> 31 & 1 ^ 1))? ((int)(v15 - tmp_13)) : ((int)(tmp_13 - v15)));
        if (v12 != 0)
        {
        }
        else
        {
            return v7;
        }
    }
    else
    {
        v13->field_4 = 0;
        return v7;
    }
}
