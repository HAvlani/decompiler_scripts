typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xstrtoumax()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_6;  // tmp #6
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v10;  // rsi
    unsigned long|unsigned long long|unsigned int v11;  // edi
    char *|unsigned long long v12;  // r8
    struct_2 *v13;  // r12
    unsigned long|unsigned long long|unsigned int v14;  // r13
    struct_0 *v15;  // r14
    struct_0 *|unsigned long long v16;  // r14
    char *|unsigned long long|char [3] v17;  // r15
    unsigned long long|unsigned int v18;  // cc_dep1
    unsigned long|unsigned long long|unsigned int v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long|struct_2 * v5;  // rcx
    unsigned long long|unsigned int v6;  // rdx
    struct_2 *v7;  // rbx
    char *v8;  // rbp
    unsigned long v9;  // rsi

    if (v6 <= 36)
    {
        v14 = v11;
        v13 = (v9 == 0? &stack_base-72 : v9);
        v7 = v5;
        v8 = v12;
        v15->field_0 = 0;
        v15 = __errno_location();
        v17 = ((long long)*(v11));
        v10 = *(__ctype_b_loc());
        for (v2 = v11; ((long long)(*(v10 + (((long long)v17) << 1) + 1) & 32)) != 0; v2 += 1)
        {
            v17 = ((long long)*(v2 + 1));
        }
        if (v17 != 45)
        {
            v17 = v13->field_0;
            v12 = __strtoul_internal(v11, ((int)v13));
            if (v13->field_0 != v11)
            {
                v2 = ((int)v16->field_0);
                if (v16->field_0 == 0)
                {
                    v14 = 0;
                }
                else
                {
                    v14 = 1;
                    if (v2 != 34)
                    {
                        v14 = 4;
                        v4 = v14;
                        return v4;
                    }
                }
                if (v2 == 34 || v16->field_0 == 0)
                {
                    if (v8 != 0)
                    {
                        v16 = ((long long)v17[0]);
                        if (((long long)v17[0]) == 0)
                        {
                            v7->field_0 = v12;
                            v4 = v14;
                            return v4;
                        }
                        v0 = v12;
                        v2 = strchr(v8, ((int)v16));
                        v12 = v0;
                    }
                    else
                    {
                        v7->field_0 = v12;
                        v4 = v14;
                        return v4;
                    }
                }
            }
            else if (v8 == 0)
            {
                v14 = 4;
                v4 = v14;
                return v4;
            }
            else
            {
                v16 = ((long long)*(v14));
                if (((long long)*(v14)) == 0)
                {
                    v14 = 4;
                    v4 = v14;
                    return v4;
                }
                v14 = 0;
                v2 = strchr(v8, ((int)*(v11)));
                v12 = 1;
                if (v2 == 0)
                {
                    v14 = 4;
                    v4 = v14;
                    return v4;
                }
            }
            if (True)
            {
                v5->field_0 = v12;
                v14 = ((long long)(v14 | 2));
            }
            v4 = v14;
            return v4;
            if (v13->field_0 == v11 && ((long long)*(v14)) != 0 && v8 != 0 && v2 != 0 || ((long long)v17[0]) != 0 && v13->field_0 != v11 && v8 != 0 && (v2 == 34 || v16->field_0 == 0) && v2 != 0)
            {
                v6 = v16 - 69;
                switch (v16 - 69 & 255)
                {
                case 0: case 2: case 6: case 8: case 11: case 15: case 20: case 21: case 34: case 38: case 40: case 47:
                    v0 = v12;
                    v2 = strchr(v8, 0x30);
                    v12 = v0;
                    if (v2 != 0)
                    {
                        v3 = ((long long)v17[1]);
                        if (!(v17[1] != 68))
                        {
                            v10 = 2;
                            v2 = 1000;
                            break;
                        }
                        else if (v3 != 105)
                        {
                            v10 = ((long long)(((int)(v3 == 66)) + 1));
                            v2 = ((long long)(v3 != 66? 0x400 : 1000));
                            break;
                        }
                        else
                        {
                            v2 = 0x400;
                            v10 = ((long long)(v17[2] == 66)) * 2 + 1;
                            break;
                        }
                    }
                default:
                    v10 = 1;
                    v2 = 0x400;
                    break;
                }
                v16 = ((long long)(((int)v16) - 66));
                tmp_5 = v16;
                switch (((long long)tmp_5))
                {
                case 0:
                    break;
                case 3:
                    v11 = 6;
                    v5 = v2;
                    do
                    {
                        v12 = ((long long)(r8<8> * v5));
                        if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rax<8>, rcx<8>, cc_ndep<8>)))
                        {
                            v12 = 18446744069414584319;
                        }
                        v18 = v11;
                        v11 = ((int)v11) - 1;
                    }
                    while (v18 != 1);
                    break;
                case 5: case 37:
                    tmp_6 = ((long long)v2);
                    v5 = v2;
                    v2 = ((long long)(v12 * v2));
                    if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rax<8>, rcx<8>, cc_ndep<8>))))
                    {
                        v2 = ((long long)(v2 * v5));
                    }
                case 11: case 43:
                    if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rax<8>, rcx<8>, cc_ndep<8>))))
                    {
                        break;
                    }
                    else
                    {
                        break;
                    }
                case 14:
                    v11 = 5;
                    v5 = v2;
                    do
                    {
                        v12 = ((long long)(r8<8> * v5));
                        if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rax<8>, rcx<8>, cc_ndep<8>)))
                        {
                            v12 = 18446744069414584319;
                        }
                        v18 = v11;
                        v11 = ((long long)v11) - 1;
                    }
                    while (v18 != 1);
                case 18: case 50:
                    v11 = 4;
                    v5 = v2;
                    do
                    {
                        v12 = ((long long)(r8<8> * v5));
                        if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rax<8>, rcx<8>, cc_ndep<8>)))
                        {
                            v12 = 18446744069414584319;
                        }
                        v18 = v11;
                        v11 = ((long long)v11) - 1;
                    }
                    while (v18 != 1);
                case 23:
                    v11 = 8;
                    v5 = v2;
                    do
                    {
                        v12 = ((long long)(r8<8> * v5));
                        if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rax<8>, rcx<8>, cc_ndep<8>)))
                        {
                            v12 = 18446744069414584319;
                        }
                        v18 = v11;
                        v11 = ((int)v11) - 1;
                    }
                    while (v18 != 1);
                case 24:
                    v11 = 7;
                    v5 = v2;
                    do
                    {
                        v12 = ((long long)(r8<8> * v5));
                        if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rax<8>, rcx<8>, cc_ndep<8>)))
                        {
                            v12 = 18446744069414584319;
                        }
                        v18 = v11;
                        v11 = ((long long)v11) - 1;
                    }
                    while (v18 != 1);
                case 32:
                    break;
                case 33:
                    v17 += v10;
                    v13->field_0 = v17;
                    v14 = ((long long)(*(v17) != 0? ((int)r13<8>) | 2 : ((int)r13<8>)));
                    v7->field_0 = v12;
                    v4 = v14;
                    return v4;
                case 53:
                    break;
                default:
                    v5->field_0 = v12;
                    v14 = ((long long)(v14 | 2));
                    v4 = v14;
                    return v4;
                }
                v5->field_0 = v12;
                v14 = ((long long)(v14 | 2));
                v4 = v14;
                return v4;
                v16 = ((long long)v16);
            }
        }
        else
        {
            v14 = 4;
            v4 = v14;
            return v4;
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}