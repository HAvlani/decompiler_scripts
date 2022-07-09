int iread_fullblock()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rsi
    unsigned long long v14;  // r12
    unsigned long long v15;  // r12
    unsigned long long v16;  // r12
    unsigned long long v17;  // r13
    unsigned long long v18;  // r13
    unsigned long long v19;  // r13
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v20;  // r13
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rbx

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
    {
        v3 = v20;
        v18 = 0;
        v2 = v14;
        v1 = &stack_base+0;
        v12 = v13;
        v0 = v9;
        v10 = v7;
        while (true)
        {
            v6 = iread();
            if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>)))
            {
                v8 = v0;
                v15 = v2;
                v17 = v3;
                return v6;
            }
            else if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
            {
                v10 -= v6;
                v18 += v6;
                v12 += v6;
                v5 = v18;
                v11 = v0;
                v16 = v2;
                v19 = v3;
                return v5;
            }
            else
            {
                v5 = v18;
                v11 = v0;
                v16 = v2;
                v19 = v3;
                return v5;
            }
        }
    }
    return 0;
}
