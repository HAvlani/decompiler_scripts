typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40d047;
extern char line_end;

int file_lines()
{
    BOT tmp_0;  // tmp #0
    struct_0 *v0;  // [bp-0x2068]
    unsigned long v1;  // [bp-0x2060]
    unsigned long long v10;  // rax
    unsigned long|unsigned long long v11;  // rcx
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rbp
    unsigned long v14;  // rdi
    unsigned long v15;  // r8
    struct_0 *v16;  // r9
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // r14
    unsigned long v2;  // [bp-0x2058]
    unsigned long v3;  // [bp-0x2050]
    char v4;  // [bp-0x2048]
    unsigned long v5;  // [bp-0x2030]
    unsigned long v6;  // [bp-0x1030]
    unsigned long long v9;  // rax

    v6 = v6;
    v5 = v5;
    v1 = v14;
    v2 = v11;
    v3 = v15;
    v0 = v16;
    if (v12 != 0)
    {
        v19 = v12;
        xlseek();
        v13 = (long long)safe_read();
        if (v13 != 18446744069414584319)
        {
            v16->field_0 = v15 - (((long long)(((int)(tmp_0 + (tmp_0 >> 63 >> 51))) & 8191)) == tmp_0 >> 63 >> 51? 0x2000 : ((long long)(((int)(tmp_0 + (tmp_0 >> 63 >> 51))) & 8191)) - (tmp_0 >> 63 >> 51)) + v13;
            if (*(&stack_base-8296 + v13 + 31) != line_end)
            {
                v19 = v12 - 1;
            }
            while (true)
            {
                v12 = v13;
                while (true)
                {
                    if (v12 != 0)
                    {
                        v10 = memrchr(((int)&v4), ((int)line_end));
                        if (v10 != 0)
                        {
                            v11 = r14<8> - 1;
                            v12 = v10 - &v4;
                            if (r14<8> != 0)
                            {
                                v19 = v11;
                            }
                            else if (v13 - 1 != v12)
                            {
                                xwrite_stdout.part.0();
                                v16->field_0 = v0->field_0 + (long long)dump_remainder();
                                v9 = 1;
                                return v9;
                            }
                            else
                            {
                                v16->field_0 = v0->field_0 + (long long)dump_remainder();
                                v9 = 1;
                                return v9;
                            }
                        }
                    }
                    if (v12 == 0 || v10 == 0)
                    {
                        if (v15 - (((long long)(((int)(tmp_0 + (tmp_0 >> 63 >> 51))) & 8191)) == tmp_0 >> 63 >> 51? 0x2000 : ((long long)(((int)(tmp_0 + (tmp_0 >> 63 >> 51))) & 8191)) - (tmp_0 >> 63 >> 51)) != v2)
                        {
                            xlseek();
                            v13 = (long long)safe_read();
                            if (v13 != 18446744069414584319)
                            {
                                v16->field_0 = ...;
                                if (v13 != 0)
                                {
                                    v9 = 1;
                                    return v9;
                                }
                                v18 = (long long)quotearg_style();
                                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40d047, 0x5));
                                v9 = 0;
                                return v9;
                            }
                        }
                        xlseek();
                        v17 = v15 - (((long long)(((int)(tmp_0 + (tmp_0 >> 63 >> 51))) & 8191)) == tmp_0 >> 63 >> 51? 0x2000 : ((long long)(((int)(tmp_0 + (tmp_0 >> 63 >> 51))) & 8191)) - (tmp_0 >> 63 >> 51)) + (long long)dump_remainder();
                        v16->field_0 = v17;
                        v9 = 1;
                        return v9;
                    }
                }
            }
        }
        v18 = (long long)quotearg_style();
        error(0x0, *(__errno_location()), dcgettext(0x0, &g_40d047, 0x5));
        v9 = 0;
        return v9;
    }
    v9 = 1;
    return v9;
}
