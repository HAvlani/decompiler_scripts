typedef struct struct_0 {
    char field_0;
} struct_0;

extern unsigned long long numname_table;

int str2sig()
{
    char v0;  // [bp-0x38]
    struct_0 *v10;  // r12
    unsigned long long|char * v11;  // r13
    unsigned long long v12;  // cc_dep1
    unsigned long long v13;  // cc_dep1
    unsigned long long v14;  // cc_dep2
    unsigned long v15;  // d
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    struct_0 *v7;  // rbp
    struct_0 * v8;  // rsi
    struct_0 *|char * v9;  // rdi

    v11 = "HUP";
    v10 = v8;
    v7 = v9;
    v6 = 0;
    if (((int)v9->field_0) - 48 <= 9)
    {
        v2 = strtol(v9, &v0, 0xa);
        if (!(*(v0) == 0))
        {
            v10->field_0 = -1;
            v3 = -1;
            return v3;
        }
        else if (v2 <= 64)
        {
            v10->field_0 = ((int)v2);
            v3 = v2 >> 31;
            return v3;
        }
        else
        {
            v10->field_0 = -1;
            v3 = -1;
            return v3;
        }
    }
    while (true)
    {
        v2 = strcmp(v11, v9);
        if (v2 != 0)
        {
            v6 = ((long long)(((int)v6) + 1));
            v11 += 12;
            v11 = __libc_current_sigrtmin();
            v6 = __libc_current_sigrtmax();
            if (((int)v11) > 0)
            {
                v4 = 5;
                v9 = "RTMIN";
                v8 = v7;
                while (v4 != 0)
                {
                    v4 -= 1;
                    v13 = ((long long)v8->field_0);
                    v14 = ((long long)*(v9));
                    v9 += v15;
                    v8 += v15;
                    break;
                }
                v12 = ((long long)(((char)(v13 > v14)) - 0 - ((char)(v13 < v14))));
                if (((char)v12) == 0)
                {
                    v5 = strtol(v8 + 5, &v0, 0xa);
                    if (*(v0) != 0)
                    {
                        v10->field_0 = -1;
                        v3 = -1;
                        return v3;
                    }
                    else if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
                    {
                        if (v5 > ((long long)(v6 - v11)))
                        {
                            v10->field_0 = -1;
                            v3 = -1;
                            return v3;
                        }
                        else
                        {
                            v2 = v11 + v5;
                            v10->field_0 = ((int)v2);
                            v3 = v2 >> 31;
                            return v3;
                        }
                        v10->field_0 = -1;
                        v3 = -1;
                        return v3;
                    }
                }
            }
            if (((int)v6) > 0 && (((int)v11) <= 0 || ((char)v12) != 0))
            {
                v10->field_0 = -1;
                v3 = -1;
                return v3;
                v4 = 5;
                v9 = "RTMAX";
                while (v4 != 0)
                {
                    v4 -= 1;
                    v12 = ((long long)*(rsi<8>));
                    v14 = ((long long)*(v9));
                    v9 += v15;
                    v8 = rsi<8> + v15;
                    break;
                }
                v12 = ((long long)(((char)(v12 > v14)) - 0 - ((char)(v12 < v14))));
                if (((char)v12) != 0)
                {
                    v10->field_0 = -1;
                    v3 = -1;
                    return v3;
                }
                else
                {
                    v5 = strtol(v8 + 5, &v0, 0xa);
                    if (*(v0) != 0)
                    {
                        v10->field_0 = -1;
                        v3 = -1;
                        return v3;
                    }
                    else
                    {
                        v11 = ((long long)(v11 - v6));
                        if (v5 >= v11)
                        {
                            v10->field_0 = -1;
                            v3 = -1;
                            return v3;
                            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
                            {
                                v10->field_0 = -1;
                                v3 = -1;
                                return v3;
                            }
                            else
                            {
                                v2 = v6 + v5;
                                v10->field_0 = ((int)v2);
                                v3 = v2 >> 31;
                                break;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            v2 = ((long long)*(numname_table + v6 * 12));
            v10->field_0 = ((int)v2);
            v3 = v2 >> 31;
            return v3;
        }
    }
    return v3;
}
