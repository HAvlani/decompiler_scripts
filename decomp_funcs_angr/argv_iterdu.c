typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[16];
    struct struct_1 *field_28;
} struct_0;

int argv_iter()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4[6];  // rbx
    struct_2 *v5;  // rbp
    unsigned long|struct_2 * v6;  // rsi
    unsigned long|struct_0 * v7;  // rdi

    v5 = v6;
    v4 = v7;
    if (v7->field_0 != 0)
    {
        v6 = v7 + 24;
        v7 += 16;
        v1 = getdelim(v7, v6, 0x0);
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            v5->field_0 = 1;
            v2 = v4[2];
            v4[1] = v4[1] + 1;
            return v2;
        }
        v5->field_0 = (0 - ((int)(feof(v4[0]) < 1)) & 2) + 2;
        v2 = 0;
        return v2;
    }
    v2 = v7->field_28->field_0;
    if (v7->field_28->field_0 != 0)
    {
        v3 = v7->field_28 + 8;
        v6->field_0 = 1;
        v7->field_28 = v3;
        return v2;
    }
    else
    {
        v6->field_0 = 2;
        return v2;
    }
}
