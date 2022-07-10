extern unsigned int current_col;
extern unsigned long long g_412a58;

int display_speed()
{
    unsigned long long v1;  // rax
    unsigned int|unsigned long long v10;  // rsi
    unsigned int v11;  // edi
    unsigned int v12;  // r12d
    unsigned long long v2;  // rax
    unsigned long long v4;  // rax
    unsigned int|unsigned long long v6;  // rcx
    unsigned long long v7;  // rdx
    unsigned int v8;  // rbx
    unsigned int|unsigned long long v9;  // ebp

    v12 = v11;
    ((unsigned int)v8) = ((unsigned int)v10);
    v1 = cfgetispeed();
    if (v1 != 0)
    {
        v9 = cfgetispeed();
        v1 = cfgetospeed(v12);
        if (v9 != v1)
        {
            v9 = &g_412a58;
            v7 = &g_412a58;
            v10 = 0;
            while (true)
            {
                if (cfgetospeed(v12) != ((unsigned int)v10))
                {
                    v7 += 24;
                    if (*(v7 + 24) != 0)
                    {
                        ((unsigned int)v10) = ((long long)*(v7 + 16));
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            v6 = 0;
            while (true)
            {
                if (cfgetispeed() != v6)
                {
                    v9 += 24;
                    if (*(v9 + 24) != 0)
                    {
                        ((unsigned int)v6) = ((long long)*(v9 + 16));
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            v2 = wrapf();
        }
    }
    if (v1 == 0 || v9 == v1)
    {
        v4 = cfgetospeed(v11);
        v7 = &g_412a58;
        v10 = 0;
        v6 = 0;
        while (true)
        {
            if (v4 != v10)
            {
                v7 += 24;
                v6 = ((int)v6) + 1;
                if (*(v7 + 24) != 0)
                {
                    v10 = ((int)*(v7 + 16));
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        v2 = wrapf();
    }
    if (((long long)((unsigned int)v8)) == 0)
    {
        current_col = 0;
        return v2;
    }
    return v2;
}
