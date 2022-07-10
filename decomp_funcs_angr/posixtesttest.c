extern struct_3 argc;
extern struct_0 argv;
extern struct_3 pos;

int posixtest()
{
    BOT tmp_10;  // tmp #10
    unsigned long long v1;  // rax
    unsigned long|unsigned int v2;  // eax
    unsigned long v4;  // rdi

    if (((int)v4) != 3)
    {
        if (((char)(v4 <= 3)))
        {
            if (((int)v4) != 1)
            {
                if (((int)v4) != 2)
                {
                    /* goto 4208800; */
                }
            }
            else
            {
                tmp_10 = ((long long)pos);
                pos = ((int)(((long long)pos) + 1));
                v1 = *(argv + tmp_10 * 8);
                v1 = ((char)(*(*(argv + (tmp_10 << 3))) != 0));
                return v1;
            }
        }
        else if (((int)v4) == 4)
        {
            v2 = ((int)pos);
            if (*(*(argv + (((long long)pos) << 3))) == 33)
            {
                if (*(*(argv + (((long long)pos) << 3)) + 1) == 0)
                {
                    v2 = ((int)(((int)pos) + 1));
                    pos = pos + 1;
                    if (v2 < argc)
                    {
                        v1 = ((long long)(three_arguments() ^ 1));
                        return v1;
                    }
                    beyond(); /* do not return */
                }
            }
            if (*(*(argv + (((long long)pos) << 3))) != 33 || *(*(argv + (((long long)pos) << 3)) + 1) != 0)
            {
                if (*(*(argv + (((long long)pos) << 3))) != 40)
                {
                    if (argc > v2)
                    {
                    }
                    else
                    {
                        beyond(); /* do not return */
                    }
                }
                if (*(*(argv + (((long long)pos) << 3)) + 1) != 0)
                {
                    if (argc > v2)
                    {
                    }
                    else
                    {
                        beyond(); /* do not return */
                    }
                }
                else
                {
                    if (*(*(argv + (((long long)pos) << 3) + 24)) != 41)
                    {
                        if (argc > v2)
                        {
                        }
                        else
                        {
                            beyond(); /* do not return */
                        }
                    }
                    else
                    {
                        if (!(*(*(argv + (((long long)pos) << 3) + 24) + 1) != 0))
                        {
                            pos = ((int)pos) + 1;
                            v1 = two_arguments();
                            pos = pos + 1;
                            return v1;
                        }
                        else
                        {
                            beyond(); /* do not return */
                        }
                    }
                }
            }
        }
        if ((((char)(v4 <= 3)) || ((int)v4) != 4) && (!(((char)(v4 <= 3))) || ((int)v4) != 2) && (!(((char)(v4 <= 3))) || ((int)v4) != 1))
        {
            v2 = ((long long)pos);
            if (argc > v2)
            {
            }
            else
            {
                beyond(); /* do not return */
            }
        }
    }
}
