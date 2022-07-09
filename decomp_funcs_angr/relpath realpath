extern unsigned int g_409694;

int relpath()
{
    BOT tmp_47;  // tmp #47
    BOT tmp_59;  // tmp #59
    BOT tmp_17;  // tmp #17
    BOT tmp_3;  // tmp #3
    BOT tmp_6;  // tmp #6
    unsigned long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long long v10;  // rsi
    char v11[2];  // rdi
    char [2] v12;  // r8
    unsigned long long v13;  // r9
    char v14;  // r11b
    char *v15;  // r12
    char *v16;  // r12
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long|unsigned long long v6;  // ecx
    unsigned long|unsigned long long v7;  // rdx
    char [2]|unsigned int v8;  // rbx
    unsigned long long v9;  // rbp

    tmp_47 = ((long long)*(v10 + 1));
    v0 = v6;
    tmp_59 = ((long long)v11[1]);
    v1 = v7;
    v5 = 0;
    if (((char)(((char)tmp_47) == 47)) == ((char)(((char)tmp_59) == 47)))
    {
        v7 = ((long long)*(v10));
        if (((long long)*(v10)) != 0)
        {
            v12 = v11;
            v13 = v10;
            v4 = 0;
            v6 = 0;
            while (true)
            {
                v14 = ((char)(((long long)v12[0]) == 0));
                if (v12[0] == v7 && ((long long)v14) == 0)
                {
                    v6 = ((int)v6) + 1;
                    v4 = ((long long)(v7 == 47? ((int)1) : ((int)rax<8>)));
                    v7 = ((long long)*(v13 + 1));
                    v13 += 1;
                    v12 += 1;
                    tmp_17 = v7;
                    if (((long long)tmp_17) == 0)
                    {
                        v7 = ((long long)v12[0]);
                        if (v7 == 47 || ((long long)v12[0]) == 0)
                        {
                            v4 = 1;
                        }
                    }
                }
                if (v7 == 47 && (v12[0] != v7 || ((long long)v14) != 0))
                {
                    v4 = ((long long)(((long long)v14) != 0? ((int)v6) : ((int)rax<8>)));
                }
                if (((long long)tmp_17) == 0 || v12[0] != v7 || ((long long)v14) != 0)
                {
                    if (((int)v4) == 0 && (v12[0] != v7 || v7 != 47 || ((long long)v14) != 0) && (v12[0] != v7 || ((long long)v14) != 0 || ((long long)v12[0]) != 0))
                    {
                        v5 = 0;
                        return v5;
                    }
                    if ((v12[0] == v7 || ((int)v4) != 0) && (((long long)v14) == 0 || ((int)v4) != 0) && (v7 == 47 || ((long long)v12[0]) == 0 || ((int)v4) != 0))
                    {
                        v8 = v10 + v4;
                        v16 = v11 + v4;
                        v3 = ((long long)*(v10 + v4));
                        tmp_3 = v3;
                        v3 = ((long long)v8[1]);
                        v8 += 1;
                        break;
                        if (tmp_3 != 47)
                        {
                            break;
                        }
                    }
                }
            }
            v15 = v16 + ((long long)(*(v16) == 47));
            if (((long long)v3) == 0)
            {
                v9 = (long long)buffer_or_output();
            }
            else
            {
                v9 = (long long)buffer_or_output();
                v3 = ((long long)v8[0]);
                if (((long long)v8[0]) != 0)
                {
                    while (true)
                    {
                        if (v3 != 47)
                        {
                            v3 = ((long long)*(rbx<8> + 1));
                            v8 = rbx<8> + 1;
                            tmp_6 = v3;
                            if (((long long)tmp_6) == 0)
                            {
                                break;
                            }
                        }
                        else
                        {
                            v8 = rbx<8> + 1;
                            v9 = ((long long)(((int)v9) | buffer_or_output()));
                            v3 = ((long long)v8[0]);
                            break;
                        }
                    }
                }
                if (*(v15) != 0)
                {
                    v8 = ((int)(buffer_or_output() | buffer_or_output()));
                    v9 = ((long long)(((int)v9) | v8));
                }
            }
            if (((long long)v9) == 0)
            {
                v5 = ((long long)(((int)v9) ^ 1));
                return v5;
            }
            dcgettext(0x0, &g_409694, 0x5);
            error(0x0, 0x24, "%s");
            v5 = ((long long)(((int)v9) ^ 1));
            return v5;
        }
        return v5;
    }
    return v5;
}
