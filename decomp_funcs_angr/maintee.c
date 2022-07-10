extern char append;
extern unsigned int g_4070a1;
extern unsigned int g_407109;
extern unsigned int g_40710d;
extern unsigned int g_407620;
extern char ignore_interrupts;
extern unsigned int long_options;
extern struct_1 optarg;
extern unsigned int output_error;
extern struct_0 output_error_types;

int main()
{
    BOT tmp_18;  // tmp #18
    unsigned long|unsigned long long v0;  // [bp-0x28]
    unsigned long|unsigned long long v1;  // [bp-0x20]
    unsigned long long v10;  // rbx
    unsigned int v11;  // esi
    unsigned int v12;  // edi
    unsigned long long v13;  // r12
    unsigned int|unsigned long long v8;  // eax

    set_program_name();
    setlocale();
    bindtextdomain(&g_4070a1, &g_407620);
    textdomain(&g_4070a1);
    atexit();
    append = 0;
    ignore_interrupts = 0;
    while (true)
    {
        v8 = getopt_long(v12, v11, &g_407109, &long_options, 0x0);
        if (((int)v1) == -1)
        {
            if (ignore_interrupts != 0)
            {
                signal(0x2, 0x1);
            }
            if (output_error == 0)
            {
                break;
            }
            signal(0xd, 0x1);
            break;
        }
        else if (((int)v1) == 97)
        {
            append = 1;
        }
        else if (!(((char)(v1 <= 97))))
        {
            if (((int)v1) == 105)
            {
                ignore_interrupts = 1;
            }
            else if (((int)v1) != 112)
            {
                usage(); /* do not return */
            }
            else if (optarg != 0)
            {
                v1 = v8;
                v0 = 1;
                v8 = ((int)*(output_error_types + (long long)__xargmatch_internal() * 4));
                output_error = v8;
            }
            else
            {
                output_error = 2;
            }
        }
        else
        {
            if (((int)v1) == -131)
            {
                v1 = 0;
                v0 = "David MacKenzie";
                version_etc();
                exit(0x0); /* do not return */
            }
            else if (((int)v1) == -130)
            {
                usage(); /* do not return */
            }
            else
            {
                usage(); /* do not return */
            }
        }
    }
    if (close(0x0) == 0)
    {
        v10 = ((long long)(tee_files() ^ 1));
        tmp_18 = v10;
        return ((long long)tmp_18);
    }
    v13 = dcgettext(0x0, &g_40710d, 0x5);
    error(0x1, *(__errno_location()), "%s");
}
