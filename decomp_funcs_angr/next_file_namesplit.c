typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_2 {
    char field_0;
} struct_2;

extern struct_0 additional_suffix;
extern struct_0 addsuf_length.7390;
extern unsigned int g_40a408;
extern struct_0 numeric_suffix_start;
extern struct_0 outbase;
extern struct_0 outbase_length.7388;
extern struct_0 outfile;
extern struct_0 outfile_length.7389;
extern char *outfile_mid;
extern char *suffix_alphabet;
extern char suffix_auto;
extern struct_0 suffix_length;
extern struct_0 *sufindex.7387;

int next_file_name()
{
    BOT tmp_12;  // tmp #12
    BOT tmp_16;  // tmp #16
    unsigned long long v1;  // rax
    unsigned long long v10;  // rax
    void *|struct_0 *|char * v11;  // rcx
    struct_2 *v12;  // rcx
    struct_2 *|char * v13;  // rdx
    unsigned long long v14;  // rbx
    unsigned long long|char * v15;  // rbx
    unsigned long long v16;  // rbp
    unsigned long|char * v17;  // rbp
    unsigned long|char * v18;  // rsi
    void *v19;  // rdi
    unsigned long long|char * v2;  // rax
    unsigned long long v20;  // r12
    struct_2 *v21;  // r13
    unsigned long long v22;  // r13
    char * v3;  // rax
    void *v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    v15 = suffix_length;
    if (outfile != 0)
    {
        v2 = v15 - 1;
        if (v15 != 0)
        {
            v18 = suffix_alphabet;
            v11 = sufindex.7387 + (suffix_length - 1) * 8;
            while (true)
            {
                v13 = v11->field_0 + 1;
                v11->field_0 = v11->field_0 + 1;
                if (v2 == 0 && ((long long)suffix_auto) != 0)
                {
                    v2 = ((long long)*(v18 + v13));
                    tmp_12 = *(v18 + v13);
                    *(outfile_mid) = *(v18 + v13);
                    if (((long long)tmp_12) != 0)
                    {
                        return v2;
                    }
                    v11->field_0 = 0;
                    *(outfile_mid) = *(v18);
                    error(0x1, 0x0, dcgettext(0x0, &g_40a408, 0x5));
                }
                if (((long long)suffix_auto) == 0 || v2 != 0)
                {
                    v13 = ((long long)*(suffix_alphabet + v13));
                    tmp_16 = v13;
                    *(outfile_mid + v2) = tmp_16;
                    if (((long long)tmp_16) == 0)
                    {
                        v11->field_0 = 0;
                        v11 -= 8;
                        *(outfile_mid + v2) = *(suffix_alphabet);
                        v2 -= 1;
                        error(0x1, 0x0, dcgettext(0x0, &g_40a408, 0x5));
                    }
                    else
                    {
                        return v2;
                    }
                }
            }
        }
        else
        {
            error(0x1, 0x0, dcgettext(0x0, &g_40a408, 0x5));
        }
    }
    if (outfile == 0 || v15 != 0)
    {
        v20 = outfile_length.7389;
        if (outfile_length.7389 == 0)
        {
            v7 = strlen(outbase);
            outbase_length.7388 = v7;
            v22 = v7;
            v10 = 0;
            if (additional_suffix != 0)
            {
                v10 = strlen(additional_suffix);
            }
            addsuf_length.7390 = v10;
            v2 = v10 + suffix_length + v22;
            outfile_length.7389 = v2;
            if (v22 <= outfile_length.7389 + 1)
            {
                v5 = xrealloc();
                v14 = outbase_length.7388;
                outfile = v5;
                v17 = v5;
                memcpy(v5, outbase, outbase_length.7388);
                v3 = suffix_alphabet;
            }
            else
            {
                xalloc_die(); /* do not return */
            }
        }
        else
        {
            outfile_length.7389 = v20 + 2;
            suffix_length = suffix_length + 1;
            if (v20 + 3 >= outbase_length.7388)
            {
                v6 = xrealloc();
                v11 = outbase_length.7388;
                v17 = v6;
                outfile = v6;
                v3 = suffix_alphabet;
                tmp_16 = *(sufindex.7387);
                v14 = outbase_length.7388 + 1;
                outbase_length.7388 = outbase_length.7388 + 1;
                *(v17 + v11) = *(suffix_alphabet + tmp_16);
            }
            else
            {
                xalloc_die(); /* do not return */
            }
        }
        if (outfile_length.7389 == 0 && v22 <= outfile_length.7389 + 1 || outfile_length.7389 != 0 && v20 + 3 >= outbase_length.7388)
        {
            v11 = v17 + v14;
            v18 = ((long long)*(v3));
            v19 = v11;
            outfile_mid = v11;
            v1 = memset(v19, v18, suffix_length);
            if (additional_suffix != 0)
            {
                memcpy(v1 + suffix_length, additional_suffix, addsuf_length.7390);
            }
            *(v17 + outfile_length.7389) = 0;
            rpl_free();
            v2 = xcalloc();
            v21 = numeric_suffix_start;
            sufindex.7387 = v2;
            v15 = v2;
            if (numeric_suffix_start == 0)
            {
                return v2;
            }
            else if (v20 == 0)
            {
                v17 = strlen(numeric_suffix_start);
                v2 = memcpy(suffix_length - v17 + outfile_mid, numeric_suffix_start, v17);
                v13 = v17 - 1;
                if (v17 == 0)
                {
                    return v2;
                }
                v16 = 0 - v17;
                v12 = suffix_length * 8 + v16 * 8 + v15;
                do
                {
                    v2 = ((long long)(((int)*(v21 + v13)) - 48));
                    *(v12 + v13 * 8) = ((long long)(((int)*(v21 + v13)) - 48));
                    v13 -= 1;
                }
                while (v13 != 18446744069414584319);
                return v2;
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
    }
}
