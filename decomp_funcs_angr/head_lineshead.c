extern unsigned int g_40807f;
extern char line_end;

int head_lines()
{
    char v0;  // [bp-0x20d8]
    unsigned int v1;  // [bp-0x20c0]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbp
    unsigned long long|unsigned int v12;  // esi
    unsigned long long|unsigned int v13;  // r13
    char v2;  // [bp-0x2048]
    unsigned long v3;  // [bp-0x2030]
    unsigned long v4;  // [bp-0x1030]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long v9;  // rdx

    v4 = v4;
    v3 = v3;
    if (v9 != 0)
    {
        v13 = v12;
        v10 = v9;
        while (true)
        {
            v12 = (long long)safe_read();
            if (v12 == 18446744069414584319)
            {
                v13 = (long long)quotearg_style();
                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40807f, 0x5));
                v7 = 0;
                return v7;
            }
            else if (v12 != 0)
            {
                v7 = 1;
                return v7;
                v11 = 0;
                while (true)
                {
                    v11 += 1;
                    if (v2 == line_end)
                    {
                        v10 -= 1;
                        if (v10 == 1)
                        {
                            v6 = lseek();
                            if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                            {
                                v6 = __fxstat(0x1, v13, ((int)&v0));
                                if ((((short)v1) & 0xf000) == 0x8000 || v6 != 0)
                                {
                                    elseek();
                                }
                            }
                            xwrite_stdout.part.0();
                            v7 = 1;
                            return v7;
                        }
                    }
                    if (v10 != 1 || v2 != line_end)
                    {
                        xwrite_stdout.part.0();
                    }
                }
            }
        }
    }
    else
    {
        v7 = 1;
        return v7;
    }
}
