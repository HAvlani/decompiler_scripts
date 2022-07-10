int areadlink_with_size()
{
    unsigned long long v0;  // [bp-0xd0]
    unsigned long long|void * v2;  // rax
    char *v3;  // rax
    unsigned long long v4;  // rbx
    unsigned long v5;  // rsi
    unsigned int v6;  // edi
    unsigned long v7;  // r12
    unsigned long long v8;  // r13
    unsigned long long v9;  // r15

    v4 = 128;
    if (v5 != 0)
    {
        v4 = (1025 <= v5? 1025 : v5 + 1);
    }
    v0 = &stack_base-200;
    while (true)
    {
        if (rbx<8> == 128 || v4 == 128)
        {
            v8 = v0;
            v9 = 0;
        }
        if (((long long)(v5 != 0)) != 0 || rbx<8> != 128 || v4 != 128)
        {
            v8 = malloc(rbx<8>);
            if (v8 != 0)
            {
                v9 = v8;
            }
            else
            {
                *(__errno_location() + None) = 12;
                v3 = v9;
                return v3;
            }
        }
        if (v8 != 0 || ((long long)(v5 != 0)) == 0 && rbx<8> == 128 || ((long long)(v5 != 0)) == 0 && v4 == 128)
        {
            v2 = readlink(v6, ((int)v8), ((int)rbx<8>));
        }
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && (((long long)(v5 != 0)) == 0 || v8 != 0) && (rbx<8> == 128 || v4 == 128 || v8 != 0))
        {
            if (rbx<8> <= v2)
            {
                rpl_free();
                if (rbx<8> <= 4611686018427387903)
                {
                    v4 = rbx<8> * 2;
                }
                else if (v4 <= 9223372036854775806)
                {
                    v4 = 9223372036854775807;
                }
                else
                {
                    *(__errno_location() + None) = 12;
                    v3 = v9;
                    return v3;
                }
            }
            else
            {
                *(v8 + v2) = 0;
                v7 = v2 + 1;
                if (v9 == 0)
                {
                    v2 = malloc(v7);
                    if (v2 == 0)
                    {
                        v3 = v9;
                        return v3;
                    }
                    memcpy(v2, v8, v7);
                    v3 = v9;
                    return v3;
                }
                else if (v4 <= v7)
                {
                    v3 = v9;
                    return v3;
                }
                else
                {
                    realloc(v9, v7);
                    v3 = v9;
                    return v3;
                }
            }
        }
        if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && (((long long)(v5 != 0)) == 0 || v8 != 0) && (rbx<8> == 128 || v4 == 128 || v8 != 0))
        {
            rpl_free();
            v3 = v9;
            return v3;
        }
    }
}
