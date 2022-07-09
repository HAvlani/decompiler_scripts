extern struct_0 argc;
extern struct_1 argv;
extern unsigned int exit_failure;
extern unsigned int g_40a19c;
extern unsigned int g_40a1c5;
extern unsigned int g_40b028;
extern unsigned int pos;

int main()
{
    BOT tmp_9;  // tmp #9
    unsigned long long v2;  // rax
    unsigned long long v5;  // rax
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rsi
    unsigned int v9;  // edi

    set_program_name();
    setlocale();
    bindtextdomain(&g_40a19c, &g_40b028);
    textdomain(&g_40a19c);
    exit_failure = 2;
    atexit();
    argv = v8;
    argc = v9;
    pos = 1;
    if (!(v9 > 1))
    {
        v5 = 1;
        return v5;
    }
    else if (pos == argc)
    {
        v2 = ((long long)(posixtest() ^ 1));
        tmp_9 = v2;
        v5 = ((long long)tmp_9);
        return v5;
    }
    else
    {
        v7 = (long long)quote();
        dcgettext(0x0, &g_40a1c5, 0x5);
        test_syntax_error(); /* do not return */
    }
}
