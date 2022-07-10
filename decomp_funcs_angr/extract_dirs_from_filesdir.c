typedef struct struct_3 {
    unsigned long long field_0;
    char padding_8[160];
    unsigned int field_a8;
} struct_3;

extern struct_0 active_dir_set;
extern unsigned long long cwd_n_used;
extern struct_0 *sorted_file;

int extract_dirs_from_files()
{
    BOT tmp_11;  // tmp #11
    BOT tmp_19;  // tmp #19
    unsigned long long|char [2] v1;  // rax
    char *|unsigned long long v10;  // r14
    struct struct_2 ** v2;  // rax
    unsigned long long v6;  // rdx
    struct struct_3 ** v7;  // rbx
    struct_3 *v8;  // rbp
    unsigned long v9;  // rdi

    if (v9 != 0)
    {
        if (active_dir_set != 0)
        {
            queue_directory();
        }
    }
    v7 = cwd_n_used - 1;
    if (cwd_n_used == 0)
    {
        cwd_n_used = 0;
        return v1;
    }
    while (true)
    {
        v8 = *(sorted_file + v7 * 8);
        v1 = ((long long)*(*(sorted_file + v7 * 8) + 168));
        if (((int)v1) == 9 || *(*(sorted_file + (v7 << 3)) + 168) == 3)
        {
            v10 = v8->field_0;
            if (v9 != 0)
            {
                v1 = last_component();
                if (v1[0] == 46)
                {
                    v1 = ((long long)v1 + ((long long)(v1[1] == 46))[1]);
                    tmp_11 = v1;
                }
                if (*(v10) != 47 && (v1[0] != 46 || v1 != 47) && (v1[0] != 46 || ((long long)tmp_11) != 0))
                {
                    v10 = (long long)file_name_concat();
                    queue_directory();
                    rpl_free();
                }
            }
            if (v9 == 0 || v1[0] != 46 || v1 != 47 && ((long long)tmp_11) != 0)
            {
                if (v9 == 0 || *(v10) == 47)
                {
                    queue_directory();
                }
                if (v8->field_a8 == 9)
                {
                    v7 -= 1;
                    rpl_free();
                    rpl_free();
                    rpl_free();
                    break;
                }
            }
        }
        if (v8->field_a8 != 9 || ((int)v1) != 9 && *(*(sorted_file + (v7 << 3)) + 168) != 3 || v1[0] == 46 && v1 == 47 && v9 != 0 || v1[0] == 46 && ((long long)tmp_11) == 0 && v9 != 0)
        {
            v7 -= 1;
            if (v7 == 18446744069414584319)
            {
                break;
            }
        }
    }
    if (cwd_n_used != 0)
    {
        v2 = sorted_file;
        v6 = 0;
        do
        {
            tmp_19 = ((long long)v2[0]->field_a8);
            *(sorted_file + v6 * 8) = v2[0];
            v2 += 8;
            v6 += ((long long)(((int)tmp_19) != 9));
        }
        while (sorted_file + (cwd_n_used << 3) != v2);
        cwd_n_used = v6;
        return v2;
    }
    else
    {
        cwd_n_used = 0;
        return v1;
    }
}
