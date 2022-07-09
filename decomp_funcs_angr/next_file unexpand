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
    char [2] v7;  // r12
    unsigned long long v8;  // r12
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
            if (*(prev_file.7262 + 1) != 0 || *(prev_file.7262) != 45)
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
        v7 = *(file_list);
        file_list = file_list + 8;
        if (v7 != 0)
        {
            while (true)
            {
                if (v7[1] == 0 && v7[0] == 45)
                {
                    v2 = stdin;
                    have_read_stdin = 1;
                    if (stdin != 0)
                    {
                        v0 = v2;
                        prev_file.7262 = v7;
                        fadvise();
                        return v0;
                    }
                }
                if (v7[1] != 0 || v7[0] != 45)
                {
                    v2 = fopen(v7, "r");
                    if (v2 != 0)
                    {
                        v0 = v2;
                        prev_file.7262 = v7;
                        fadvise();
                        return v0;
                    }
                }
                if (v2 == 0 && v7[1] != 0 || v2 == 0 && v7[0] != 45 || v7[1] == 0 && v7[0] == 45 && stdin == 0)
                {
                    v8 = (long long)quotearg_n_style_colon();
                    error(0x0, *(__errno_location()), "%s");
                    exit_status = 1;
                    v7 = *(file_list);
                    file_list = file_list + 8;
                    return 0;
                }
            }
        }
        return 0;
    }
}
