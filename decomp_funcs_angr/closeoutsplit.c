typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 filter_command;
extern unsigned int g_40a116;
extern unsigned int g_40a130;
extern unsigned int g_40a4a0;
extern unsigned int g_40a4d0;
extern unsigned int g_40a4f8;
extern struct_0 n_open_pipes;
extern struct_0 open_pipes;

int closeout()
{
    unsigned int v0;  // [bp-0x5c]
    unsigned int v1;  // [bp-0x4c]
    unsigned int v10;  // ebp
    unsigned int v11;  // esi
    unsigned long v12;  // rdi
    unsigned long long v13;  // r12
    unsigned long long v14;  // r12
    unsigned long long v15;  // r12
    struct_1 *v16;  // r13
    struct_0 *v17;  // fs
    char v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x30]
    struct_1 *|unsigned long long v7;  // rax
    unsigned long long|unsigned int v8;  // rdx
    struct_1 *v9;  // rbx

    v10 = v8;
    if (v12 != 0)
    {
        v7 = rpl_fclose();
        if (v7 != 0)
        {
            v16 = __errno_location();
            if (filter_command != 0)
            {
                if (v16->field_0 != 32)
                {
                    quotearg_n_style_colon();
                    error(0x1, v16->field_0, "%s");
                }
            }
            else
            {
                quotearg_n_style_colon();
                error(0x1, v16->field_0, "%s");
            }
        }
    }
    else if (v11 >= 0)
    {
        v7 = close(v11);
        if (v7 < 0)
        {
            v14 = (long long)quotearg_n_style_colon();
            error(0x1, *(__errno_location()), "%s");
        }
    }
    if ((v12 == 0 || v11 >= 0) && (v16->field_0 == 32 || v12 == 0 || v7 == 0) && (v7 >= 0 || v12 != 0) && (v11 >= 0 || v12 != 0) && (v12 == 0 || v7 == 0 || filter_command != 0))
    {
        if (n_open_pipes != 0)
        {
            v8 = 0;
            v7 = open_pipes;
            while (true)
            {
                if (v7->field_0 != v11)
                {
                    v8 += 1;
                    v7 += 4;
                    if (v8 == n_open_pipes)
                    {
                        break;
                    }
                }
                else
                {
                    v8 = ((int)*(open_pipes + n_open_pipes * 4));
                    n_open_pipes = n_open_pipes - 1;
                    v7->field_0 = v8;
                    break;
                }
            }
        }
    }
    if (v11 < 0 && v12 == 0 || v12 == 0 && v7 >= 0 || v7 == 0 && v12 != 0 || v16->field_0 == 32 && v12 != 0 && filter_command != 0)
    {
        if (v10 <= 0)
        {
            return v3 ^ *(v17 + 0x28);
        }
        v1 = 0;
        v7 = waitpid(v10, ((int)&v1), 0x0);
        if (v7 == -1)
        {
            v9 = __errno_location();
            if (v9->field_0 != 10)
            {
                error(0x1, v9->field_0, dcgettext(0x0, &g_40a116, 0x5));
            }
        }
        if (v9->field_0 == 10 || v7 != -1)
        {
            if (!(((char)(((long long)(((long long)0) + 1)) <= 1))))
            {
                if (((int)0) == 13)
                {
                    return v3 ^ *(v17 + 0x28);
                }
                else if (sig2str() == 0)
                {
                    v13 = (long long)quotearg_n_style_colon();
                    error(((int)(0 + 128)), 0x0, dcgettext(0x0, &g_40a4a0, 0x5));
                }
                else
                {
                    __sprintf_chk(((int)&v2), 0x1, 0x13, &g_40a130, 0x0);
                    v13 = (long long)quotearg_n_style_colon();
                    error(((int)(0 + 128)), 0x0, dcgettext(0x0, &g_40a4a0, 0x5));
                }
            }
            else
            {
                if (!(((int)0) == 0))
                {
                    v0 = 0;
                    error(0x1, 0x0, dcgettext(0x0, &g_40a4f8, 0x5));
                }
                else if (((long long)0) == 0)
                {
                    return v3 ^ *(v17 + 0x28);
                }
                else
                {
                    v15 = (long long)quotearg_n_style_colon();
                    error(0x0, 0x0, dcgettext(0x0, &g_40a4d0, 0x5));
                }
            }
        }
    }
}
