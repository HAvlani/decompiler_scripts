typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int bsd_sum_stream()
{
    struct_0 *v0;  // [bp-0x48]
    unsigned long long v10;  // r12
    unsigned long long v11;  // r13
    struct_0 *v12;  // r14
    unsigned long long v13;  // r15
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    struct_1 *v5;  // rdx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbp
    unsigned long|unsigned long long v8;  // rsi
    struct_0 *|unsigned long long|char v9;  // rdi

    v12 = v9;
    v0 = v8;
    v3 = malloc(0x8000);
    if (&stack_base+0 != 0)
    {
        v7 = v3;
        v13 = 0;
        while (true)
        {
            v11 = 0;
            while (true)
            {
                v3 = fread_unlocked(v8 + v11, 0x1, 0x8000 - v11, v12);
                v11 += v3;
                if (v11 != 0x8000)
                {
                    if (v3 == 0)
                    {
                        v6 = -1;
                        if ((((char)v9->field_0) & 32) != 0)
                        {
                            rpl_free();
                            v2 = v6;
                            return v2;
                        }
                    }
                    if (v3 == 0 && (((char)v9->field_0) & 32) == 0 || v3 != 0 && (((char)v9->field_0) & 16) != 0)
                    {
                        v9 = 0;
                        v10 = 0 + v11;
                        v8 = v11 + v8;
                        v4 = v8;
                        v9 = ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, 0x0<64>, r13<8>, cc_ndep<8>));
                        if (v11 != 0)
                        {
                            do
                            {
                                v4 += 1;
                                v13 = ((long long)(((int)((v13 >> 1) + v13 * 0x8000)) + ((int)*(v4 + 1))));
                            }
                            while (False);
                        }
                        if (rdi<8> == 0 || v11 == 0)
                        {
                            v6 = 0;
                            v0->field_0 = ((int)v13);
                            v5->field_0 = v10;
                            rpl_free();
                            v2 = v6;
                            return v2;
                        }
                    }
                }
                v8 = v7;
                v9 = v7 + 0x8000;
                do
                {
                    v8 += 1;
                    v13 = ((long long)(((int)((v13 >> 1) + v13 * 0x8000)) + ((int)*(v8 + 1))));
                }
                while (v8 != v9);
                if ((((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, 0x0<64>, 0x8000<64>, cc_ndep<8>)) || v11 != 0x8000) && (v11 == 0x8000 || rdi<8> != 0) && (v11 == 0x8000 || v11 != 0) && (v11 == 0x8000 || v3 == 0 || (((char)v9->field_0) & 16) != 0) && (v11 == 0x8000 || (((char)v9->field_0) & 32) == 0 || v3 != 0))
                {
                    v6 = -1;
                    *(__errno_location() + None) = 75;
                    rpl_free();
                    v2 = v6;
                    return v2;
                }
            }
        }
    }
    v6 = -1;
    v2 = v6;
    return v2;
}
