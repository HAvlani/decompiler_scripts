extern unsigned int g_40807f;
extern char line_end;

int elide_tail_lines_seekable()
{
    unsigned long v0;  // [bp-0x2058]
    unsigned long|unsigned long long v1;  // [bp-0x2050]
    unsigned long long v10;  // rdx
    unsigned long|unsigned long long v11;  // rbp
    unsigned long v12;  // rdi
    unsigned long|unsigned long long v13;  // r8
    unsigned long long|unsigned int v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v16;  // r15
    char v2;  // [bp-0x2048]
    unsigned long v3;  // [bp-0x2030]
    unsigned long v4;  // [bp-0x1030]
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax
    unsigned long v9;  // rcx

    v4 = v4;
    v3 = v3;
    v0 = v12;
    v1 = v9;
    v11 = v13 - (((long long)(((int)(v13 - v9 + (v13 - v9 >> 63 >> 51))) & 8191)) != v13 - v9 >> 63 >> 51? ((long long)(((int)(v13 - v9 + (v13 - v9 >> 63 >> 51))) & 8191)) - (v13 - v9 >> 63 >> 51) : 0x2000);
    v6 = elseek();
    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
    {
        v13 = (long long)safe_read();
        if (v13 != 18446744069414584319)
        {
            v14 = ((int)line_end);
            v16 = v10;
            if (v10 != 0)
            {
                if (v13 != 0)
                {
                    if (*(&stack_base-8280 + v13 + 15) != line_end)
                    {
                        v16 = v10 - 1;
                    }
                }
            }
            while (true)
            {
                if (r8<8> != 0)
                {
                    if (v16 == 0)
                    {
                        v13 -= 1;
                        v6 = r15<8> - 1;
                    }
                    else
                    {
                        v13 = memrchr(((int)&v2), reg_112<4>, ((int)v13));
                        if (v13 != 0)
                        {
                            v13 -= &v2;
                            v6 = r15<8> - 1;
                        }
                    }
                    if ((v16 == 0 || r15<8> != 0) && (v16 == 0 || v13 != 0) && (r15<8> != 0 || v16 != 0))
                    {
                        v16 = v6;
                    }
                }
                if (r8<8> == 0 || v13 == 0 && v16 != 0)
                {
                    v11 -= 0x2000;
                    v6 = elseek();
                    v13 = (long long)safe_read();
                    v14 = ((long long)line_end);
                }
            }
            if (v11 != v1 && (r8<8> == 0 || v13 == 0) && (r8<8> == 0 || v16 != 0))
            {
                v8 = 0;
            }
            else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && v13 != 18446744069414584319)
            {
                v8 = 1;
            }
            else if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                if (r8<8> == 0 || v13 == 0 && v16 != 0)
                {
                    v8 = 1;
                }
            }
            if (v11 > v1)
            {
                if (v11 > v1)
                {
                    v1 = v13;
                    v6 = elseek();
                    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                    {
                        v6 = copy_fd();
                        v13 = v1;
                        if (v6 != 0)
                        {
                            diagnose_copy_fd_failure();
                            v8 = 0;
                            return v8;
                        }
                    }
                    v8 = 0;
                    return v8;
                }
                if (v11 <= v1 || v6 == 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    if (v13 + 1 != 0)
                    {
                        xwrite_stdout.part.0();
                        v8 = !((long long)elseek()) >> 63;
                        return v8;
                    }
                    v8 = !((long long)elseek()) >> 63;
                    return v8;
                }
                v8 = 0;
                return v8;
                v8 = 1;
                return v8;
                v15 = (long long)quotearg_style();
                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40807f, 0x5));
                v8 = 0;
                return v8;
                v8 = 1;
                return v8;
            }
        }
        v15 = (long long)quotearg_style();
        error(0x0, *(__errno_location()), dcgettext(0x0, &g_40807f, 0x5));
        v8 = 0;
        return v8;
    }
    v8 = 0;
    return v8;
}
