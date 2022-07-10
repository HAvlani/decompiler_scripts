typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int mpz_div_q_2exp.isra.0()
{
    unsigned long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    struct_1 *|unsigned long long v10;  // rsi
    struct_0 *v11;  // rdi
    unsigned long long v12;  // rdi
    unsigned int v13;  // r8d
    struct_1 *v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v16;  // r14
    char|unsigned long|unsigned int v17;  // r15b
    char|unsigned long|unsigned long long v3;  // rax
    unsigned long v5;  // rax
    unsigned long long v6;  // rcx
    struct_1 *|unsigned long long v7;  // rdx
    unsigned long|unsigned int v8;  // ebx
    struct_0 *v9;  // rbp

    v15 = v10;
    v9 = v11;
    if (v10 != 0)
    {
        v14 = v7;
        v12 = v3 % 64;
        v6 = ((long long)(((int)v3) & 63));
        v3 = v12;
        v8 = ((long long)((((int)v10) ^ ((int)(v10 >> 31))) - ((int)(v10 >> 31)))) - v3;
        if (v13 != ((int)[D] amd64g_calculate_condition(0xf<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
        {
            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
            {
                v7 = v3 * 8;
                v17 = 0;
            }
            else
            {
                v9->field_4 = 0;
            }
        }
        else
        {
            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
            {
                v10 = v7->field_0;
                if (v3 == 0)
                {
                }
                else
                {
                    while (true)
                    {
                        if (*(v7->field_0 + (v3 << 3) + 8) == 0)
                        {
                            v3 -= 1;
                        }
                        else
                        {
                            v7 = v3 * 8;
                            v17 = 1;
                            break;
                        }
                    }
                    if (*(v7->field_0 + (v3 << 3) + 8) == 0)
                    {
                        v17 = 0;
                        v7 = v3 * 8;
                        v17 = ((char)((!(18446744069414584319 << (((char)*(&stack_base-72)) & 63)) & *(v10 + (v3 << 3))) != 0));
                    }
                }
                v17 = 0;
                v7 = v3 * 8;
                v17 = ((char)((!(18446744069414584319 << (((char)*(&stack_base-72)) & 63)) & *(v10 + (v3 << 3))) != 0));
            }
            else
            {
                v9->field_4 = 0;
                /* goto 4235591; */
            }
        }
        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
        {
            if (v8 <= ((long long)v9->field_0))
            {
                v16 = v9->field_8;
            }
            else
            {
                v1 = v7;
                v0 = v6;
                v16 = (long long)mpz_realloc();
            }
            v3 = 0;
            v10 = v14->field_0 + v7;
            if (*(&stack_base-72) == 0)
            {
                do
                {
                    *(v16 + v3 * 8) = *(v10 + v3 * 8);
                    v3 += 1;
                }
                while (v8 > v3);
            }
            else
            {
                mpn_rshift();
                v3 = 0;
                v3 = ((char)(*(v16 + (v8 << 3) + 8) == 0));
                v8 = ((int)(v8 - ((long long)(*(v16 + (v8 << 3) + 8) == 0))));
            }
            v9->field_4 = v8;
        }
        if (v17 == 0 && !(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))) || ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>)) && v13 != ((int)[D] amd64g_calculate_condition(0xf<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
        {
            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
            {
                return v3;
            }
            v9->field_4 = 0 - v9->field_4;
            return (long long)mpz_set();
        }
        if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>)) && v13 == ((int)[D] amd64g_calculate_condition(0xf<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) || v17 != 0 && !(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
        {
            v3 = mpz_add_ui();
            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
            {
                return v3;
            }
            v9->field_4 = 0 - v9->field_4;
            return (long long)mpz_set();
        }
    }
    v11->field_4 = 0;
    return v5;
}
