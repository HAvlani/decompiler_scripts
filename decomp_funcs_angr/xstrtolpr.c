typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

extern <missing-type> g_40f980;

int xstrtol()
{
    BOT tmp_5;  // tmp #5
    struct_1 *v0;  // [bp-0x58]
    char v1;  // [bp-0x49]
    struct_2 *v10;  // rbp
    char **|unsigned long long v11;  // rsi
    char *v12;  // rdi
    char *v13;  // r8
    struct_1 *v14;  // r12
    unsigned long long v15;  // r14
    unsigned int|unsigned long long v16;  // r15
    unsigned int|unsigned long long v17;  // cc_dep1
    char v2;  // [bp-0x48]
    unsigned int v3;  // [bp+0x0]
    unsigned int|unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned int|unsigned long|unsigned long long v7;  // rcx
    unsigned int v8;  // edx
    unsigned long long v9;  // rbx

    v0 = v7;
    if (v8 <= 36)
    {
        v14 = (v11 == 0? &v2 : v11);
        v16 = v12;
        v3 = 0;
        v10 = __errno_location();
        v15 = v14->field_0;
        v9 = strtol(v12, v11, v8);
        if (v14->field_0 != v12)
        {
            v5 = ((int)v10->field_0);
            if (v10->field_0 == 0)
            {
                v16 = 0;
            }
            else
            {
                if (v5 != 34)
                {
                    v6 = v16;
                    return v6;
                }
                v16 = 1;
            }
            if (v10->field_0 == 0 || v5 == 34)
            {
                if (v13 != 0)
                {
                    if (((long long)*(*((v11 == 0? &v2 : v11)))) == 0)
                    {
                        v0->field_0 = v9;
                        v6 = v16;
                        return v6;
                    }
                    v1 = *(*((v11 == 0? &v2 : v11)));
                    v5 = strchr(v13, ((int)*(*((v11 == 0? &v2 : v11)))));
                    v7 = ((long long)v1);
                }
                else
                {
                    v0->field_0 = v9;
                    v6 = v16;
                    return v6;
                }
            }
        }
        else if (!(v13 != 0))
        {
            v6 = v16;
            return v6;
        }
        else if (((long long)*(*((v11 == 0? &v2 : v11)))) == 0)
        {
            v6 = v16;
            return v6;
        }
        else
        {
            v1 = *(*((v11 == 0? &v2 : v11)));
            v16 = 0;
            v5 = strchr(v13, ((int)*(*((v11 == 0? &v2 : v11)))));
            v9 = 1;
            v7 = ((long long)v1);
            if (v5 == 0)
            {
                v6 = v16;
                return v6;
            }
        }
        if (True)
        {
            v0->field_0 = v9;
        }
        v6 = v16;
        return v6;
        if (v13 != 0 && v14->field_0 != v12 && ((long long)*(*((v11 == 0? &v2 : v11)))) != 0 && (v10->field_0 == 0 || v5 == 34) && v5 != 0 || v14->field_0 == v12 && v13 != 0 && ((long long)*(*((v11 == 0? &v2 : v11)))) != 0 && v5 != 0)
        {
            v5 = v7 - 69;
            switch (v7 - 69 & 255)
            {
            case 0: case 2: case 6: case 8: case 11: case 15: case 20: case 21: case 34: case 38: case 40: case 47:
                v1 = v7;
                v5 = strchr(v13, 0x30);
                v7 = ((int)v1);
                if (v5 != 0)
                {
                    if (*(*((v11 == 0? &v2 : v11)) + 1) == 105)
                    {
                        v5 = 0x400;
                        break;
                    }
                    if (!(*(*((v11 == 0? &v2 : v11)) + 1) != 68))
                    {
                        v5 = 1000;
                        break;
                        v7 = ((long long)((unsigned int)v7)) - 66;
                        tmp_5 = v7;
                        switch (((long long)tmp_5))
                        {
                        case 9: case 41:
                            /* goto 4243827; */
                        case 23:
                            /* goto 4243920; */
                        case 24:
                            /* goto 4243936; */
                        case 32:
                            /* goto 4243928; */
                        case 33:
                            /* goto 4243944; */
                        }
                    }
                    else if (*(*((v11 == 0? &v2 : v11)) + 1) != 105)
                    {
                        if (*(*((v11 == 0? &v2 : v11)) + 1) != 66)
                        {
                            switch (((long long)(((int)v1) - 69)))
                            {
                            case 0:
                                /* goto 4243674; */
                            case 2: case 34:
                                /* goto 4243610; */
                            case 6: case 38:
                                /* goto 4243562; */
                            case 8: case 40:
                                /* goto 4243426; */
                            case 11:
                                /* goto 4243490; */
                            case 15: case 47:
                                /* goto 4243359; */
                            case 20:
                                /* goto 4243296; */
                            case 21:
                                /* goto 4243223; */
                            case 30:
                                /* goto 4243738; */
                            }
                        }
                    }
                }
            default:
                v5 = 0x400;
                break;
            }
            if (True)
            {
                v0->field_0 = v9;
            }
            v6 = v16;
            return v6;
            if (True)
            {
                v0->field_0 = v9;
            }
            v6 = v16;
            return v6;
            if (True)
            {
                v0->field_0 = v9;
            }
            v6 = v16;
            return v6;
            if (True)
            {
                v0->field_0 = v9;
            }
            v6 = v16;
            return v6;
            /* goto 4243585; */
            v5 = 0x400;
            /* goto 4243436; */
            v5 = 0x400;
            v5 = v9 * v5;
            if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>)))
            {
                /* goto 4243585; */
            }
            else
            {
                /* goto 4243585; */
            }
            v5 = 0x400;
            /* goto 4243500; */
            v5 = 0x400;
            v7 = 7;
            do
            {
                v11 = v5 * rbx<8>;
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = v11;
                }
                else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = 9223372036854775807;
                }
                else
                {
                    v9 = 0x8000000000000000;
                    /* goto 4243280; */
                }
                v17 = v7;
                v7 = ((int)v7) - 1;
            }
            while (v17 != 1);
            /* goto 4243288; */
            v5 = 0x400;
            /* goto 4243369; */
            v5 = 0x400;
            /* goto 4243684; */
            v5 = 0x400;
            v7 = 8;
            do
            {
                v11 = v5 * rbx<8>;
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = v11;
                }
                else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = 9223372036854775807;
                }
                else
                {
                    v9 = 0x8000000000000000;
                    /* goto 4243352; */
                }
                v17 = ((unsigned int)v7);
                v7 = ((long long)((unsigned int)v7)) - 1;
            }
            while (v17 != 1);
            /* goto 4243288; */
            v5 = 0x400;
            /* goto 4243620; */
            v7 = 5;
            do
            {
                v11 = v5 * rbx<8>;
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = v11;
                }
                else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = 9223372036854775807;
                }
                else
                {
                    v9 = 0x8000000000000000;
                    /* goto 4243552; */
                }
                v17 = v7;
                v7 = ((int)v7) - 1;
            }
            while (v17 != 1);
            /* goto 4243288; */
            /* goto 4243233; */
            v7 = 4;
            do
            {
                v11 = v5 * rbx<8>;
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = v11;
                }
                else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = 9223372036854775807;
                }
                else
                {
                    v9 = 0x8000000000000000;
                    /* goto 4243416; */
                }
                v17 = ((unsigned int)v7);
                v7 = ((long long)((unsigned int)v7)) - 1;
            }
            while (v17 != 1);
            /* goto 4243585; */
            v7 = 6;
            do
            {
                v11 = v5 * rbx<8>;
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = v11;
                }
                else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = 9223372036854775807;
                }
                else
                {
                    v9 = 0x8000000000000000;
                    /* goto 4243728; */
                }
                v17 = v7;
                v7 = ((long long)v7) - 1;
            }
            while (v17 != 1);
            /* goto 4243288; */
            /* goto 4243585; */
            v7 = v5 * v9;
            if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
            {
                v5 = v7 * v5;
            }
            /* goto 4243306; */
            /* goto 4243572; */
            v7 = 3;
            do
            {
                v11 = v5 * rbx<8>;
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = v11;
                }
                else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = 9223372036854775807;
                }
                else
                {
                    v9 = 0x8000000000000000;
                    /* goto 4243664; */
                }
                v17 = ((unsigned int)v7);
                v7 = ((long long)((unsigned int)v7)) - 1;
            }
            while (v17 != 1);
            /* goto 4243288; */
            if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>)))
            {
                /* goto 4243998; */
            }
            if (False)
            {
                /* goto 4243585; */
            }
            v14->field_0 = &g_40f980 + v15;
            v0->field_0 = v9;
            v6 = v16;
            return v6;
        }
    }
    __assert_fail(); /* do not return */
}
