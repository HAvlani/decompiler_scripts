typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern char have_read_stdin;
extern char ignore_missing;
extern struct_0 stdin;

int digest_file.isra.0()
{
    unsigned long|unsigned long long|unsigned int v1;  // rax
    struct_1 *|unsigned long long v10;  // rbp
    char v11[2];  // rdi
    unsigned long|unsigned int v12;  // r13d
    unsigned long long v13;  // r13
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    char *v7;  // rdx
    struct_1 * v8;  // rbx
    struct_1 *v9;  // rbx

    v1 = ((long long)(((int)v11[0]) - 45));
    if (v11[0] == 45)
    {
        v1 = ((int)v11[1]);
    }
    *(v7) = 0;
    if (v1 == 0)
    {
        have_read_stdin = 1;
        fadvise();
        v1 = blake2b_stream();
        if (v1 == 0)
        {
            clearerr_unlocked(((int)stdin));
            v13 = 1;
            v3 = v13;
            return v3;
        }
        v12 = ((int)*(__errno_location()));
        clearerr_unlocked(((int)stdin));
    }
    else
    {
        v10 = (long long)fopen_safer();
        if (v10 != 0)
        {
            fadvise();
            v4 = blake2b_stream();
            if (v4 != 0)
            {
                v12 = ((long long)v9->field_0);
                v9 = __errno_location();
                v1 = rpl_fclose();
                if (v1 != 0)
                {
                    if (((int)v12) != 0)
                    {
                        quotearg_n_style_colon();
                        error(0x0, ((unsigned int)v12), "%s");
                        return 0;
                    }
                }
            }
            v1 = rpl_fclose();
            if (v1 == 0)
            {
                v13 = 1;
                v3 = v13;
                return v3;
            }
            else
            {
                v8 = __errno_location();
            }
            if ((((int)v12) == 0 || v4 == 0) && (v4 == 0 || v1 != 0) && (v4 != 0 || v1 != 0))
            {
                v12 = ((long long)v8->field_0);
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
                v3 = v13;
                return v3;
            }
            else if (v10->field_0 != 2)
            {
                v13 = 0;
                quotearg_n_style_colon();
                error(0x0, v10->field_0, "%s");
                v3 = v13;
                return v3;
            }
            else
            {
                *(v7) = 1;
                v3 = v13;
                return v3;
            }
        }
    }
    if ((v1 == 0 || v10 != 0) && (v1 != 0 || v1 != 0) && (((int)v12) == 0 || v1 == 0 || v4 == 0 || v1 == 0) && (v1 == 0 || v4 != 0 || v1 != 0))
    {
        if (v12 == 0)
        {
            v13 = 1;
            v3 = v13;
            return v3;
        }
        quotearg_n_style_colon();
        error(0x0, ((unsigned int)v12), "%s");
        return 0;
    }
}
