typedef struct struct_0 {
    unsigned long long field_0;
    unsigned short field_8;
    char field_a;
} struct_0;

extern unsigned int g_41de46;

int proper_name_utf8()
{
    unsigned long|unsigned long long v0;  // [bp-0x40]
    unsigned long long v10;  // rsi
    char *v11;  // rdi
    unsigned long long v12;  // r10
    unsigned long long v13;  // r12
    void *v14;  // r14
    unsigned long long v15;  // r15
    unsigned long|char *|unsigned long long v2;  // rax
    char *v4;  // rax
    char *v6;  // rax
    unsigned long long v7;  // rax
    struct_0 *|unsigned long|unsigned long long v8;  // rbx
    char *|unsigned long long v9;  // rbp

    v9 = v10;
    v13 = dcgettext(0x0, ((int)v11), 0x5);
    v14 = (long long)locale_charset();
    v6 = c_strcasecmp();
    if (v6 == 0)
    {
        v2 = strcmp(v6, v11);
        if (v10 != 0)
        {
            v8 = v9;
            v15 = v9;
        }
        else if (((int)v2) == 0)
        {
            v6 = v13;
            return v7;
        }
        else
        {
            v2 = mbsstr_trimmed_wordbounded();
            if (((long long)v2) != 0)
            {
                v6 = v13;
                return v7;
            }
            v9 = v11;
            /* goto 4227374; */
        }
    }
    else
    {
        v15 = (long long)xstr_iconv();
        v8 = strlen(v14) + v0;
        v8->field_0 = 5499825612410597167;
        v8->field_8 = 21577;
        v8->field_a = 0;
        v0 = memcpy((long long)xmalloc(), v14, v8);
        v9 = (long long)xstr_iconv();
        rpl_free();
        if (v9 != 0)
        {
            v4 = strchr(v9, 0x3f);
            if (v4 != 0)
            {
                rpl_free();
            }
            else
            {
                v2 = strcmp(v6, v11);
                if (v15 != 0)
                {
                    if (v2 == 0)
                    {
                        if (v15 != v9)
                        {
                            rpl_free();
                            v6 = v13;
                            return v7;
                        }
                        v6 = v13;
                        return v7;
                    }
                    v8 = v9;
                    /* goto 4227657; */
                }
                else
                {
                    v8 = v9;
                }
            }
        }
        if (v9 == 0 || v4 != 0)
        {
            if (v15 != 0)
            {
                v2 = strcmp(v6, v11);
                if (v2 == 0)
                {
                    v6 = v13;
                    return v7;
                }
                v8 = 0;
            }
            else
            {
                v8 = 0;
                v2 = strcmp(v6, v11);
                v9 = v11;
            }
        }
        if (v15 != 0)
        {
            if (v4 == 0 || v2 != 0)
            {
                if (v2 != 0 || v9 != 0)
                {
                    if (v9 == 0 || v4 != 0 || v2 != 0)
                    {
                        v2 = mbsstr_trimmed_wordbounded();
                        v12 = v15;
                        if (((long long)v2) == 0)
                        {
                            v9 = v15;
                        }
                    }
                }
            }
        }
    }
    if (v6 == 0 || v15 == 0)
    {
        if (v10 != 0 || v6 != 0)
        {
            if (v2 != 0)
            {
                v2 = mbsstr_trimmed_wordbounded();
                v12 = 0;
            }
            else
            {
                v6 = v13;
                return v7;
            }
        }
    }
    if (v2 != 0 && (v6 == 0 || v15 == 0) && (v10 != 0 || v6 != 0) && ((long long)v2) == 0 || ((long long)v2) == 0 && v6 != 0 && v15 != 0 && (v4 == 0 || v2 != 0) && (v2 != 0 || v9 != 0) && (v9 == 0 || v4 != 0 || v2 != 0))
    {
        if (v15 != 0)
        {
            v0 = v12;
            v2 = mbsstr_trimmed_wordbounded();
            v12 = v0;
        }
    }
    if (...)
    {
        if (v8 != 0)
        {
            v0 = v12;
            v2 = mbsstr_trimmed_wordbounded();
            v12 = v0;
        }
    }
    if (...)
    {
        v0 = v12;
        v8 = strlen(v6);
        strlen(v9);
        v2 = xmalloc();
        __sprintf_chk(v2, 0x1, 0xffffffff, &g_41de46, ((int)v6), ((int)v9));
        if (v0 != 0)
        {
            rpl_free();
        }
    }
    if (...)
    {
        rpl_free();
    }
    if (...)
    {
        if (v14 != 0)
        {
            rpl_free();
            v6 = v13;
            return v7;
        }
        v6 = v13;
        return v7;
    }
}
