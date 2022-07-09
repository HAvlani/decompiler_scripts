extern struct_1 argc;
extern struct_4 argv;
extern unsigned int g_40a0f4;
extern struct_1 pos;

int three_arguments()
{
    char * v1;  // rax
    char **v5;  // rbx
    unsigned int v6;  // ebp
    unsigned long long v7;  // rbp
    char **v8;  // r12

    v8 = argv;
    v5 = ((long long)pos) + 1;
    if ((long long)binop() == 0)
    {
        if (*(*(argv + (((long long)pos) + 1 << 3) + 8)) == 33)
        {
            if (*(*(argv + (((long long)pos) + 1 << 3) + 8) + 1) == 0)
            {
                v6 = ((int)(((int)pos) + 1));
                pos = pos + 1;
                if (v6 < argc)
                {
                    v1 = ((long long)(two_arguments() ^ 1));
                    return v1;
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
                            v1 = v8[v5];
                            v1 = ((char)(*(v8[v5]) != 0));
                            pos = pos + 3;
                            return v1;
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
                    if (*(*(argv + (((long long)pos) + 1 << 3)) + 2) != 0 || *(*(argv + (((long long)pos) + 1 << 3)) + 1) != 97)
                    {
                        if (!(*(*(argv + (((long long)pos) + 1 << 3))) == 45))
                        {
                            v7 = (long long)quote();
                            dcgettext(0x0, &g_40a0f4, 0x5);
                            test_syntax_error(); /* do not return */
                        }
                        else if (*(*(argv + (((long long)pos) + 1 << 3)) + 1) != 111)
                        {
                            v7 = (long long)quote();
                            dcgettext(0x0, &g_40a0f4, 0x5);
                            test_syntax_error(); /* do not return */
                        }
                        else if (!(*(*(argv + (((long long)pos) + 1 << 3)) + 2) == 0))
                        {
                            v7 = (long long)quote();
                            dcgettext(0x0, &g_40a0f4, 0x5);
                            test_syntax_error(); /* do not return */
                        }
                        else
                        {
                            beyond(); /* do not return */
                        }
                    }
                }
                v7 = (long long)quote();
                dcgettext(0x0, &g_40a0f4, 0x5);
                test_syntax_error(); /* do not return */
            }
        }
    }
}
