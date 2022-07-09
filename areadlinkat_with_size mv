int areadlinkat_with_size()
{
    char *v0;  // [bp-0xd0]
    char *|unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    unsigned int v5;  // esi
    unsigned int|void * v6;  // edi
    unsigned long v7;  // r12
    unsigned long long v8;  // r13
    unsigned int|char * v9;  // r14

    v8 = 128;
    if (v4 != 0)
    {
        v8 = (v4 < 1025? v4 + 1 : 1025);
    }
    v0 = &stack_base-200;
    while (true)
    {
        if (v8 != 128 || ((long long)(v4 != 0)) != 0 || r13<8> != 128)
        {
            v3 = malloc(v8);
            v9 = ((int)v3);
            if (v3 != 0)
            {
            }
            else
            {
                return 0;
            }
        }
        if (((long long)(v4 != 0)) == 0 || v3 != 0)
        {
            v3 = readlinkat(v6, v5, v9, ((int)r13<8>));
            if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                rpl_free();
                return 0;
            }
            else if (r13<8> <= v3)
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
                    return 0;
                }
            }
            else
            {
                *(&stack_base-200 + v3) = 0;
                v7 = v3 + 1;
                if (False)
                {
                    if (v8 <= v7)
                    {
                        return 0;
                    }
                    realloc(NULL, v7);
                    return 0;
                }
                v6 = malloc(v7);
                if (v6 != 0)
                {
                    memcpy(v6, &stack_base-200, v7);
                    return 0;
                }
                return 0;
            }
        }
        if (r13<8> == 128 || v8 == 128 && ((long long)(v4 != 0)) == 0 && r13<8> <= 4611686018427387903 && r13<8> <= v3 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) || v8 == 128 && r13<8> <= 4611686018427387903 && r13<8> <= v3 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && v3 != 0)
        {
            v9 = v0;
        }
    }
}
