extern struct_0 extend_size;
extern struct_0 first_free_tab;
extern unsigned int g_4074f8;
extern unsigned int g_4076f9;
extern unsigned int g_40770e;
extern struct_0 increment_size;
extern struct_0 max_column_width;
extern struct_0 tab_list;
extern unsigned long long tab_size;

int finalize_tab_stops()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rsi

    v5 = tab_list;
    if (first_free_tab != 0)
    {
        v4 = 0;
        v2 = 0;
        while (true)
        {
            v4 = *(v5 + v2 * 8);
            if (*(v5 + (v2 << 3)) == 0)
            {
                error(0x1, 0x0, dcgettext(0x0, &g_4076f9, 0x5));
            }
            else if (v4 < v4)
            {
                v2 += 1;
                v1 = increment_size;
                if (increment_size != 0 && extend_size != 0)
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_4074f8, 0x5));
                }
                if (increment_size == 0 || extend_size == 0)
                {
                    if (first_free_tab != 1)
                    {
                        tab_size = 0;
                        return v1;
                    }
                    v1 = increment_size | extend_size;
                    if ((increment_size | extend_size) != 0)
                    {
                        tab_size = 0;
                        return v1;
                    }
                    else
                    {
                        v1 = *(v5);
                        tab_size = *(v5);
                        return v1;
                    }
                }
            }
            else
            {
                error(0x1, 0x0, dcgettext(0x0, &g_40770e, 0x5));
                error(0x1, 0x0, dcgettext(0x0, &g_4076f9, 0x5));
            }
        }
    }
    else
    {
        v1 = extend_size;
        if (increment_size == 0)
        {
            v3 = (v1 == 0? 8 : v1);
            max_column_width = v3;
            tab_size = v3;
            return v3;
        }
        else if (extend_size != 0)
        {
            error(0x1, 0x0, dcgettext(0x0, &g_4074f8, 0x5));
        }
        else
        {
            v3 = increment_size;
            max_column_width = v3;
            tab_size = v3;
            return v3;
        }
    }
}
