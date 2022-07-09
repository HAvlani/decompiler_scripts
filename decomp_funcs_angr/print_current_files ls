typedef struct struct_3 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_1 column_info;
extern struct_1 cwd_n_used;
extern char eolbyte;
extern struct_0 format;
extern char g_40a95d;
extern char g_40a984;
extern char g_40a998;
extern char g_40a9f4;
extern char g_40a9fc;
extern char g_40aa39;
extern char g_40aa75;
extern char g_40aa89;
extern char g_40aa95;
extern char g_40aad2;
extern char g_40ab2b;
extern char g_40ab92;
extern char g_40aba7;
extern char g_40abc3;
extern char g_40ac35;
extern char g_40ac6d;
extern char g_40ac75;
extern struct_1 line_length;
extern struct_1 sorted_file;
extern unsigned long long stdout[7];

int print_current_files()
{
    unsigned long long v10;  // [bp+0x20]
    unsigned long v11;  // [bp+0x28]
    char *v12;  // rax
    char * v17;  // rax
    unsigned long v2;  // [bp-0x20]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rcx
    unsigned long long v23;  // rbx
    unsigned long long v24;  // rbx
    unsigned long long v26;  // rbx
    struct_1 *|unsigned long long v27;  // rbp
    unsigned long long v28;  // r12
    unsigned long long v29;  // r12
    unsigned long v3;  // [bp-0x18]
    unsigned long long v30;  // r12
    unsigned long long v32;  // r13
    unsigned long long v33;  // r13
    unsigned long long v34;  // r13
    struct_3 *|unsigned long long v37;  // r14
    unsigned long long v38;  // r14
    unsigned long long v39;  // r14
    unsigned long v4;  // [bp-0x10]
    struct_3 *|unsigned long long v40;  // r15
    unsigned long long v41;  // r15
    unsigned long long v42;  // r15
    unsigned long v5;  // [bp-0x8]
    unsigned long v6;  // [bp+0x0]
    unsigned long v7;  // [bp+0x8]
    unsigned long|unsigned long long v8;  // [bp+0x10]
    unsigned long v9;  // [bp+0x18]

    /* goto 4237893; */
    v23 = 0;
    v23 = 0;
    if (line_length != 0)
    {
        rsp<8> = rsp<8> - 8;
        v6 = &g_40a95d;
        v21 = calculate_columns();
        v7 = v21;
        v37 = column_info + v21 * 24 - 24;
        rsp<8> = rsp<8> - 8;
        v5 = &g_40a984;
        v40 = (long long)length_of_file_name_and_frills();
        v28 = v37->field_10->field_0;
        rsp<8> = rsp<8> - 8;
        v4 = &g_40a998;
        print_file_name_and_frills();
        rsp<8> = rsp<8> - 8;
        v6 = &g_40ab2b;
        v8 = 0;
        v22 = (long long)calculate_columns();
        v40 = column_info + v22 * 24 - 24;
        v17 = ((long long)((0 CONCAT cwd_n_used) % v22));
        v37 = 0 + v17;
        v9 = v37;
        if (cwd_n_used > 1)
        {
            v33 = 0;
            v23 = 1;
            /* goto 4237844; */
        }
        if (v17 != 0)
        {
            /* goto 4238192; */
        }
        else
        {
            v26 = *(rsp<8> + 40);
            v29 = *(rsp<8> + 40 + 8 + 8);
            v32 = *(rsp<8> + 40 + 8 + 8 + 8);
            v39 = *(rsp<8> + 40 + 8 + 8 + 8 + 8);
            v42 = *(rsp<8> + 40 + 8 + 8 + 8 + 8 + 8);
            return v17;
        }
        if (cwd_n_used <= 1 || v23 >= cwd_n_used)
        {
            v17 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v17) = eolbyte;
                v26 = *(rsp<8> + 40);
                v29 = *(rsp<8> + 40 + 8 + 8);
                v32 = *(rsp<8> + 40 + 8 + 8 + 8);
                v39 = *(rsp<8> + 40 + 8 + 8 + 8 + 8);
                v42 = *(rsp<8> + 40 + 8 + 8 + 8 + 8 + 8);
                return v17;
            }
        }
    }
    if (cwd_n_used > v23 || cwd_n_used != 0)
    {
        rsp<8> = rsp<8> - 8;
        v6 = &g_40aa75;
        set_normal_color();
        v23 += 1;
        rsp<8> = rsp<8> - 8;
        v5 = &g_40aa89;
        print_long_format();
        rsp<8> = rsp<8> - 8;
        v4 = &g_40aa95;
    }
    if (cwd_n_used != 0 || cwd_n_used > v23)
    {
        rsp<8> = rsp<8> - 8;
        v6 = &g_40aad2;
        print_file_name_and_frills();
        v17 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v17) = eolbyte;
        }
        else
        {
            rsp<8> = rsp<8> - 8;
            v5 = &g_40ac35;
            __overflow();
        }
        v23 += 1;
    }
    if (cwd_n_used != 0)
    {
        if (cwd_n_used <= v23)
        {
            v24 = v6;
            v30 = v8;
            v34 = v9;
            v38 = v10;
            v41 = v11;
            return dired_outbyte();
        }
        if (cwd_n_used <= v23)
        {
            v26 = *(rsp<8> + 40);
            v29 = *(rsp<8> + 40 + 8 + 8);
            v32 = *(rsp<8> + 40 + 8 + 8 + 8);
            v39 = *(rsp<8> + 40 + 8 + 8 + 8 + 8);
            v42 = *(rsp<8> + 40 + 8 + 8 + 8 + 8 + 8);
            return v17;
        }
    }
    v26 = *(rsp<8> + 40);
    v29 = *(rsp<8> + 40 + 8 + 8);
    v32 = *(rsp<8> + 40 + 8 + 8 + 8);
    v39 = *(rsp<8> + 40 + 8 + 8 + 8 + 8);
    v42 = *(rsp<8> + 40 + 8 + 8 + 8 + 8 + 8);
    return v17;
    v26 = *(rsp<8> + 40);
    v29 = *(rsp<8> + 40 + 8 + 8);
    v32 = *(rsp<8> + 40 + 8 + 8 + 8);
    v39 = *(rsp<8> + 40 + 8 + 8 + 8 + 8);
    v42 = *(rsp<8> + 40 + 8 + 8 + 8 + 8 + 8);
    return v17;
    if (v23 < cwd_n_used || cwd_n_used > 1 && line_length != 0)
    {
        v27 = ((long long)((0 CONCAT v23) % v5 >> 64));
        v23 += 1;
        rsp<8> = rsp<8> - 8;
        v3 = &g_40a9f4;
        print_file_name_and_frills();
        rsp<8> = rsp<8> - 8;
        v2 = &g_40a9fc;
        v40 = (long long)length_of_file_name_and_frills();
        v28 = *(v37->field_10 + v27 * 8);
    }
    if (((long long)((0 CONCAT v23) % v5 >> 64)) == 0)
    {
        if (v23 < cwd_n_used || cwd_n_used > 1)
        {
            if (v23 < cwd_n_used || line_length != 0)
            {
                v12 = *(stdout + 40);
                if (*(stdout + 40) < *(stdout + 48))
                {
                    v33 = 0;
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v12) = eolbyte;
                    /* goto 4237786; */
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v3 = &g_40ac75;
                    __overflow();
                    v33 = 0;
                    /* goto 4237786; */
                }
            }
        }
    }
    if (((long long)((0 CONCAT v23) % v5 >> 64)) != 0 && (v23 < cwd_n_used || cwd_n_used > 1) && (v23 < cwd_n_used || line_length != 0))
    {
        v28 += v33;
        v33 = v28;
        rsp<8> = rsp<8> - 8;
        v3 = &g_40aa39;
        indent();
        /* goto 4237786; */
    }
    if (v7 != v6 || v17 != 0 && line_length != 0)
    {
        v33 = v8;
        v28 = 0;
        v37 = 0;
    }
    v7 = *(sorted_file + v33 * 8);
    rsp<8> = rsp<8> - 8;
    v5 = &g_40aba7;
    v23 = (long long)length_of_file_name_and_frills();
    v27 = *(v40->field_10 + v28);
    v28 += 8;
    rsp<8> = rsp<8> - 8;
    v4 = &g_40abc3;
    print_file_name_and_frills();
    v33 += v7;
    if (v33 < cwd_n_used)
    {
        v27 += v37;
        v37 = v27;
        rsp<8> = rsp<8> - 8;
        v3 = &g_40ab92;
        indent();
    }
    else
    {
        v17 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v17) = eolbyte;
        }
        else
        {
            rsp<8> = rsp<8> - 8;
            v3 = &g_40ac6d;
            __overflow();
        }
        v6 += 1;
        if (v7 == v6)
        {
            v26 = *(rsp<8> + 40);
            v29 = *(rsp<8> + 40 + 8 + 8);
            v32 = *(rsp<8> + 40 + 8 + 8 + 8);
            v39 = *(rsp<8> + 40 + 8 + 8 + 8 + 8);
            v42 = *(rsp<8> + 40 + 8 + 8 + 8 + 8 + 8);
            return v17;
        }
    }
}
