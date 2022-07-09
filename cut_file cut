typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern char have_read_stdin;
extern struct_0 stdin;

int cut_file()
{
    unsigned long long v1;  // rax
    struct_1 *v10;  // r13
    unsigned int v11;  // r14d
    unsigned long long v2;  // rax
    unsigned long|unsigned int v6;  // ebp
    char * v7;  // rbp
    char [2]|unsigned long long v8;  // rdi
    char v9[2];  // r12

    v9 = v8;
    v6 = ((long long)(((int)v8[0]) - 45));
    if (v8[0] == 45)
    {
        v6 = ((int)v8[1]);
    }
    v10 = __errno_location();
    if (v6 == 0)
    {
        have_read_stdin = 1;
        v7 = stdin;
    }
    else
    {
        v7 = fopen(v8, "r");
        if (v7 == 0)
        {
            quotearg_n_style_colon();
            error(0x0, v10->field_0, "%s");
            v2 = 0;
            return v2;
        }
    }
    if (v6 == 0 || v7 != 0)
    {
        fadvise();
        v8 = v7;
        rsi<8>();
        ((unsigned int)v11) = ((long long)(((long long)(*(v7) & 32)) == 0? 0 : *(r13<8>)));
        if (v9[0] == 45)
        {
            if (v9[1] == 0)
            {
                clearerr_unlocked();
            }
        }
        if (v9[1] != 0 || v9[0] != 45)
        {
            v1 = rpl_fclose();
            if (v1 == -1)
            {
                v11 = ((int)v10->field_0);
                v2 = 1;
                if (v10->field_0 == 0)
                {
                    return v2;
                }
                quotearg_n_style_colon();
                error(0x0, v11, "%s");
                return 0;
            }
        }
        if (v1 != -1 || v9[1] == 0 && v9[0] == 45)
        {
            v2 = 1;
            if (((int)((unsigned int)v11)) == 0)
            {
                return v2;
            }
            quotearg_n_style_colon();
            error(0x0, v11, "%s");
            return 0;
        }
    }
}
