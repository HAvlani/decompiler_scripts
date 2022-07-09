typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char *delim_end;
extern char *delims;
extern unsigned int g_4070a9;
extern unsigned int g_4070f6;
extern unsigned int g_407468;
extern unsigned int g_407490;
extern char have_read_stdin;
extern char line_delim;
extern unsigned int longopts;
extern char *optarg;
extern struct_0 optind;
extern char serial_merge;

int main()
{
    BOT tmp_4;  // tmp #4
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v10;  // rcx
    struct_1 *v12;  // rbx
    unsigned long long v15;  // rbp
    char * v16;  // rsi
    struct_1 *v18;  // rsi
    char [2]|unsigned int v19;  // rdi
    char *v21;  // r8
    char [2] v22;  // r12
    char *v3;  // rax
    unsigned long long v5;  // rax

    v22 = "\t";
    v12 = v18;
    set_program_name();
    setlocale();
    bindtextdomain(&g_4070a9, &g_407468);
    textdomain(&g_4070a9);
    atexit();
    have_read_stdin = 0;
    serial_merge = 0;
    /* goto 4204227; */
    *(v16) = 9;
    *(v16) = 13;
    *(v16) = 10;
    *(v16) = 12;
    *(v16) = 8;
    *(v16) = 92;
    v5 = getopt_long(v19, ((int)v18), &g_4070f6, &longopts, 0x0);
    if (((int)v5) == 100)
    {
        v22 = (*(optarg) == 0? "\\0" : optarg);
        /* goto 4204227; */
    }
    if (!(((int)v5) != -1))
    {
        v15 = ((long long)(v19 - optind));
        if (v19 == optind)
        {
            v15 = 1;
            *(v18 + ((long long)optind) * 8) = "-";
        }
        v3 = xstrdup();
        v10 = ((long long)v22[0]);
        delims = v3;
        v16 = v3;
        v21 = v3;
        tmp_4 = v10;
        if (((long long)tmp_4) != 0)
        {
            v19 = v22;
        }
    }
    else if (((int)v5) != 100)
    {
        if (!(((char)(v5 <= 100))))
        {
            if (((int)v5) == 115)
            {
                serial_merge = 1;
                /* goto 4204227; */
            }
            else if (((int)v5) != 122)
            {
                usage(); /* do not return */
            }
            if (((int)v5) == 122)
            {
                line_delim = 0;
                /* goto 4204227; */
            }
        }
        else
        {
            if (((int)v5) == -131)
            {
                v0 = 0;
                version_etc();
                exit(0x0); /* do not return */
            }
            else if (((int)v5) != -130)
            {
                usage(); /* do not return */
            }
            if (((int)v5) == -130)
            {
                usage(); /* do not return */
            }
        }
    }
}
