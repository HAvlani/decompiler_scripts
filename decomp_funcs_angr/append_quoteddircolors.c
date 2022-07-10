extern struct_0 g_40d138;
extern struct_0 g_40d140;
extern char print_ls_colors;

int append_quoted()
{
    BOT tmp_6;  // tmp #6
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    char * v10;  // rbx
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbx
    unsigned long|unsigned long long v13;  // rbp
    char *v14;  // rdi
    unsigned long long v15;  // r12
    unsigned long long v16;  // r12
    unsigned int v17;  // r12d
    unsigned long long v18;  // cc_dep1
    unsigned long long v2;  // [bp-0x8]
    char *|unsigned long long v4;  // rax
    char * v5;  // rax
    unsigned long long v8;  // rcx
    char * v9;  // rdx

    v4 = ((long long)*(v14));
    if (((long long)*(v14)) != 0)
    {
        v2 = v15;
        v17 = 1;
        v1 = &stack_base+0;
        v13 = 1;
        v0 = v12;
        v10 = v14;
        do
        {
            v8 = g_40d140;
            v9 = g_40d138;
            if (print_ls_colors == 0)
            {
                v18 = ((long long)v4);
                if (v4 != 61)
                {
                    if (!(((char)(v18 <= 61))))
                    {
                        v4 = ((long long)(((int)v4) & -3));
                        tmp_6 = v4;
                        v13 = ((long long)(tmp_6 != 92? ((int)r12<8>) : ((int)rbp<8>) ^ 1));
                    }
                    else if (v4 == 39)
                    {
                        if (g_40d140 == g_40d138)
                        {
                            _obstack_newchunk();
                            v9 = g_40d138;
                        }
                        g_40d138 = v9 + 1;
                        *(v9) = 39;
                        v5 = g_40d138;
                        if (g_40d140 == g_40d138)
                        {
                            _obstack_newchunk();
                            v5 = g_40d138;
                        }
                        g_40d138 = v5 + 1;
                        *(v5) = 92;
                        v4 = g_40d138;
                        if (g_40d140 == g_40d138)
                        {
                            _obstack_newchunk();
                            v4 = g_40d138;
                        }
                        v13 = 1;
                        g_40d138 = v4 + 1;
                        *(v4) = 39;
                        v8 = g_40d140;
                        v9 = g_40d138;
                    }
                }
                if (((long long)v13) != 0 && (v4 == 58 || v4 == 61) && (((char)(v18 <= 61)) || v4 == 61) && (v4 == 61 || v4 != 39))
                {
                    if (g_40d140 == g_40d138)
                    {
                        _obstack_newchunk();
                        v9 = g_40d138;
                    }
                    g_40d138 = rdx<8> + 1;
                    *(rdx<8> + None) = 92;
                    v9 = g_40d138;
                    if (g_40d140 == g_40d138)
                    {
                        /* goto 4206000; */
                    }
                }
                if ((((char)(v18 <= 61)) || v4 == 61) && (((long long)v13) == 0 || v4 != 58) && (((long long)v13) == 0 || v4 != 61) && (v4 == 61 || v4 != 39))
                {
                    v13 = 1;
                }
            }
            if (v4 == 39 && rcx<8> == v9 || ((long long)v13) == 0 && rcx<8> == v9 || rcx<8> == v9 && print_ls_colors != 0 || rcx<8> == v9 && v4 != 58 && v4 != 61 || rcx<8> == v9 && !(((char)(v18 <= 61))) && v4 != 61 || print_ls_colors == 0 && v4 == 61 && g_40d140 == g_40d138 && ((long long)v13) != 0 || print_ls_colors == 0 && v4 == 58 && ((char)(v18 <= 61)) && g_40d140 == g_40d138 && v4 != 39 && ((long long)v13) != 0)
            {
                _obstack_newchunk();
                v9 = g_40d138;
            }
            v10 += 1;
            g_40d138 = rdx<8> + 1;
            *(rdx<8> + None) = *(v10 + 0x1);
            v4 = ((long long)*(v10));
        }
        while (((char)v4) != 0);
        v11 = v0;
        v16 = v2;
        return v4;
    }
    return ((long long)*(v14));
}
