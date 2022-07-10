typedef struct struct_3 {
    char padding_0[200];
    unsigned long long field_c8;
    unsigned long long field_d0;
    unsigned long long field_d8;
    unsigned int field_e0;
} struct_3;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_4 {
    char padding_0[40];
    char field_28;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char field_28;
} struct_2;

int get_subexp_sub.isra.0()
{
    BOT tmp_30;  // tmp #30
    BOT tmp_33;  // tmp #33
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v10;  // rdx
    unsigned long v11;  // rdx
    unsigned long long v12;  // rbx
    struct_3 *v13;  // rbp
    struct_0 *v14;  // rsi
    unsigned long|void * v15;  // rdi
    struct_2 *v16;  // rdi
    struct_4 *|unsigned long v17;  // r8
    unsigned long long v18;  // r14
    unsigned long long|unsigned int v19;  // r15d
    unsigned long long v3;  // rax
    unsigned long long v5;  // rax
    unsigned long long v7;  // rax
    unsigned long|unsigned long long v8;  // rcx
    struct_1 *v9;  // rdx

    v18 = v8;
    v13 = v15;
    v12 = v17;
    v0 = 8;
    v3 = check_arrival();
    if (((int)v3) != 0)
    {
        return v3;
    }
    v19 = v9->field_8;
    v5 = v13->field_c8;
    v11 = v13->field_d0;
    v8 = v14->field_0;
    v15 = v13->field_d8;
    if (v13->field_c8 >= v13->field_d0)
    {
        v1 = v14->field_0;
        v7 = realloc(v15, v11 * 96);
        if (v7 != 0)
        {
            tmp_30 = v13->field_c8;
            tmp_33 = v13->field_d0;
            v1 = v1;
            v13->field_d8 = v7;
            memset((tmp_30 + tmp_30 * 2) * 16 + v7, 0x0, (tmp_33 + tmp_33 * 2) * 16);
            v8 = v1;
            v13->field_d0 = v13->field_d0 * 2;
            v5 = v13->field_c8;
            v15 = v13->field_d8;
        }
        else
        {
            rpl_free();
            v3 = 12;
            return v3;
        }
    }
    if (v13->field_c8 < v13->field_d0 || v7 != 0)
    {
        v10 = v5 * 48;
        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            v17 = v15 + v10 - 48;
            if (v12 == *(v15 + v10 - 48 + 8))
            {
                v17->field_28 = 1;
            }
        }
        v16 = v15 + v10;
        v16->field_0 = v18;
        v16->field_8 = v12;
        v16->field_20 = 0 - ((long long)(v19 == v8));
        v16->field_10 = v8;
        v16->field_18 = v19;
        v13->field_c8 = v5 + 1;
        v16->field_28 = 0;
        if (((long long)v13->field_e0) < v19 - v8)
        {
            v19 = ((int)(v19 - v8));
            v13->field_e0 = ((int)(v19 - v8));
        }
    }
}
