extern struct_4 argc;
extern struct_1 argv;
extern unsigned int g_40a0f4;
extern struct_4 pos;

int three_arguments()
{
    char * v4;  // al
    char **v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned int v7;  // ebp
    char **v8;  // r12

    v8 = argv;
    v5 = ((long long)pos) + 1;
    if ((long long)binop() == 0)
    {
        if (*(*(argv + (((long long)pos) + 1 << 3) + 8)) == 33)
        {
            if (*(*(argv + (((long long)pos) + 1 << 3) + 8) + 1) == 0)
            {
                v7 = ((int)(((int)pos) + 1));
                pos = pos + 1;
                if (v7 < argc)
                {
                    v4 = ((long long)(two_arguments() ^ 1));
                    return v4;
                }
                beyond(); /* do not return */
            }
        }
        if (...)
        {
            if (*(*(argv + (((long long)pos) + 1 << 3) + 8)) == 40)
            {
                if (*(*(argv + (((long long)pos) + 1 << 3) + 8) + 1) == 0)
                {
                    if (*(*(argv + (((long long)pos) + 1 << 3) + 8)) == 41)
                    {
                        if (*(*(argv + (((long long)pos) + 1 << 3) + 8) + 1) == 0)
                        {
                            v4 = v8[v5];
                            v4 = ((char)(*(v8[v5]) != 0));
                            pos = pos + 3;
                            return v4;
                        }
                    }
                }
            }
            if (...)
            {
                if (*(*(argv + (((long long)pos) + 1 << 3))) == 45)
                {
                    if (*(*(argv + (((long long)pos) + 1 << 3)) + 1) == 97)
                    {
                        if (*(*(argv + (((long long)pos) + 1 << 3)) + 2) == 0)
                        {
                            if (pos < argc)
                            {
                            }
                            else
                            {
                                beyond(); /* do not return */
                            }
                        }
                    }
                    if (*(*(argv + (((long long)pos) + 1 << 3)) + 1) != 97 || *(*(argv + (((long long)pos) + 1 << 3)) + 2) != 0)
                    {
                        if (!(*(*(argv + (((long long)pos) + 1 << 3))) == 45))
                        {
                            v6 = (long long)quote();
                            dcgettext(0x0, &g_40a0f4, 0x5);
                            test_syntax_error(); /* do not return */
                        }
                        else if (*(*(argv + (((long long)pos) + 1 << 3)) + 1) != 111)
                        {
                            v6 = (long long)quote();
                            dcgettext(0x0, &g_40a0f4, 0x5);
                            test_syntax_error(); /* do not return */
                        }
                        else if (!(*(*(argv + (((long long)pos) + 1 << 3)) + 2) == 0))
                        {
                            v6 = (long long)quote();
                            dcgettext(0x0, &g_40a0f4, 0x5);
                            test_syntax_error(); /* do not return */
                        }
                        else
                        {
                            beyond(); /* do not return */
                        }
                    }
                }
                v6 = (long long)quote();
                dcgettext(0x0, &g_40a0f4, 0x5);
                test_syntax_error(); /* do not return */
            }
        }
    }
}
