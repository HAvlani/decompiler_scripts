typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[16];
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    char padding_40[56];
    unsigned long long field_78;
    unsigned long long field_80;
    unsigned long long field_88;
    unsigned long long field_90;
    char padding_98[8];
    unsigned long long field_a0;
    char padding_a8[24];
    char field_c0;
    char padding_c1[15];
    unsigned long long field_d0;
    unsigned long long field_d8;
    unsigned long long field_e0;
    unsigned long long field_e8;
    char padding_f0[8];
    unsigned long long field_f8;
    char padding_100[24];
    char field_118;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int readtokens0()
{
    BOT tmp_21;  // tmp #21
    char * v1;  // rax
    struct_1 * v10;  // rdx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rbx
    struct_0 *v16;  // rbp
    struct_0 *v17;  // rsi
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rsi
    char v2;  // al
    void *v20;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rcx

    v16 = v17;
    while (true)
    {
        v15 = (long long)fgetc(v20);
        v1 = v17->field_30;
        if (((int)v15) != -1)
        {
            if (v17->field_38 != v17->field_30)
            {
                v17->field_30 = v17->field_30 + 1;
                *(v1) = v15;
            }
            else
            {
                _obstack_newchunk();
                v1 = v16->field_30;
                v16->field_30 = v16->field_30 + 1;
                *(v1) = v15;
            }
            save_token();
        }
        else
        {
            if (v17->field_30 != v17->field_28)
            {
                if (v17->field_30 == v17->field_38)
                {
                    _obstack_newchunk();
                    v1 = v17->field_30;
                }
                v17->field_30 = v1 + 1;
                *(v1) = 0;
                save_token();
            }
            v10 = v16->field_88;
            if (v16->field_90 - v16->field_88 <= 7)
            {
                _obstack_newchunk();
                v10 = v16->field_88;
            }
            v10->field_0 = 0;
            v19 = v16->field_80;
            v11 = v16->field_88 + 8;
            v16->field_c0 = v16->field_c0 | 2;
            break;
            if (v16->field_88 + 8 != v16->field_80)
            {
                break;
            }
        }
    }
    tmp_21 = v11 + v16->field_a0;
    v12 = v16->field_78;
    v7 = tmp_21 & !(v16->field_a0);
    v8 = v16->field_90;
    v16->field_88 = tmp_21 & !(v16->field_a0);
    if (v7 - v12 > v7 - v12)
    {
        v16->field_88 = v7;
        v7 = v8;
    }
    v16->field_8 = v19;
    v13 = v16->field_e0;
    v18 = v16->field_d8;
    v16->field_80 = v7;
    if (v13 == v18)
    {
        v16->field_118 = v16->field_118 | 2;
    }
    tmp_21 = v13 + v16->field_f8;
    v14 = v16->field_d0;
    v6 = tmp_21 & !(v16->field_f8);
    v9 = v16->field_e8;
    v16->field_e0 = tmp_21 & !(v16->field_f8);
    v16->field_d8 = v6;
    v16->field_10 = v18;
    v4 = ferror(((int)v20));
    v2 = ((char)(((int)v4) == 0));
    return rax<8>;
    if (v6 - v14 > v6 - v14)
    {
        v16->field_e0 = v6;
        v6 = v9;
        v16->field_d8 = v6;
        v16->field_10 = v18;
        v4 = ferror(((int)v20));
        v2 = ((char)(((int)v4) == 0));
        return rax<8>;
    }
}
