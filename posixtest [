extern struct_0 argc;
extern struct_3 argv;
extern struct_0 pos;

int posixtest()
{
    BOT tmp_10;  // tmp #10
    unsigned long long v2;  // al
    unsigned long|unsigned int v3;  // eax
    unsigned long v4;  // rdi

    if (((int)v4) != 3)
    {
        if (((char)(v4 <= 3)))
        {
            if (((int)v4) != 1)
            {
                if (((int)v4) != 2)
                {
                    /* goto 4209056; */
                }
            }
            else
            {
                tmp_10 = ((long long)pos);
                pos = ((int)(((long long)pos) + 1));
                v2 = *(argv + tmp_10 * 8);
                v2 = ((char)(*(*(argv + (tmp_10 << 3))) != 0));
                return v2;
            }
        }
        else if (((int)v4) == 4)
        {
            v3 = ((long long)pos);
            if (*(*(argv + (((long long)pos) << 3))) == 33)
            {
                if (*(*(argv + (((long long)pos) << 3)) + 1) == 0)
                {
                    v3 = ((int)(((int)pos) + 1));
                    pos = pos + 1;
                    if (v3 < argc)
                    {
                        v2 = ((long long)(three_arguments() ^ 1));
                        return v2;
                    }
                    beyond(); /* do not return */
                }
            }
            if (*(*(argv + (((long long)pos) << 3))) != 33 || *(*(argv + (((long long)pos) << 3)) + 1) != 0)
            {
                if (*(*(argv + (((long long)pos) << 3))) != 40)
                {
                    if (argc > v3)
                    {
                    }
                    else
                    {
                        beyond(); /* do not return */
                    }
                }
                if (*(*(argv + (((long long)pos) << 3)) + 1) != 0)
                {
                    if (argc > v3)
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
                        if (argc > v3)
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
                            v2 = two_arguments();
                            pos = pos + 1;
                            return v2;
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
            v3 = ((int)pos);
            if (argc > v3)
            {
            }
            else
            {
                beyond(); /* do not return */
            }
        }
    }
}
