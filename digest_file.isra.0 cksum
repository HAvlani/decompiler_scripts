typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

extern struct_2 cksum_algorithm;
extern unsigned long long cksumfns;
extern struct_0 digest_length;
extern char have_read_stdin;
extern char ignore_missing;
extern struct_0 stdin;

int digest_file.isra.0()
{
    unsigned long long v1;  // rax
    struct_2 *|struct_1 * v10;  // r13
    unsigned long|unsigned int v11;  // r14d
    unsigned long long v2;  // rax
    unsigned long long|struct_1 * v4;  // rcx
    char *|struct_1 * v5;  // rdx
    unsigned long|struct_2 *|unsigned int v6;  // rbx
    unsigned long long v7;  // rbp
    unsigned long long|char [2] v8;  // rdi
    unsigned long long v9;  // r13

    v10 = v4;
    v6 = ((long long)(((int)v8[0]) - 45));
    if (v8[0] == 45)
    {
        v6 = ((int)v8[1]);
    }
    *(v5) = 0;
    if (v6 == 0)
    {
        have_read_stdin = 1;
        v7 = stdin;
    }
    else
    {
        v7 = (long long)fopen_safer();
        if (v7 == 0)
        {
            v9 = ((long long)ignore_missing);
            v6 = __errno_location();
            if (!(((long long)ignore_missing) != 0))
            {
                v9 = 0;
                quotearg_n_style_colon();
                error(0x0, v6->field_0, "%s");
                v2 = v9;
                return v2;
            }
            else if (v6->field_0 != 2)
            {
                v9 = 0;
                quotearg_n_style_colon();
                error(0x0, v6->field_0, "%s");
                v2 = v9;
                return v2;
            }
            else
            {
                *(v5) = 1;
                v2 = v9;
                return v2;
            }
        }
    }
    if (v6 == 0 || v7 != 0)
    {
        fadvise();
        if (cksum_algorithm == 9)
        {
            v4->field_0 = digest_length >> 3;
        }
        v4 = &cksumfns;
        v5 = v10;
        v8 = v7;
        v1 = *(4340576 + ((long long)cksum_algorithm) * 8)();
        if (v1 != 0)
        {
            v11 = ((int)v5->field_0);
            v10 = __errno_location();
            if (v6 == 0)
            {
                clearerr_unlocked();
            }
            else
            {
                v1 = rpl_fclose();
                if (v1 != 0)
                {
                    if (v11 != 0)
                    {
                        v9 = 0;
                        quotearg_n_style_colon();
                        error(0x0, v11, "%s");
                        v2 = v9;
                        return v2;
                    }
                }
            }
        }
        else if (v6 == 0)
        {
            clearerr_unlocked();
            v9 = 1;
            v2 = v9;
            return v2;
        }
        else
        {
            v1 = rpl_fclose();
            if (v1 == 0)
            {
                v9 = 1;
                v2 = v9;
                return v2;
            }
            v10 = __errno_location();
            /* goto 4211389; */
        }
        if (v6 != 0 && (v11 == 0 || v1 == 0) && (v1 == 0 || v1 != 0) && (v1 != 0 || v1 != 0))
        {
            v11 = ((long long)v10->field_0);
        }
        if (v11 == 0 && v1 != 0 || v1 == 0 && v1 != 0 || v6 == 0 && v1 != 0 || v1 == 0 && v6 != 0 && v1 != 0)
        {
            if (v11 == 0)
            {
                v9 = 1;
                v2 = v9;
                return v2;
            }
            v9 = 0;
            quotearg_n_style_colon();
            error(0x0, v11, "%s");
            v2 = v9;
            return v2;
        }
    }
}
