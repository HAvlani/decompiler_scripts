typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int mpn_lshift()
{
    BOT tmp_31;  // tmp #31
    BOT tmp_51;  // tmp #51
    struct_0 * v1;  // rax
    unsigned long v10;  // rsi
    unsigned long long v11;  // rdi
    unsigned long v12;  // rdi
    unsigned long long v13;  // r8
    char v14;  // r9b
    unsigned long long v15;  // r10
    char v16;  // r11b
    unsigned long long v17;  // r12
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long v4;  // rcx
    unsigned long long v5;  // rdx
    unsigned long v6;  // rdx
    unsigned long long v7;  // rbx
    struct_0 *v8;  // rbp
    unsigned long long v9;  // rsi

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
    {
        v14 = ((char)v4);
        if (!(((int)v4) != 0))
        {
            __assert_fail(); /* do not return */
        }
        else if (((int)v4) <= 63)
        {
            tmp_31 = v10;
            v9 = v6;
            v13 = tmp_31 + v6 * 8;
            v16 = ((char)(64 - ((int)v4)));
            v7 = v6 * 8 + v12;
            v5 = *(tmp_31 + v6 * 8 + 8);
            v3 = ((long long)(64 - ((int)v4)));
            tmp_51 = v3;
            v17 = v5 >> (tmp_51 & 63);
            v11 = v5 << (v14 & 63);
            v1 = v9 - 1;
            if (v9 != 1)
            {
                v9 = 0 - v9;
                v15 = v9 * 8;
                v13 += v9 * 8;
                v8 = v7 + v9 * 8;
                do
                {
                    v9 = *(v13 + v1 * 8 + 8);
                    *(v8 + v1 * 8) = *(v13 + v1 * 8 + 8) >> (v16 & 63) | v11;
                    v11 = v9 << (v14 & 63);
                    v1 -= 1;
                }
                while (v1 != 1);
                v7 = v7 + v15 + 8;
                *(v7 + 8) = v11;
                v2 = v17;
                return v2;
            }
            *(v7 + 8) = v11;
            v2 = v17;
            return v2;
        }
        else
        {
            __assert_fail(); /* do not return */
        }
    }
    __assert_fail(); /* do not return */
}
