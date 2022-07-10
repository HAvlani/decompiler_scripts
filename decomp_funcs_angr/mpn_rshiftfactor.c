typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int mpn_rshift()
{
    BOT tmp_36;  // tmp #36
    unsigned long long v1;  // rax
    unsigned long long v10;  // r8
    unsigned long long v11;  // r9
    char v12;  // r11b
    unsigned long long v13;  // r12
    unsigned long long v2;  // rax
    unsigned long v3;  // rcx
    unsigned long long v4;  // rcx
    unsigned long v5;  // rdx
    char v6;  // bl
    struct_1 *v7;  // rsi
    unsigned long long v8;  // rdi
    struct_1 *v9;  // rdi

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
    {
        v12 = ((char)v3);
        if (!(((int)v3) != 0))
        {
            __assert_fail(); /* do not return */
        }
        else if (((int)v3) <= 63)
        {
            v6 = ((char)(64 - ((int)v3)));
            v4 = ((long long)(64 - ((int)v3)));
            tmp_36 = v4;
            v13 = v7->field_0 << (tmp_36 & 63);
            v11 = v7->field_0 >> (v12 & 63);
            if (v5 != 1)
            {
                v2 = 0;
                do
                {
                    v10 = *(v7 + v2 * 8 + 8);
                    *(v8 + v2 * 8) = *(v7 + v2 * 8 + 8) << (v6 & 63) | v11;
                    v2 += 1;
                    v11 = v10 >> (v12 & 63);
                }
                while (v5 - 1 != v2);
                v9 = v8 + (v5 - 1) * 8;
                v9->field_0 = v11;
                v1 = v13;
                return v1;
            }
            v9->field_0 = v11;
            v1 = v13;
            return v1;
        }
        else
        {
            __assert_fail(); /* do not return */
        }
    }
    __assert_fail(); /* do not return */
}
