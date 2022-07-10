typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern unsigned int exit_status;
extern struct_0 *file_list;
extern char have_read_stdin;
extern char prev_file.7262[2];
extern struct_0 stdin;

int next_file()
{
    BOT tmp_13;  // tmp #13
    unsigned long v0;  // [bp-0x30]
    unsigned long long v2;  // rax
    struct_1 *v4;  // rbx
    char *v6;  // rdi
    unsigned long long v7;  // r12
    char [2] v8;  // r12
    unsigned long|unsigned int v9;  // r13d

    if (v6 != 0)
    {
        if (prev_file.7262 != 0)
        {
            tmp_13 = ((long long)v4->field_0);
            v9 = ((int)(((long long)(*(v6) & 32)) == 0? 0 : ((int)tmp_13)));
            if (*(prev_file.7262) == 45)
            {
                if (*(prev_file.7262 + 1) == 0)
                {
                    clearerr_unlocked();
                }
            }
            if (*(prev_file.7262) != 45 || *(prev_file.7262 + 1) != 0)
            {
                v2 = rpl_fclose();
                if (v2 != 0)
                {
                    v9 = ((long long)*(__errno_location()));
                }
            }
            if (v9 != 0)
            {
                quotearg_n_style_colon();
                error(0x0, v9, "%s");
                exit_status = 1;
            }
        }
        else
        {
            __assert_fail(); /* do not return */
        }
    }
    if (v6 == 0 || prev_file.7262 != 0)
    {
        v8 = *(file_list);
        file_list = file_list + 8;
        if (v8 != 0)
        {
            while (true)
            {
                if (v8[0] == 45 && v8[1] == 0)
                {
                    v2 = stdin;
                    have_read_stdin = 1;
                    if (stdin != 0)
                    {
                        v0 = v2;
                        prev_file.7262 = v8;
                        fadvise();
                        return v0;
                    }
                }
                if (v8[0] != 45 || v8[1] != 0)
                {
                    v2 = fopen(v8, "r");
                    if (v2 != 0)
                    {
                        v0 = v2;
                        prev_file.7262 = v8;
                        fadvise();
                        return v0;
                    }
                }
                if (v2 == 0 && v8[0] != 45 || v2 == 0 && v8[1] != 0 || v8[0] == 45 && stdin == 0 && v8[1] == 0)
                {
                    v7 = (long long)quotearg_n_style_colon();
                    error(0x0, *(__errno_location()), "%s");
                    exit_status = 1;
                    v8 = *(file_list);
                    file_list = file_list + 8;
                    return 0;
                }
            }
        }
        return 0;
    }
}
