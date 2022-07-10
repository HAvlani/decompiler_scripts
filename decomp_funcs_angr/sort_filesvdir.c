typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    char padding_0[200];
    unsigned long long field_c8;
} struct_0;

extern struct_1 cwd_file;
extern struct_1 cwd_n_used;
extern unsigned int failed_strcoll;
extern struct_2 format;
extern struct_1 line_length;
extern struct_2 sort_type;
extern struct struct_0 **sorted_file;
extern struct_1 sorted_file_alloc;

int sort_files()
{
    unsigned long long v1;  // rax
    unsigned long long|struct_1 * v2;  // rax
    struct_1 * v3;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    struct_0 *v7;  // rbp

    if ((cwd_n_used >> 1) + cwd_n_used <= sorted_file_alloc)
    {
    }
    else
    {
        rpl_free();
        sorted_file = (long long)xnmalloc();
        sorted_file_alloc = cwd_n_used * 3;
    }
    if (cwd_n_used != 0)
    {
        v3 = sorted_file;
        v5 = cwd_file;
        do
        {
            v3->field_0 = v5;
            v3 += 8;
            v5 += 208;
        }
        while (v3 != sorted_file + (cwd_n_used << 3));
        v1 = ((long long)sort_type);
        if ((sort_type == 2 || ((int)(((long long)format) - 2)) <= 1) && (sort_type == 2 || line_length != 0))
        {
            v6 = 0;
            do
            {
                v7 = *(sorted_file + v6 * 8);
                v1 = *(*(sorted_file + v6 * 8) + 200);
                if (*(*(sorted_file + (v6 << 3)) + 200) == 0)
                {
                    v1 = fileinfo_name_width.part.0();
                }
                v6 += 1;
                v7->field_c8 = v1;
            }
            while (v6 < cwd_n_used);
            v1 = ((long long)sort_type);
        }
    }
    else
    {
        v1 = ((long long)sort_type);
        if (sort_type == 2)
        {
            /* goto 4231737; */
        }
    }
    if (sort_type != 2 || cwd_n_used != 0)
    {
        if (((int)v1) == 6)
        {
            return v1;
        }
    }
    if (((int)v1) != 6 || sort_type == 2 && cwd_n_used == 0)
    {
        v2 = _setjmp(&failed_strcoll);
        if (((int)sort_type) != 4)
        {
            if (cwd_n_used != 0)
            {
                v5 = cwd_file;
                v2 = sorted_file;
                do
                {
                    v2->field_0 = v5;
                    v2 += 8;
                    v5 += 208;
                }
                while (sorted_file + (cwd_n_used << 3) != v2);
            }
        }
        else
        {
            __assert_fail(); /* do not return */
        }
        if (v2 == 0 || ((int)sort_type) != 4)
        {
            if (((int)sort_type) == 5)
            {
                v1 = mpsort();
                return v1;
            }
            v1 = mpsort();
            return v1;
        }
    }
}
