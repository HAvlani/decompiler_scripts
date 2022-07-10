typedef struct struct_1 {
    char padding_0[8];
    char field_8;
    char padding_9[67];
    char field_4c;
    char padding_4d[263];
    unsigned int field_154;
} struct_1;

typedef struct struct_2 {
    char padding_0[24];
    unsigned long long field_18;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int buf.7349;
extern char buf.7357;
extern unsigned int g_40705c;
extern unsigned int g_407082;
extern unsigned int g_40708c;
extern unsigned int g_407097;
extern char include_fullname;
extern char include_idle;
extern char include_where;
extern struct_0 now.7348;
extern unsigned long long stdout[7];
extern struct_0 time_format;

int print_entry()
{
    BOT tmp_23;  // tmp #23
    unsigned long v0;  // [bp-0x210]
    char v1;  // [bp-0x208]
    char * v12;  // rax
    char * v13;  // rax
    char * v15;  // rax
    char *v18;  // rax
    char *v19;  // rax
    char *v20;  // rax
    char *|unsigned long long v22;  // rcx
    unsigned long long v23;  // rcx
    unsigned long long v24;  // rcx
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rdx
    char *|struct_2 * v27;  // rbx
    unsigned long long|struct_1 * v28;  // rbp
    struct_1 *v29;  // rdi
    unsigned long v3;  // [bp-0x1c0]
    unsigned int v30;  // r9d
    unsigned long long v33;  // r14
    unsigned long long v34;  // r15
    struct_0 *v35;  // fs
    unsigned int|char v4;  // [bp-0x178]
    unsigned short v5;  // [bp-0x174]
    char v6;  // [bp-0x173]
    char v7;  // [bp-0x148]
    char v8;  // [bp-0x147]
    unsigned long v9;  // [bp-0x40]

    v28 = v29;
    v26 = ((long long)v29->field_8);
    tmp_23 = v26;
    if (tmp_23 == 47)
    {
        v22 = &v4;
    }
    else
    {
        v22 = &v6;
        v4 = 1986356271;
        v5 = 47;
    }
    for (v15 = v29 + 8; ((long long)v26) != 0; v26 = ((long long)*(v15)))
    {
        v15 += 1;
        v22 = rcx<8> + 1;
        *(v22 + 0x1) = v26;
        if (v29 + 40 <= v15)
        {
            break;
        }
    }
    *(v22) = 0;
    if (__xstat(0x1, ((int)&v4), ((int)&v1)) == 0)
    {
        v33 = v3;
    }
    else
    {
        63 = 63;
        v33 = 0;
    }
    v27 = v29 + 44;
    __printf_chk(0x1, "%-8.*s");
    if (include_fullname != 0)
    {
        v13 = &v7;
        do
        {
            v26 = ((long long)*(v27));
            v27 += 1;
            v13 = &v8;
            v7 = v26;
        }
        while (((long long)*(v27)) != 0 && v29 + 76 > v27);
        *(v13) = 0;
        v27 = getpwnam();
        if (v27 != 0)
        {
            v20 = strchr(v27->field_18, 0x2c);
            if (v20 != 0)
            {
                *(v20) = 0;
            }
            v34 = (long long)create_fullname();
            __printf_chk(0x1, " %-19.19s");
            rpl_free();
        }
        else
        {
            __printf_chk(0x1, " %19s", dcgettext(0x0, &g_40705c, 0x5));
        }
    }
    __printf_chk(0x1, " %c%-8.*s", 63);
    if (include_idle != 0)
    {
        if (v33 == 0)
        {
            v26 = dcgettext(0x0, &g_407097, 0x5);
        }
        else
        {
            v24 = now.7348;
            if (now.7348 == 0)
            {
                time(&now.7348);
                v24 = now.7348;
            }
            v22 = v24 - v33;
            if (v22 > 59)
            {
                if (v22 <= 86399)
                {
                    __sprintf_chk(&buf.7349, 0x1, 0x16, &g_407082, ((int)((((long long)(v22 * 5247073869855161349 >> 64)) >> 10) - (v22 >> 63))), ((int)(...)));
                }
                else
                {
                    __sprintf_chk(&buf.7349, 0x1, 0x16, &g_40708c, ((int)((((long long)(v22 * 1749024623285053783 >> 64)) >> 13) - (v22 >> 63))), v30);
                }
            }
        }
        __printf_chk(0x1, " %-6s");
    }
    v0 = ((long long)v29->field_154);
    v23 = localtime(((int)&v0));
    if (v23 != 0)
    {
        strftime(&buf.7357, 0x21, ((int)time_format));
        v25 = &buf.7357;
    }
    else
    {
        v25 = (long long)imaxtostr();
    }
    __printf_chk(0x1, " %s", v25);
    if (include_where != 0)
    {
        v25 = ((long long)v28->field_4c);
        if (((long long)v28->field_4c) != 0)
        {
            v12 = v28 + 76;
            v23 = &v7;
            do
            {
                v12 += 1;
                v23 = &v8;
                v7 = v25;
                v25 = ((long long)*(v12));
            }
            while (((long long)*(v12)) != 0 && v29 + 332 > v12);
            v8 = 0;
            v18 = strchr(&v7, 0x3a);
            if (v18 != 0)
            {
                *(v18) = 0;
                if (v7 == 0)
                {
                    v28 = &v7;
                }
                else
                {
                    v28 = ((long long)canon_host() == 0? &v7 : rax<8>);
                }
                __printf_chk(0x1, " %s:%s", ((int)v28), ((int)v18) + 1);
            }
            else
            {
                if (v7 != 0)
                {
                    v28 = (long long)canon_host();
                }
                if (v7 == 0 || v28 == 0)
                {
                    v28 = &v7;
                }
                __printf_chk(0x1, " %s", ((int)v28));
            }
            if (v28 != &v7)
            {
                rpl_free();
            }
        }
    }
    v19 = *(stdout + 40);
    if (*(stdout + 40) < *(stdout + 48))
    {
        *(stdout + 40) = *(stdout + 40) + 1;
        *(v19) = 10;
        return v9 ^ *(v35 + 0x28);
    }
    __overflow();
    return v9 ^ *(v35 + 0x28);
}
