typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int xpalloc()
{
    unsigned long long v10;  // r9
    unsigned long long v11;  // r10
    unsigned long v2;  // rcx
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rbx
    struct_0 *v5;  // rbp
    unsigned long long v6;  // rsi
    struct_0 *v7;  // rsi
    unsigned long v8;  // rdi
    unsigned long v9;  // r8

    v11 = v3;
    v5 = v7;
    v10 = v7->field_0;
    v4 = (v7->field_0 >> 1) + v7->field_0;
    if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rbx<8>, r10<8>, cc_ndep<8>)))
    {
        v4 = 9223372036854775807;
    }
    if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rbx<8>, r10<8>, cc_ndep<8>))))
    {
        v4 = (v2 < v4? v2 : v4);
    }
    v6 = v9 * v4;
    if (!(!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rbx<8>, r10<8>, cc_ndep<8>)))))
    {
        v6 = 9223372036854775807;
    }
    else if (!(v6 > 127))
    {
        v6 = 128;
    }
    if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rbx<8>, r10<8>, cc_ndep<8>)) || v6 <= 127)
    {
        v4 = ((long long)((v6 >> 63 CONCAT v6) % v9));
    }
    if (v8 == 0)
    {
        v5->field_0 = 0;
    }
    if (v4 - v10 < v3)
    {
        v10 += v11;
        v4 = v10;
        if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rbx<8>, r10<8>, cc_ndep<8>))))
        {
            if (v4 > v2)
            {
                if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rbx<8>, r10<8>, cc_ndep<8>))))
                {
                    xalloc_die(); /* do not return */
                }
            }
            if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rbx<8>, r10<8>, cc_ndep<8>)) || v4 <= v2)
            {
                if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rbx<8>, r10<8>, cc_ndep<8>))))
                {
                    v5->field_0 = v4;
                    return (long long)xrealloc();
                }
                xalloc_die(); /* do not return */
            }
        }
        xalloc_die(); /* do not return */
    }
    v5->field_0 = v4;
    return (long long)xrealloc();
}
