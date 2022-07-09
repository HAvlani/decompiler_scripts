typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    char padding_0[200];
    unsigned long long field_c8;
} struct_2;

extern struct_1 cwd_file;
extern struct_1 cwd_n_used;
extern unsigned int failed_strcoll;
extern struct_0 format;
extern struct_1 line_length;
extern struct_0 sort_type;
extern struct_1 *sorted_file;
extern struct_1 sorted_file_alloc;

int sort_files()
{
    struct_1 *|unsigned long long v1;  // rax
    unsigned long long v3;  // rax
    struct_1 * v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    struct_2 *v7;  // rbp

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
        v4 = sorted_file;
        v5 = cwd_file;
        do
        {
            v4->field_0 = v5;
            v4 += 8;
            v5 += 208;
        }
        while (v4 != sorted_file + (cwd_n_used << 3));
        v3 = ((long long)sort_type);
        if ((sort_type == 2 || ((int)(((long long)format) - 2)) <= 1) && (sort_type == 2 || line_length != 0))
        {
            v6 = 0;
            do
            {
                v7 = *(sorted_file + v6 * 8);
                v3 = *(*(sorted_file + v6 * 8) + 200);
                if (*(*(sorted_file + (v6 << 3)) + 200) == 0)
                {
                    v3 = fileinfo_name_width.part.0();
                }
                v6 += 1;
                v7->field_c8 = rax<8>;
            }
            while (v6 < cwd_n_used);
            v3 = ((long long)sort_type);
        }
    }
    else
    {
        v3 = ((long long)sort_type);
        if (sort_type == 2)
        {
            /* goto 4231737; */
        }
    }
    if (sort_type != 2 || cwd_n_used != 0)
    {
        if (((int)v3) == 6)
        {
            return v3;
        }
    }
    if (((int)v3) != 6 || sort_type == 2 && cwd_n_used == 0)
    {
        v1 = _setjmp(&failed_strcoll);
        if (((int)sort_type) != 4)
        {
            if (cwd_n_used != 0)
            {
                v5 = cwd_file;
                v1 = sorted_file;
                do
                {
                    v1->field_0 = v5;
                    v1 += 8;
                    v5 += 208;
                }
                while (sorted_file + (cwd_n_used << 3) != v1);
            }
        }
        else
        {
            __assert_fail(); /* do not return */
        }
        if (v1 == 0 || ((int)sort_type) != 4)
        {
            if (((int)sort_type) == 5)
            {
                v3 = mpsort();
                return v3;
            }
            v3 = mpsort();
            return v3;
        }
    }
}
