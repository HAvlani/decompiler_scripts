typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char g_402922;
extern char g_402947;
extern char g_40296a;
extern unsigned int g_407267;
extern unsigned int g_4077d8;
extern unsigned long long stdout[7];

int main()
{
    BOT tmp_6;  // tmp #6
    BOT tmp_5;  // tmp #5
    unsigned long long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    unsigned long long|char * v10;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    char|unsigned long|unsigned long long|unsigned int v17;  // cl
    unsigned long|unsigned long long v18;  // rdx
    unsigned long v19;  // rdx
    unsigned long long v20;  // rbx
    unsigned long long v21;  // rbp
    unsigned long|unsigned long long|struct_2 * v22;  // rsi
    unsigned long long v23;  // rdi
    char [4]|char * v24;  // r8
    char [4]|char * v25;  // r9
    unsigned long long v26;  // r10
    char * v27;  // r11
    unsigned long long|unsigned int v28;  // r12
    char [4] v29;  // r13
    struct_0 *|unsigned long long|char *[4] v30;  // r14
    unsigned long long v31;  // r15
    unsigned long long|unsigned int v32;  // cc_dep1
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    unsigned long v6;  // [bp+0x0]
    char v8;  // [bp+0xf]
    char v9[4];  // [bp+0x10]

    v9 = v24;
    v8 = v17;
    rsp<8> = rsp<8> - 8;
    v6 = &g_402922;
    v22 = *(__ctype_b_loc());
    v32 = ((long long)(*(v22 + ((long long)v29[2]) * 2 + 1) & 16));
    v28 = v23;
    getenv("POSIXLY_CORRECT");
    if ((((long long)v29[2]) - 48 & 255) > 7)
    {
    }
    else
    {
        v19 = ((long long)v29[3]);
        v24 = v29 + 3;
    }
    if (((char)v32) != 0)
    {
        rsp<8> = rsp<8> - 8;
        v5 = &g_402947;
        v31 = (long long)hextobin();
        if (((long long)(*(v22 + (((long long)v29[3]) << 1) + 1) & 16)) != 0)
        {
            v31 *= 16;
            rsp<8> = rsp<8> - 8;
            v4 = &g_40296a;
            v10 = ((long long)((long long)hextobin() + v31));
        }
    }
    if (&stack_base+0 != 0)
    {
        if (((int)v23) > 1)
        {
            v13 = strcmp(v22->field_8, "-n");
            if (v13 == 0)
            {
                set_program_name();
                setlocale();
                bindtextdomain(&g_407267, &g_4077d8);
                textdomain(&g_407267);
                atexit();
                if (((int)v23) != 2)
                {
                    v18 = v23 - 1;
                    v30 = v22 + 8;
                    /* goto 4204238; */
                }
            }
        }
        if (((int)v23) <= 1 || v13 != 0)
        {
            v30 = v22 + 8;
            set_program_name();
            setlocale();
            bindtextdomain(&g_407267, &g_4077d8);
            textdomain(&g_407267);
            atexit();
            v18 = v23 - 1;
            v21 = 1;
        }
    }
    else
    {
        set_program_name();
        setlocale();
        bindtextdomain(&g_407267, &g_4077d8);
        textdomain(&g_407267);
        atexit();
        if (((int)v23) != 2)
        {
            v18 = v28 - 1;
            v30 = v22 + 8;
        }
    }
    if (((int)v23) == 2)
    {
        if (v13 == 0 || &stack_base+0 == 0)
        {
            if (&stack_base+0 == 0 || ((int)v23) > 1)
            {
                v12 = strcmp(v22->field_8, "--help");
                if (v12 != 0)
                {
                    v10 = strcmp(v22->field_8, "--version");
                    if (v10 != 0)
                    {
                        v30 = v22 + 8;
                        v18 = 1;
                    }
                    else
                    {
                        v1 = v18;
                        v0 = 0;
                        version_etc();
                        return 0;
                    }
                }
                else
                {
                    usage(); /* do not return */
                }
            }
        }
    }
    if ((v13 == 0 || &stack_base+0 == 0) && (&stack_base+0 == 0 || ((int)v23) > 1) && (v10 != 0 || ((int)v23) != 2) && (v12 != 0 || ((int)v23) != 2) && (((int)v23) == 2 || ((int)(v28 - 1)) > 0 || &stack_base+0 != 0))
    {
        v22 = 0;
        v21 = 1;
        v28 = 0;
    }
    if (v32 != 1 || &stack_base+0 == 0 && ((int)v23) != 2 && ((int)(v28 - 1)) > 0 || ((int)v23) == 2 && &stack_base+0 == 0 && v10 != 0 && v12 != 0 || v13 == 0 && ((int)v23) > 1 && ((int)v23) != 2 && &stack_base+0 != 0 || v13 == 0 && v10 != 0 && v12 != 0 && ((int)v23) > 1 && &stack_base+0 != 0)
    {
        v25 = *(r14<8>);
        if (*(*(r14<8>)) == 45)
        {
            v26 = ((long long)v25[1]);
            v27 = v25 + 1;
            if (((long long)v25[1]) != 0)
            {
                v25 += 2;
                v17 = ((int)v26);
            }
        }
    }
    if (...)
    {
        v17 = ((long long)v17) - 69;
        tmp_5 = v17;
        if (((long long)tmp_5) <= 41)
        {
            if ((2203318222849 & 1 << ((long long)(v17 & 63))) != 0)
            {
                v17 = ((long long)*(v25));
                v25 += 1;
                tmp_6 = v17;
            }
        }
    }
    if (...)
    {
        v27 += 1;
        if (!(v26 != 101))
        {
            v22 = 1;
            /* goto 4205112; */
        }
        else if (v26 != 110)
        {
            v22 = ((long long)(v26 == 69? ((int)r12<8>) : ((int)rsi<8>)));
            /* goto 4205112; */
        }
        if (v26 == 110)
        {
            v21 = 0;
        }
    }
    if (...)
    {
        v26 = ((long long)*(v27));
        if (((long long)*(v27)) == 0)
        {
            v30 += 8;
            v32 = ((int)v18);
            v18 = ((long long)(((int)v18) - 1));
        }
    }
    if (...)
    {
        v20 = v30 + (v18 - 1) * 8;
        /* goto 4204368; */
    }
    if (...)
    {
        v28 = v30 + (v18 - 1) * 8;
    }
    fputs_unlocked(*(r14<8>), stdout);
    if (v20 != r14<8>)
    {
        v10 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v10) = 32;
        }
        else
        {
            __overflow();
        }
        v30 = r14<8> + 8;
        /* goto 4204368; */
    }
}
