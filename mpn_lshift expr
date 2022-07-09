typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int mpn_lshift()
{
    BOT tmp_31;  // tmp #31
    BOT tmp_51;  // tmp #51
    unsigned long long v1;  // rax
    unsigned long v10;  // rsi
    unsigned long v11;  // rdi
    unsigned long long v12;  // rdi
    unsigned long long v13;  // r8
    char v14;  // r9b
    unsigned long long v15;  // r10
    char v16;  // r11b
    unsigned long long v17;  // r12
    struct_0 * v2;  // rax
    unsigned long v3;  // rcx
    unsigned long long v4;  // rcx
    unsigned long v5;  // rdx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rbx
    struct_0 *v8;  // rbp
    unsigned long long v9;  // rsi

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
    {
        v14 = ((char)v3);
        if (!(((int)v3) != 0))
        {
            __assert_fail(); /* do not return */
        }
        else if (((int)v3) <= 63)
        {
            tmp_31 = v10;
            v9 = v5;
            v13 = tmp_31 + v5 * 8;
            v16 = ((char)(64 - ((int)v3)));
            v7 = v5 * 8 + v11;
            v6 = *(tmp_31 + v5 * 8 + 8);
            v4 = ((long long)(64 - ((int)v3)));
            tmp_51 = v4;
            v17 = v6 >> (tmp_51 & 63);
            v12 = v6 << (v14 & 63);
            v2 = v9 - 1;
            if (v9 != 1)
            {
                v9 = 0 - v9;
                v15 = v9 * 8;
                v13 += v9 * 8;
                v8 = v7 + v9 * 8;
                do
                {
                    v9 = *(v13 + v2 * 8 + 8);
                    *(v8 + v2 * 8) = *(v13 + v2 * 8 + 8) >> (v16 & 63) | v12;
                    v12 = v9 << (v14 & 63);
                    v2 -= 1;
                }
                while (v2 != 1);
                v7 = v7 + v15 + 8;
                *(v7 + 8) = v12;
                v1 = v17;
                return v1;
            }
            *(v7 + 8) = v12;
            v1 = v17;
            return v1;
        }
        else
        {
            __assert_fail(); /* do not return */
        }
    }
    __assert_fail(); /* do not return */
}
