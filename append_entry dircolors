extern struct_0 g_40d138;
extern struct_0 g_40d140;
extern char print_ls_colors;

int append_entry()
{
    unsigned long long|char * v1;  // rax
    unsigned long long|char * v11;  // rdx
    char v12;  // dil
    char * v4;  // rax

    if (print_ls_colors != 0)
    {
        append_quoted();
        append_quoted();
        v4 = g_40d138;
        if (g_40d140 == g_40d138)
        {
            _obstack_newchunk();
            v4 = g_40d138;
        }
        g_40d138 = v4 + 1;
        *(v4) = 109;
    }
    if (((long long)v12) != 0)
    {
        v4 = g_40d138;
        if (g_40d140 == g_40d138)
        {
            _obstack_newchunk();
            v4 = g_40d138;
        }
        g_40d138 = v4 + 1;
        *(v4) = v12;
    }
    append_quoted();
    v11 = g_40d138;
    if (g_40d140 == g_40d138)
    {
        _obstack_newchunk();
        v11 = g_40d138;
    }
    g_40d138 = v11 + 1;
    *(v11) = ((char)((0 - ((int)(((long long)print_ls_colors) < 1)) & 52) + 9));
    append_quoted();
    if (print_ls_colors == 0)
    {
        v1 = g_40d138;
        v11 = 58;
        if (g_40d140 != g_40d138)
        {
            g_40d138 = v1 + 1;
            *(v1) = v11;
            return v1;
        }
    }
    append_quoted();
    v1 = g_40d138;
    if (g_40d140 != g_40d138)
    {
        v11 = ((long long)((0 - ((int)(((long long)print_ls_colors) < 1)) & 48) + 10));
        g_40d138 = v1 + 1;
        *(v1) = v11;
        return v1;
    }
    if (g_40d140 == g_40d138)
    {
        _obstack_newchunk();
        v1 = g_40d138;
        v11 = ((long long)((0 - ((int)(((long long)print_ls_colors) < 1)) & 48) + 10));
        g_40d138 = v1 + 1;
        *(v1) = v11;
        return v1;
    }
}
