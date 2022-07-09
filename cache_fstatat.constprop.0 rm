typedef struct struct_0 {
    char padding_0[8];
    char field_8;
    char padding_9[39];
    unsigned long long field_30;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int cache_fstatat.constprop.0()
{
    struct_1 * v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned int v4;  // ecx
    struct_0 * v5;  // edx
    unsigned int v6;  // esi
    unsigned int v7;  // edi

    v2 = v5->field_30;
    if (v5->field_30 == 18446744069414584319)
    {
        v3 = __fxstatat(0x1, v7, v6, ((int)v5), 0x100);
        if (v3 != 0)
        {
            v5->field_30 = 18446744069414584318;
            v1 = __errno_location();
            v4 = ((int)v1->field_0);
            v5->field_8 = ((long long)v1->field_0);
            v5 = v4;
            v1->field_0 = v5;
            return -1;
        }
        v2 = v5->field_30;
    }
    if (v3 == 0 || v5->field_30 != 18446744069414584319)
    {
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            return 0;
        }
        v1 = __errno_location();
        v5 = ((long long)v5->field_8);
        v1->field_0 = v5;
        return -1;
    }
}
