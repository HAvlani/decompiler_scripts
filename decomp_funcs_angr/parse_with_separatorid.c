typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_2 {
    char padding_0[1];
    char field_1;
} struct_2;

typedef struct struct_3 {
    char padding_0[16];
    unsigned int field_10;
} struct_3;

extern char g_408fe3;

int parse_with_separator()
{
    BOT tmp_31;  // tmp #31
    unsigned long|struct_2 *|unsigned long long|unsigned int v0;  // [bp-0x80]
    struct_0 *v1;  // [bp-0x78]
    struct_0 *v11;  // rcx
    struct_0 *|unsigned long long v12;  // rdx
    unsigned long long|struct_1 * v13;  // rbx
    unsigned long long|struct_1 * v14;  // rbp
    unsigned long long v15;  // rsi
    unsigned long|char *|unsigned long long v16;  // rdi
    struct_1 *v17;  // r8
    struct_1 *v18;  // r9
    unsigned long long v19;  // r10
    unsigned long|char v2;  // [bp-0x70]
    unsigned long|unsigned int v20;  // r12
    char *|unsigned long long v21;  // r13
    char *v22;  // r13
    unsigned long long|unsigned int v23;  // r14
    unsigned long long|unsigned int v24;  // r15
    char v25;  // cc_dep1
    unsigned long long v3;  // [bp-0x60]
    unsigned long long|unsigned long|unsigned int|unsigned int [6]|struct_3 * v5;  // rax
    unsigned long long v9;  // rax

    v19 = v15;
    v23 = -1;
    v14 = v18;
    v13 = v17;
    v1 = v12;
    v0 = v12->field_0;
    if (v11 != 0)
    {
        ((unsigned int)v23) = ((long long)v11->field_0);
    }
    if (v17 != 0)
    {
        v17->field_0 = 0;
    }
    if (v18 != 0)
    {
        v18->field_0 = 0;
    }
    if (!(v15 != 0))
    {
        v21 = 0;
        if (*(v16) != 0)
        {
            v0 = v15;
            v24 = 0;
            v21 = (long long)xstrdup();
            v5 = 1;
        }
    }
    else if (v15 == v16)
    {
        v5 = ((long long)*(v19 + 1));
        if (((long long)*(v19 + 1)) != 0)
        {
            v24 = ((int)v19) + 1;
            v21 = 0;
        }
        else
        {
            v21 = 0;
            /* goto 4217410; */
        }
    }
    else
    {
        v0 = v15;
        *(v22 + v15 - v16) = 0;
        v22 = (long long)ximemdup();
        if (v0->field_1 != 0)
        {
            v24 = v0 + 1;
            v5 = 0;
            /* goto 4217564; */
        }
        else if (*(v22) != 43)
        {
            v5 = getpwnam();
            if (v5 != 0)
            {
                v2 = 1;
                v24 = 0;
                /* goto 4217604; */
            }
        }
    }
    if (v15 == 0 || v15 != v16)
    {
        if (v15 == 0 && *(v16) != 0 || v15 != 0 && v0->field_1 != 0)
        {
            v12 = ((long long)(((int)v12) & v5));
            v25 = ((char)*(v21));
            tmp_31 = v12;
            v2 = tmp_31;
            if (v25 != 43)
            {
                v5 = getpwnam();
            }
            if (v25 == 43 || v2 == 0 && v5 == 0)
            {
                v5 = xstrtoul();
                if (v5 == 0)
                {
                    v13 = v3;
                    v0 = ((int)v3);
                    if (v13 <= -2)
                    {
                        endpwent();
                        if (v24 != 0)
                        {
                            v5 = ((long long)*(v24));
                            v13 = 0;
                        }
                        else
                        {
                            v19 = 0;
                            v1->field_0 = ((int)v3);
                            if (v11 != 0)
                            {
                                v11->field_0 = v23;
                            }
                        }
                    }
                }
            }
        }
        if (...)
        {
            v25 = ((char)v2);
            v0 = v5[4];
            if (v25 == 0)
            {
                endpwent();
                if (v24 != 0)
                {
                }
                else
                {
                    /* goto 4217410; */
                }
            }
            else
            {
                v23 = ((long long)v5[5]);
                v5 = getgrgid(v5[5]);
                if (v5 != 0)
                {
                }
                else
                {
                    v16 = (long long)umaxtostr();
                }
                v2 = (long long)xstrdup();
                endgrent();
                endpwent();
                /* goto 4217410; */
            }
        }
    }
    if (...)
    {
        endpwent();
        v20 = "invalid spec";
        rpl_free();
        rpl_free();
        v9 = dcgettext(0x0, v20, 0x5);
        return v9;
    }
    if (...)
    {
        endpwent();
        v20 = &g_408fe3;
        rpl_free();
        rpl_free();
        v9 = dcgettext(0x0, v20, 0x5);
        return v9;
    }
    if (...)
    {
        v5 = getgrnam(((unsigned int)v24));
        if (v5 != 0)
        {
            v23 = ((long long)v5->field_10);
            endgrent();
            xstrdup();
            /* goto 4217410; */
        }
    }
    if (...)
    {
        v5 = xstrtoul();
        if (v5 == 0)
        {
            v23 = v3;
            if (v3 <= -2)
            {
                endgrent();
                v14 = 0;
                xstrdup();
                /* goto 4217410; */
            }
        }
    }
    if (...)
    {
        endgrent();
        v20 = "invalid group";
        v14 = (long long)xstrdup();
        rpl_free();
        rpl_free();
        v9 = dcgettext(0x0, v20, 0x5);
        return v9;
    }
    if (...)
    {
        v1->field_0 = v0;
        if (v11 != 0)
        {
            v11->field_0 = ((unsigned int)v23);
        }
        if (v13 != 0)
        {
            v13->field_0 = v21;
        }
    }
    if (...)
    {
        if (v14 != 0)
        {
            v14->field_0 = v19;
            v19 = 0;
            v0 = v19;
            rpl_free();
            rpl_free();
            v9 = 0;
            return v9;
        }
        v0 = v19;
        rpl_free();
        rpl_free();
        v9 = 0;
        return v9;
    }
}