typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_1;

extern struct_0 column_info;
extern struct_0 column_info_alloc.11654;
extern struct_0 cwd_n_used;
extern struct_0 line_length;
extern struct_0 max_idx;

int calculate_columns()
{
    BOT tmp_16;  // tmp #16
    unsigned long|char *|unsigned long long|struct_0 * v1;  // rax
    unsigned long long|struct_0 * v10;  // rdi
    unsigned long long v11;  // r8
    unsigned long long v12;  // r9
    unsigned long long v13;  // r12
    struct_0 * v14;  // r13
    unsigned long long v3;  // rax
    unsigned long long v5;  // rcx
    unsigned long long|struct_0 * v6;  // rdx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rbp
    struct_1 *|unsigned long long v9;  // rsi

    v8 = v10;
    v13 = cwd_n_used;
    if (max_idx != 0)
    {
        if (max_idx >= cwd_n_used)
        {
            v12 = v13;
        }
        else if (max_idx > column_info_alloc.11654)
        {
            v13 = max_idx;
        }
        else
        {
            v12 = cwd_n_used;
            v13 = max_idx;
            /* goto 4232876; */
        }
        if (max_idx < cwd_n_used || v13 > column_info_alloc.11654)
        {
            if (max_idx > column_info_alloc.11654 || max_idx >= cwd_n_used)
            {
                if (max_idx >> 1 <= v13)
                {
                    v7 = max_idx;
                    column_info = (long long)xreallocarray();
                    /* goto 4232717; */
                }
            }
        }
    }
    else
    {
        v12 = v13;
    }
    if (max_idx < cwd_n_used || v13 > column_info_alloc.11654)
    {
        if (max_idx != 0 || v13 > column_info_alloc.11654)
        {
            if (max_idx == 0 || max_idx > column_info_alloc.11654 || max_idx >= cwd_n_used)
            {
                if (max_idx == 0 || max_idx >> 1 > v13)
                {
                    v7 = v13 * 2;
                    column_info = (long long)xreallocarray();
                    /* goto 4232717; */
                }
                if (!(((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Add(Load(addr=0x4232e0<64>, size=8, endness=Iend_LE), 0x1<64>), rbx<8>, cc_ndep<8>)) == 0))
                {
                    xalloc_die(); /* do not return */
                }
                else if (v5 == ((long long)((0 CONCAT v10) % v9)))
                {
                    v6 = (long long)xnmalloc();
                    if (v7 > column_info_alloc.11654)
                    {
                        v1 = column_info_alloc.11654 * 8 + 8;
                        v9 = v7 * 8 + 8;
                        do
                        {
                            *(column_info + v1 * 3 + 8) = v6;
                            v6 += v1;
                            v1 += 8;
                        }
                        while (v9 != v1);
                    }
                    column_info_alloc.11654 = v7;
                    v12 = cwd_n_used;
                }
                else
                {
                    xalloc_die(); /* do not return */
                }
            }
        }
    }
    if (v13 > column_info_alloc.11654 || max_idx > column_info_alloc.11654)
    {
        v9 = v7 - column_info_alloc.11654;
        v5 = column_info_alloc.11654 + 1 + v7;
        v10 = (column_info_alloc.11654 + 1 + v7) * (v7 - column_info_alloc.11654);
    }
    if (((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Add(Load(addr=0x4232e0<64>, size=8, endness=Iend_LE), 0x1<64>), rbx<8>, cc_ndep<8>)) == 0 || v13 <= column_info_alloc.11654)
    {
        if (v5 == ((long long)((0 CONCAT v10) % v9)) || v13 <= column_info_alloc.11654)
        {
            if (max_idx == 0 || max_idx > column_info_alloc.11654 || max_idx >= cwd_n_used)
            {
                if (max_idx == 0 || v13 == 0)
                {
                    if (v13 == 0 || v13 <= column_info_alloc.11654)
                    {
                        if (((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Add(Load(addr=0x4232e0<64>, size=8, endness=Iend_LE), 0x1<64>), rbx<8>, cc_ndep<8>)) == 0 || max_idx == 0 || max_idx >= cwd_n_used)
                        {
                            if (v5 == ((long long)((0 CONCAT v10) % v9)) || max_idx == 0 || max_idx >= cwd_n_used)
                            {
                                if (v13 == 0 || max_idx != 0 || v13 > column_info_alloc.11654)
                                {
                                    if (v12 == 0)
                                    {
                                        v3 = v13;
                                        return v3;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Add(Load(addr=0x4232e0<64>, size=8, endness=Iend_LE), 0x1<64>), rbx<8>, cc_ndep<8>)) == 0 || max_idx < cwd_n_used || v13 <= column_info_alloc.11654)
    {
        if (...)
        {
            v11 = column_info;
            v9 = 3;
            v10 = 0;
            do
            {
                v1 = *(v11 + v9 * 8 + 8);
                *(v11 + v9 * 8 + 24) = 1;
                *(v11 + v9 * 8 + 16) = v9;
                v5 = v1 + v10 * 8;
                do
                {
                    v6 = v1;
                    v1->field_0 = 3;
                    v1 += 8;
                }
                while (v5 != v6);
                v10 = 1;
                v9 = 6;
            }
            while (v13 > 1);
        }
    }
    if (...)
    {
        v7 = 0;
        do
        {
            v11 = (long long)length_of_file_name_and_frills();
            if (v13 != 0)
            {
                v9 = column_info;
                v5 = 0;
                v12 = v11 + 2;
                do
                {
                    v10 = v5;
                    v5 += 1;
                    if (v9->field_0 != 0)
                    {
                        if (((long long)v8) != 0)
                        {
                            v14 = ((long long)((0 CONCAT 0) % ((long long)((0 CONCAT cwd_n_used + v5 - 1) % v5))));
                        }
                        else
                        {
                            v14 = ((long long)((0 CONCAT 0) % v5 >> 64));
                        }
                        tmp_16 = v14 != v10;
                        v1 = (v14 != v10? v12 : r8<8>);
                        v10 = v9->field_10 + v14 * 8;
                        v6 = *(v9->field_10 + v14 * 8);
                        if (*(v9->field_10 + (v14 << 3)) < (tmp_16? v12 : r8<8>))
                        {
                            v6 = v9->field_8 - v6 + v1;
                            v9->field_8 = v6;
                            v10->field_0 = v1;
                            v9->field_0 = ((char)(v9->field_8 < line_length));
                        }
                    }
                    v9 += 24;
                }
                while (v13 != v5);
            }
            v7 += 1;
        }
        while (v7 < cwd_n_used);
    }
    if (...)
    {
        if (v13 <= 1)
        {
            v3 = v13;
            return v3;
        }
        v1 = column_info + v13 * 24 - 24;
        while (true)
        {
            if (*(v1) == 0)
            {
                v13 = r12<8> - 1;
                v1 -= 24;
                v3 = v13;
                return v3;
            }
            else
            {
                return v13;
            }
        }
    }
}
