typedef struct struct_0 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int savewd_chdir()
{
    unsigned long long|struct_1 *|unsigned int v1;  // rax
    unsigned long v10;  // r13
    unsigned int v11;  // r13d
    unsigned long long v2;  // rax
    unsigned int v3[2];  // rcx
    unsigned long|unsigned int v4;  // rdx
    struct_1 *v5;  // rbx
    unsigned long long|unsigned int v6;  // rbp
    unsigned int v7;  // esi
    struct_0 *v8;  // rdi
    struct_0 *v9;  // r12

    v11 = ((int)v4);
    v9 = v8;
    if (v3 != 0)
    {
        v3[0] = &stack_base+0;
        v6 = __open_2(v7, ((int)v4) * 0x20000 & 0x20000 | 0x10900);
        v1 = ((int)*(__errno_location()));
        v3[1] = v1;
    }
    else
    {
        v6 = -1;
        if (((long long)(v4 & 1)) != 0)
        {
            v6 = __open_2(v7, ((int)v4) * 0x20000 & 0x20000 | 0x10900);
        }
    }
    if (v3 != 0 || ((long long)(v4 & 1)) != 0)
    {
        if (!(v6 >= 0))
        {
            v1 = __errno_location();
            if (v1->field_0 != 13)
            {
                v2 = v10;
                return v2;
            }
        }
        else if ((((char)((int)v4)) & 2) == 0)
        {
            if (v8->field_0 != 3)
            {
                if (((char)[D] amd64g_calculate_condition(0x6<64>, 0x7<64>, Conv(32->64, Load(addr=rdi<8>, size=4, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)))
                {
                }
                else
                {
                    if (v8->field_0 - 4 > 1)
                    {
                        __assert_fail(); /* do not return */
                    }
                }
            }
            if (((int)v8->field_4) < 0)
            {
                v1 = fork();
                v8->field_4 = ((int)v1);
            }
        }
    }
    if (v6 < 0 || v3 == 0)
    {
        if (v6 < 0 || ((long long)(v4 & 1)) == 0)
        {
            if (v1->field_0 == 13 || v3 == 0)
            {
                if (v1->field_0 == 13 || ((long long)(v4 & 1)) == 0)
                {
                    if (v8->field_0 != 3)
                    {
                        if (((char)[D] amd64g_calculate_condition(0x6<64>, 0x7<64>, Conv(32->64, Load(addr=rdi<8>, size=4, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)))
                        {
                            if (v8->field_0 != 0)
                            {
                                /* goto 4217936; */
                            }
                        }
                        else
                        {
                            if (v8->field_0 - 4 > 1)
                            {
                                __assert_fail(); /* do not return */
                            }
                        }
                    }
                    else
                    {
                        if (((int)v8->field_4) < 0)
                        {
                            v1 = fork();
                            v8->field_4 = v1;
                            if (v1 == 0)
                            {
                                /* goto 4217936; */
                            }
                        }
                    }
                }
            }
        }
    }
    if (((char)[D] amd64g_calculate_condition(0x6<64>, 0x7<64>, Conv(32->64, Load(addr=rdi<8>, size=4, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)) && v8->field_0 == 0 && (((char)((int)v4)) & 2) == 0 && v6 >= 0 && v8->field_0 != 3 && (v3 != 0 || ((long long)(v4 & 1)) != 0) || ((char)[D] amd64g_calculate_condition(0x6<64>, 0x7<64>, Conv(32->64, Load(addr=rdi<8>, size=4, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)) && v8->field_0 == 0 && v8->field_0 != 3 && (v6 < 0 || v3 == 0) && (v6 < 0 || ((long long)(v4 & 1)) == 0) && (v1->field_0 == 13 || v3 == 0) && (v1->field_0 == 13 || ((long long)(v4 & 1)) == 0))
    {
        v1 = open_safer();
        if (v1 >= 0)
        {
            v9->field_0 = 1;
            v9->field_4 = v1;
        }
        else
        {
            v1 = __errno_location();
            v4 = ((int)v1->field_0);
            if (v1->field_0 != 13)
            {
                if (v4 != 116)
                {
                    v9->field_0 = 4;
                    v1 = ((int)v1->field_0);
                    v9->field_4 = v1->field_0;
                }
            }
        }
    }
    if (...)
    {
        v8->field_0 = 18446744065119617027;
        v1 = fork();
        v8->field_4 = ((int)v1);
    }
    if (...)
    {
        if (v1 <= 0)
        {
            v8->field_0 = 4;
            v1 = ((int)*(__errno_location()));
            v8->field_4 = v1;
        }
        else
        {
            v1 = 1;
        }
    }
    if (...)
    {
        if (((unsigned int)v6) < 0)
        {
            /* goto 4217936; */
        }
    }
    if (...)
    {
        v1 = fchdir(((unsigned int)v6));
    }
    if (...)
    {
        v1 = chdir(v7);
        if (v1 != 0)
        {
            v2 = v10;
            return v2;
        }
    }
    if (...)
    {
        if (v8->field_0 != 3)
        {
            if (((char)[D] amd64g_calculate_condition(0x6<64>, 0x7<64>, Conv(32->64, Load(addr=rdi<8>, size=4, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)))
            {
                if (v8->field_0 == 1)
                {
                    v8->field_0 = 2;
                    /* goto 4217992; */
                }
                else if (v8->field_0 != 2)
                {
                    __assert_fail(); /* do not return */
                }
            }
            else
            {
                if (v8->field_0 - 4 > 1)
                {
                    __assert_fail(); /* do not return */
                }
            }
        }
        else
        {
            if (v8->field_4 != 0)
            {
                __assert_fail(); /* do not return */
            }
        }
    }
    if (...)
    {
        v1 = ((char)(v3 == 0));
    }
    if (...)
    {
        v1 = ((char)(v3 == 0));
    }
    if (...)
    {
        if (!(((unsigned int)v6) >= 0))
        {
            v2 = v10;
            return v2;
        }
        else if (((long long)v1) != 0)
        {
            close(((unsigned int)v6));
            *(__errno_location() + None) = ((int)v5->field_0);
            v2 = v10;
            return v2;
        }
        else
        {
            v2 = v10;
            return v2;
        }
    }
}
