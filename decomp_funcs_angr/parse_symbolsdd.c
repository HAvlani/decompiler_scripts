int parse_symbols()
{
    unsigned long|unsigned long long|unsigned int v1;  // rax
    unsigned long long v10;  // r12
    unsigned int v11;  // r13d
    unsigned long long v12;  // r14
    unsigned long long|unsigned int v4;  // ecx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    unsigned long v7;  // rbx
    unsigned long long v8;  // rsi
    unsigned long long|char * v9;  // rdi

    v12 = v9;
    v11 = v4;
    v10 = v5;
    while (true)
    {
        v9 = strchr(v12, 0x2c);
        while (true)
        {
            v1 = 0;
            while (true)
            {
                v5 = ((long long)*(v8 + v1));
                v4 = ((long long)*(v12 + v1));
                if (((long long)*(v8 + v1)) != 0)
                {
                    v1 += 1;
                }
                else if (v4 == 44 || ((long long)v4) == 0)
                {
                    v1 = ((int)*(v8 + 12));
                    if (*(v8 + 12) != 0)
                    {
                        v1 = ((long long)(((long long)v10) == 0? ((int)v7) : ((int)rax<8>)));
                        if (v9 != 0)
                        {
                            v12 = v9 + 1;
                            break;
                        }
                        else
                        {
                            return v1;
                        }
                    }
                }
                if (*(v8 + 12) == 0 && ((long long)*(v8 + v1)) == 0 || ((long long)*(v8 + v1)) != 0 && v5 != v4 || ((long long)*(v8 + v1)) == 0 && v4 != 44 && ((long long)v4) != 0)
                {
                    if (*(v8) != 0)
                    {
                        v8 += 16;
                        break;
                    }
                    else if (v9 != 0)
                    {
                        v6 = (long long)quotearg_n_style_mem();
                        dcgettext(0x0, v11, 0x5);
                        nl_error();
                        usage(); /* do not return */
                    }
                    else
                    {
                        v4 = strlen(v12);
                        v6 = (long long)quotearg_n_style_mem();
                        dcgettext(0x0, v11, 0x5);
                        nl_error();
                        usage(); /* do not return */
                    }
                }
            }
            if (((long long)*(v8 + v1)) == 0 && *(v8 + 12) != 0 && v9 != 0 && (v4 == 44 || ((long long)v4) == 0))
            {
                v9 = strchr(v12, 0x2c);
            }
            else if (*(v8) != 0 && (((long long)*(v8 + v1)) == 0 || v5 != v4) && (*(v8 + 12) == 0 || v4 != 44 || ((long long)*(v8 + v1)) != 0) && (*(v8 + 12) == 0 || ((long long)*(v8 + v1)) != 0 || ((long long)v4) != 0))
            {
                v1 = 0;
            }
        }
    }
}
