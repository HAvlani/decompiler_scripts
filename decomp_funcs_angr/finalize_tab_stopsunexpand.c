extern struct_0 extend_size;
extern struct_0 first_free_tab;
extern unsigned int g_407560;
extern unsigned int g_407761;
extern unsigned int g_407776;
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
        v3 = 0;
        while (true)
        {
            v4 = *(v5 + v3 * 8);
            if (*(v5 + (v3 << 3)) == 0)
            {
                error(0x1, 0x0, dcgettext(0x0, &g_407761, 0x5));
            }
            else if (v4 < v4)
            {
                v3 += 1;
                v1 = increment_size;
                if (extend_size != 0 && increment_size != 0)
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_407560, 0x5));
                }
                if (extend_size == 0 || increment_size == 0)
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
                error(0x1, 0x0, dcgettext(0x0, &g_407776, 0x5));
                error(0x1, 0x0, dcgettext(0x0, &g_407761, 0x5));
            }
        }
    }
    else
    {
        v1 = extend_size;
        if (increment_size == 0)
        {
            v2 = (v1 == 0? 8 : v1);
            max_column_width = v2;
            tab_size = v2;
            return v2;
        }
        else if (extend_size != 0)
        {
            error(0x1, 0x0, dcgettext(0x0, &g_407560, 0x5));
        }
        else
        {
            v2 = increment_size;
            max_column_width = v2;
            tab_size = v2;
            return v2;
        }
    }
}
