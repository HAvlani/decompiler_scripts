typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char padding_10[8];
    unsigned long long field_18;
} struct_0;

int mpn_div_qr_1_invert()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long|unsigned int v3;  // ecx
    struct_0 *v4;  // rbx
    unsigned long long v5;  // rsi
    unsigned long v6;  // rdi

    if (v5 != 0)
    {
        v4 = v6;
        v2 = v5;
        v3 = 0;
        if ((0xfeffffff00000000 & v5) == 0)
        {
            do
            {
                v2 *= 0x100;
                v3 = 8;
            }
            while ((0xfeffffff00000000 & v2) == 0);
        }
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            do
            {
                v3 = 1;
                v2 = rax<8> * 2;
            }
            while (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))));
            v4->field_0 = v3;
            v4->field_8 = v5 * 1;
            v1 = mpn_invert_3by2();
            v4->field_18 = v1;
            return v1;
        }
        v4->field_0 = v3;
        v4->field_8 = v5 * 1;
        v1 = mpn_invert_3by2();
        v4->field_18 = v1;
        return v1;
    }
    __assert_fail(); /* do not return */
}
