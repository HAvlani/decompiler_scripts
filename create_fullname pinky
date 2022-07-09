int create_fullname()
{
    BOT tmp_6;  // tmp #6
    BOT tmp_19;  // tmp #19
    unsigned long long v1;  // rax
    char *v10;  // rsi
    char v11[2];  // rdi
    unsigned long long v12;  // r12
    unsigned long long|char [2] v13;  // r13
    unsigned long long v14;  // cc_dep1
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v5;  // rcx
    char * v6;  // rdx
    unsigned long long v8;  // rbx
    char *|unsigned long long v9;  // rbx

    v13 = v11;
    v8 = 0;
    v12 = strlen(v11) + 1;
    while (true)
    {
        v5 = ((long long)*(rdx<8>));
        v6 = rdx<8> + 1;
        tmp_6 = v5;
        if (tmp_6 != 38)
        {
            if (((long long)v5) == 0)
            {
                break;
            }
        }
        else
        {
            v8 += 1;
        }
    }
    if (v8 != 0)
    {
        v8 -= 1;
        v1 = ((long long)(strlen(v10) * v8));
        if (!(((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r12<8>, rax<8>, cc_ndep<8>))))
        {
            v12 += v1;
        }
        else
        {
            xalloc_die(); /* do not return */
        }
    }
    if (False)
    {
        xalloc_die(); /* do not return */
    }
    if (v8 == 0 || !(((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r12<8>, rax<8>, cc_ndep<8>))))
    {
        v9 = (long long)xmalloc();
        if (((long long)v11[0]) == 0)
        {
            *(v9) = 0;
            v3 = v9;
            return v3;
        }
        while (true)
        {
            if (v1 != 38)
            {
                *(v9) = v1;
                v9 += 1;
            }
            else
            {
                v5 = *(__ctype_b_loc());
                v1 = ((long long)*(v6));
                v14 = ((long long)(*(v5 + ((long long)*(v6)) * 2 + 1) & 2));
                if (((char)v14) != 0)
                {
                    v9 += 1;
                    v2 = ((long long)*(*(__ctype_toupper_loc()) + ((long long)*(v10)) * 4));
                    tmp_19 = v2;
                    *(v9 + 0x1) = tmp_19;
                    v1 = ((long long)*(v10 + 1 + 1));
                }
                if (((long long)al<1>) != 0)
                {
                    do
                    {
                        v6 += 1;
                        *(rbx<8> + None) = al<1>;
                        v9 = rbx<8> + 1;
                        v1 = ((long long)*(v6));
                    }
                    while (((char)v1) != 0);
                    v1 = ((long long)v13[1]);
                    v13 += 1;
                    *(v9) = 0;
                    v3 = v9;
                    return v3;
                }
            }
            if (((long long)al<1>) == 0 || v1 != 38)
            {
                v1 = ((long long)v13[1]);
                v13 += 1;
                tmp_6 = v1;
                *(v9) = 0;
                v3 = v9;
                return v3;
            }
        }
    }
}
