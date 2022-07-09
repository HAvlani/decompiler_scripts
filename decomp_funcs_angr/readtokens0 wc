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
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rdx
    struct_1 * v14;  // rdx
    unsigned long long v15;  // rbx
    struct_0 *v16;  // rbp
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rsi
    struct_0 *v19;  // rsi
    void *v20;  // rdi
    unsigned long long v3;  // rax
    char v5;  // al
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rcx

    v16 = v19;
    while (true)
    {
        v15 = (long long)fgetc(v20);
        v1 = v19->field_30;
        if (((int)v15) != -1)
        {
            if (v19->field_38 != v19->field_30)
            {
                v19->field_30 = v19->field_30 + 1;
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
            if (v19->field_30 != v19->field_28)
            {
                if (v19->field_30 == v19->field_38)
                {
                    _obstack_newchunk();
                    v1 = v19->field_30;
                }
                v19->field_30 = v1 + 1;
                *(v1) = 0;
                save_token();
            }
            v14 = v16->field_88;
            if (v16->field_90 - v16->field_88 <= 7)
            {
                _obstack_newchunk();
                v14 = v16->field_88;
            }
            v14->field_0 = 0;
            v18 = v16->field_80;
            v11 = v16->field_88 + 8;
            if (v16->field_88 + 8 == v16->field_80)
            {
                v16->field_c0 = v16->field_c0 | 2;
            }
            tmp_21 = v11 + v16->field_a0;
            v13 = v16->field_78;
            v3 = tmp_21 & !(v16->field_a0);
            v9 = v16->field_90;
            v16->field_88 = tmp_21 & !(v16->field_a0);
            v16->field_88 = v3;
            v3 = v9;
            break;
            if (v3 - v13 <= v3 - v13)
            {
                break;
            }
        }
    }
    v16->field_8 = v18;
    v10 = v16->field_e0;
    v17 = v16->field_d8;
    v16->field_80 = v3;
    if (v10 == v17)
    {
        v16->field_118 = v16->field_118 | 2;
    }
    tmp_21 = v10 + v16->field_f8;
    v12 = v16->field_d0;
    v6 = tmp_21 & !(v16->field_f8);
    v8 = v16->field_e8;
    v16->field_e0 = tmp_21 & !(v16->field_f8);
    v16->field_d8 = v6;
    v16->field_10 = v17;
    v7 = ferror(((int)v20));
    v5 = ((char)(((int)v7) == 0));
    return rax<8>;
    if (v6 - v12 > v6 - v12)
    {
        v16->field_e0 = v6;
        v6 = v8;
        v16->field_d8 = v6;
        v16->field_10 = v17;
        v7 = ferror(((int)v20));
        v5 = ((char)(((int)v7) == 0));
        return rax<8>;
    }
}
