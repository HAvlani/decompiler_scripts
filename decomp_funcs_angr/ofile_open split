typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
} struct_4;

extern unsigned int filter_pid;

int ofile_open()
{
    BOT tmp_9;  // tmp #9
    BOT tmp_12;  // tmp #12
    struct_2 * v0;  // [bp-0x40]
    unsigned long v10;  // rdx
    unsigned long v11;  // rbx
    struct_4 *v12;  // rbp
    unsigned long v13;  // rsi
    unsigned long long v14;  // rdi
    unsigned long long v16;  // r12
    unsigned long long v17;  // r12
    unsigned long long v18;  // r14
    unsigned int v3;  // eax
    unsigned long v4;  // rax
    unsigned long long v7;  // rax
    unsigned int v8;  // eax
    unsigned long long v9;  // rax

    if (((int)*((v13 << 5) + v14 + 8)) >= 0)
    {
        return &stack_base+0;
    }
    v18 = v10 - 1;
    v16 = v14;
    v11 = (v13 == 0? v10 - 1 : v13 - 1);
    while (true)
    {
        v4 = open_safer();
        while (true)
        {
            if (v0->field_0 - 23 > 1)
            {
                v0 = v0;
                quotearg_n_style_colon();
                error(0x1, v0->field_0, "%s");
            }
            else
            {
                while (true)
                {
                    v12 = v11 * 32 + v16;
                    if (((int)*((v11 << 5) + v16 + 8)) < 0)
                    {
                        tmp_9 = v11 - 1;
                        tmp_12 = v11 == 0;
                        v11 = (v11 == 0? v18 : v11 - 1);
                        v0 = v0;
                        quotearg_n_style_colon();
                        error(0x1, v0->field_0, "%s");
                    }
                    else
                    {
                        v0 = __errno_location();
                        v9 = rpl_fclose();
                        if (v9 == 0)
                        {
                            v12->field_8 = -2;
                            v8 = ((int)*(v13 * 32 + v14 + 8));
                            v12->field_10 = 0;
                        }
                        else
                        {
                            quotearg_n_style_colon();
                            error(0x1, v0->field_0, "%s");
                        }
                    }
                }
                if (v9 == 0 && ((int)*((v11 << 5) + v16 + 8)) >= 0)
                {
                    v4 = open_safer();
                }
                else if (v9 == 0 && ((int)*((v11 << 5) + v16 + 8)) >= 0)
                {
                    v4 = create();
                }
                v4 = create();
            }
        }
        if (v0->field_0 - 23 <= 1)
        {
            v4 = open_safer();
        }
        else if (v0->field_0 - 23 <= 1 && v4 >= 0)
        {
            *(v13 * 32 + v14 + 8) = v4;
            v7 = fdopen(v4, "a");
            *(v13 * 32 + v14 + 16) = v7;
        }
    }
    *(v13 * 32 + v14 + 8) = v4;
    v7 = fdopen(v4, "a");
    *(v13 * 32 + v14 + 16) = v7;
    v17 = (long long)quotearg_n_style_colon();
    error(0x1, *(__errno_location()), "%s");
    v3 = ((int)filter_pid);
    filter_pid = 0;
    *(v13 * 32 + v14 + 24) = v3;
    return &stack_base+0;
}
