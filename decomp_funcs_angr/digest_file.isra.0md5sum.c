typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char have_read_stdin;
extern char ignore_missing;
extern struct_1 stdin;

int digest_file.isra.0()
{
    unsigned long|unsigned long long|unsigned int v1;  // rax
    unsigned long|struct_0 *|unsigned int v10;  // rbp
    char v11[2];  // rdi
    unsigned long long v12;  // r13
    unsigned long long v13;  // r13
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    char *v7;  // rdx
    struct_0 *v8;  // rbx

    v1 = ((int)(((int)v11[0]) - 45));
    if (v11[0] == 45)
    {
        v1 = ((long long)v11[1]);
    }
    *(v7) = 0;
    if (v1 == 0)
    {
        have_read_stdin = 1;
        fadvise();
        v1 = md5_stream();
        if (v1 == 0)
        {
            clearerr_unlocked(((int)stdin));
            v13 = 1;
            v4 = v13;
            return v4;
        }
        v10 = ((int)*(__errno_location()));
        clearerr_unlocked(((int)stdin));
    }
    else
    {
        v12 = (long long)fopen_safer();
        if (v12 != 0)
        {
            fadvise();
            v5 = md5_stream();
            if (v5 != 0)
            {
                v10 = ((long long)v8->field_0);
                v1 = rpl_fclose();
                if (v1 != 0)
                {
                    if (((int)v10) != 0)
                    {
                        quotearg_n_style_colon();
                        error(0x0, ((unsigned int)v10), "%s");
                        return 0;
                    }
                    v10 = ((long long)*(__errno_location()));
                }
            }
            else
            {
                v1 = rpl_fclose();
                if (v1 == 0)
                {
                    v13 = 1;
                    v4 = v13;
                    return v4;
                }
                v10 = ((long long)*(__errno_location()));
            }
        }
        else
        {
            v13 = ((long long)ignore_missing);
            v10 = __errno_location();
            if (!(((long long)ignore_missing) != 0))
            {
                v13 = 0;
                quotearg_n_style_colon();
                error(0x0, v10->field_0, "%s");
                v4 = v13;
                return v4;
            }
            else if (v10->field_0 != 2)
            {
                v13 = 0;
                quotearg_n_style_colon();
                error(0x0, v10->field_0, "%s");
                v4 = v13;
                return v4;
            }
            else
            {
                *(v7) = 1;
                v4 = v13;
                return v4;
            }
        }
    }
    if ((v1 == 0 || v12 != 0) && (v1 != 0 || v1 != 0) && (v1 == 0 || v1 == 0 || ((int)v10) == 0 || v5 == 0) && (v1 == 0 || v5 != 0 || v1 != 0))
    {
        if (v10 == 0)
        {
            v13 = 1;
            v4 = v13;
            return v4;
        }
        quotearg_n_style_colon();
        error(0x0, ((unsigned int)v10), "%s");
        return 0;
    }
}
