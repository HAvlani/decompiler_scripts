int areadlinkat_with_size()
{
    unsigned long long v0;  // [bp-0xd0]
    char *v10;  // r15
    char *v2;  // rax
    char *v3;  // rax
    unsigned long v4;  // rdx
    unsigned int v5;  // esi
    void *|unsigned int v6;  // edi
    unsigned long v7;  // r12
    unsigned long long v8;  // r13
    unsigned long long|char * v9;  // r14

    v8 = 128;
    if (v4 != 0)
    {
        v8 = (v4 < 1025? v4 + 1 : 1025);
    }
    v0 = &stack_base-200;
    while (true)
    {
        if (v8 == 128 || r13<8> == 128)
        {
            v9 = v0;
        }
        v2 = readlinkat(v6, v5, v9, ((int)r13<8>));
        if (((long long)(v4 != 0)) != 0 || r13<8> != 128 || r13<8> <= 4611686018427387903 && r13<8> <= v2 && v8 != 128 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            v9 = malloc(r13<8>);
        }
        if (((long long)(v4 != 0)) != 0 || r13<8> != 128 || r13<8> <= 4611686018427387903 && r13<8> <= v2 && v8 != 128 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            if (v9 != 0)
            {
                v10 = v9;
                /* goto 4241542; */
            }
            else
            {
                v3 = v10;
                return v3;
            }
        }
        if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            rpl_free();
            v3 = v10;
            return v3;
        }
        else if (r13<8> <= v2)
        {
            rpl_free();
            if (r13<8> <= 4611686018427387903)
            {
                v8 = r13<8> * 2;
            }
            else if (v8 <= 9223372036854775806)
            {
                v8 = 9223372036854775807;
            }
            else
            {
                *(__errno_location() + None) = 12;
                v3 = v10;
                return v3;
            }
        }
        else
        {
            *(v9 + v2) = 0;
            v7 = v2 + 1;
            if (v10 == 0)
            {
                v6 = malloc(v7);
                if (v6 != 0)
                {
                    memcpy(v6, v9, v7);
                    v3 = v10;
                    return v3;
                }
                v3 = v10;
                return v3;
            }
            else if (v8 <= v7)
            {
                v3 = v10;
                return v3;
            }
            else
            {
                realloc(v10, v7);
                v3 = v10;
                return v3;
            }
        }
    }
}
