typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_407085;
extern unsigned int g_4070cd;
extern unsigned int g_4070e1;
extern unsigned int g_4070fa;
extern unsigned int g_40710e;
extern unsigned int g_407340;
extern unsigned int g_407be1;
extern unsigned int longopts;
extern struct_0 optind;
extern unsigned long long stdout[7];

int main()
{
    BOT tmp_28;  // tmp #28
    unsigned long long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    char *|struct_1 * v10;  // rax
    unsigned int v12;  // edx
    struct_0 *v13;  // rbx
    unsigned int v14;  // ebp
    struct_1 *v15;  // rsi
    unsigned long v16;  // rdi
    unsigned long long v17;  // r12
    unsigned int v18;  // r12d
    unsigned long|unsigned long long|unsigned int v19;  // r12
    unsigned int v20;  // r12d
    char *|unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    set_program_name();
    setlocale();
    bindtextdomain(&g_407085, &g_407340);
    textdomain(&g_407085);
    atexit();
    v8 = getopt_long(((int)v16), ((int)v15), &g_407be1, &longopts, 0x0);
    if (!(v8 != -1))
    {
        v10 = ((long long)optind);
        if (optind != ((int)v16))
        {
            v19 = 1;
            if (!(((char)(((long long)optind) < v16))))
            {
                v17 = ((long long)(v19 ^ 1));
                tmp_28 = v17;
                return ((long long)tmp_28);
            }
            do
            {
                v7 = getpwnam(((int)*(v15 + v10 * 8)));
                if (v7 != 0)
                {
                    __printf_chk(0x1, "%s : ", ((int)*(v15 + ((long long)optind) * 8)));
                    v19 = ((long long)((long long)print_group_list() == 0? 0 : ((int)r12<8>)));
                    v7 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v7) = 10;
                    }
                    else
                    {
                        __overflow();
                    }
                }
                else
                {
                    v20 = quote();
                    v19 = 0;
                    error(0x0, 0x0, dcgettext(0x0, &g_40710e, 0x5));
                }
                v10 = ((long long)(optind + 1));
                optind = optind + 1;
            }
            while (((int)v10) < ((int)v16));
            v17 = ((long long)(v19 ^ 1));
            tmp_28 = v17;
            return ((long long)tmp_28);
        }
        v15->field_0 = 0;
        v13 = __errno_location();
        v14 = (int)getuid();
        if (v14 == -1)
        {
            if (v13->field_0 != 0)
            {
                error(0x1, v13->field_0, dcgettext(0x0, &g_4070cd, 0x5));
            }
        }
        if (v13->field_0 == 0 || v14 != -1)
        {
            v13->field_0 = 0;
            v18 = (int)getegid();
            if (v18 == -1)
            {
                if (v13->field_0 != 0)
                {
                    error(0x1, v13->field_0, dcgettext(0x0, &g_4070e1, 0x5));
                }
            }
            if (v13->field_0 == 0 || v18 != -1)
            {
                v13->field_0 = 0;
                v12 = (int)getgid();
                if (v12 == -1)
                {
                    if (v13->field_0 != 0)
                    {
                        error(0x1, v13->field_0, dcgettext(0x0, &g_4070fa, 0x5));
                    }
                }
                if (v13->field_0 == 0 || v12 != -1)
                {
                    v19 = (long long)print_group_list();
                    v10 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v10) = 10;
                        v17 = ((long long)(v19 ^ 1));
                        tmp_28 = v17;
                        return ((long long)tmp_28);
                    }
                    else
                    {
                        __overflow();
                        v17 = ((long long)(v19 ^ 1));
                        tmp_28 = v17;
                        return ((long long)tmp_28);
                    }
                }
            }
        }
    }
    else if (v8 == -131)
    {
        v1 = &longopts;
        v0 = 0;
        version_etc();
        exit(0x0); /* do not return */
    }
    else if (v8 != -130)
    {
        usage(); /* do not return */
    }
    else
    {
        usage(); /* do not return */
    }
}
