typedef struct struct_2 {
    unsigned long long field_0;
    unsigned short field_8;
} struct_2;

typedef struct struct_1 {
    unsigned int field_0;
    unsigned short field_4;
    char field_6;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_407004;
extern unsigned int g_407017;
extern unsigned int g_407026;
extern unsigned int g_40702b;
extern unsigned int g_40703d;
extern unsigned int g_407045;
extern unsigned int g_40704f;
extern char include_home_and_shell;
extern char include_plan;
extern char include_project;
extern unsigned long long stdout[7];

int print_long_entry()
{
    char v0;  // [bp-0x438]
    unsigned long v1;  // [bp-0x30]
    char * v17;  // rax
    struct_2 *v20;  // rax
    unsigned long v21;  // rdx
    unsigned long long v22[6];  // rbx
    void * v23;  // r12
    char * v24;  // r13
    struct_0 *v25;  // fs
    char *v4;  // rax
    char *v5;  // rax
    struct_1 *v8;  // rax

    v22 = getpwnam();
    __printf_chk(0x1, dcgettext(0x0, &g_407004, 0x5));
    __printf_chk(0x1, "%-28s");
    __printf_chk(0x1, dcgettext(0x0, &g_407017, 0x5));
    if (v22 != 0)
    {
        v5 = strchr(v22[3], 0x2c);
        if (v5 != 0)
        {
            *(v5) = 0;
        }
        __printf_chk(0x1, " %s", (int)create_fullname());
        rpl_free();
        v17 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v17) = 10;
        }
        else
        {
            __overflow();
        }
        if (include_home_and_shell != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40702b, 0x5));
            __printf_chk(0x1, "%-29s");
            __printf_chk(0x1, dcgettext(0x0, &g_40703d, 0x5));
            __printf_chk(0x1, " %s", ((int)v22[5]));
            v17 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v17) = 10;
            }
            else
            {
                __overflow();
            }
        }
        if (include_project == 0)
        {
        }
        else
        {
            strlen(v22[4]);
            v24 = (long long)xmalloc();
            v20 = stpcpy(((int)v24), ((int)v22[4]));
            v20->field_0 = 7162247809296510511;
            v20->field_8 = 116;
            v23 = fopen(v24, "r");
            if (v23 != 0)
            {
                __printf_chk(0x1, dcgettext(0x0, &g_407045, 0x5));
                while (true)
                {
                    v21 = fread_unlocked(&v0, 0x1, 0x400, v23);
                    if (v21 == 0)
                    {
                        break;
                    }
                    fwrite_unlocked(&v0, 0x1, v21, stdout);
                }
                rpl_fclose();
            }
            rpl_free();
        }
        if (include_plan != 0)
        {
            strlen(v22[4]);
            v24 = (long long)xmalloc();
            v8 = stpcpy(((int)v24), ((int)v22[4]));
            v8->field_0 = 1819291183;
            v8->field_4 = 28257;
            v8->field_6 = 0;
            v23 = fopen(v24, "r");
            if (v23 != 0)
            {
                __printf_chk(0x1, dcgettext(0x0, &g_40704f, 0x5));
                while (true)
                {
                    v21 = fread_unlocked(&v0, 0x1, 0x400, v23);
                    if (v21 == 0)
                    {
                        break;
                    }
                    fwrite_unlocked(&v0, 0x1, v21, stdout);
                }
                rpl_fclose();
            }
            rpl_free();
        }
        v4 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v4) = 10;
            return v1 ^ *(v25 + 0x28);
        }
        __overflow();
        return v1 ^ *(v25 + 0x28);
    }
    __printf_chk(0x1, " %s", dcgettext(0x0, &g_407026, 0x5));
    return v1 ^ *(v25 + 0x28);
}
