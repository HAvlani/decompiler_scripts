typedef struct struct_3 {
    char padding_0[16];
    struct struct_0 *field_10;
} struct_3;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 column_info;
extern struct_0 cwd_n_used;
extern char eolbyte;
extern struct_1 format;
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
extern struct_0 line_length;
extern struct_0 sorted_file;
extern unsigned long long stdout[7];

int print_current_files()
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long long v10;  // [bp+0x28]
    unsigned long long v11;  // [bp+0x30]
    unsigned long long v12;  // [bp+0x38]
    unsigned long long v13;  // [bp+0x40]
    unsigned long long v15;  // rax
    char * v17;  // rax
    unsigned long v2;  // [bp-0x20]
    char *v22;  // rax
    unsigned long long v24;  // rcx
    unsigned long long v25;  // rbx
    unsigned long long v26;  // rbx
    unsigned long long v27;  // rbx
    unsigned long long|struct_0 * v29;  // rbp
    unsigned long v3;  // [bp-0x18]
    unsigned long long v30;  // r12
    unsigned long long v31;  // r12
    unsigned long long v33;  // r12
    unsigned long long v34;  // r13
    unsigned long long v35;  // r13
    unsigned long long v36;  // r13
    struct_3 *|unsigned long long v38;  // r14
    unsigned long v4;  // [bp-0x10]
    unsigned long long v40;  // r14
    unsigned long long v41;  // r14
    unsigned long long v42;  // r15
    struct_3 *|unsigned long long v43;  // r15
    unsigned long long v45;  // r15
    unsigned long v5;  // [bp-0x8]
    unsigned long v6;  // [bp+0x0]
    unsigned long v7;  // [bp+0x8]
    unsigned long long v8;  // [bp+0x10]
    unsigned long v9;  // [bp+0x18]

    /* goto 4237893; */
    v26 = 0;
    v26 = 0;
    if (line_length != 0)
    {
        rsp<8> = rsp<8> - 8;
        v6 = &g_40a95d;
        v15 = calculate_columns();
        v7 = v15;
        v38 = column_info + v15 * 24 - 24;
        rsp<8> = rsp<8> - 8;
        v5 = &g_40a984;
        v43 = (long long)length_of_file_name_and_frills();
        v31 = v38->field_10->field_0;
        rsp<8> = rsp<8> - 8;
        v4 = &g_40a998;
        print_file_name_and_frills();
        rsp<8> = rsp<8> - 8;
        v6 = &g_40ab2b;
        v8 = 0;
        v24 = (long long)calculate_columns();
        v43 = column_info + v24 * 24 - 24;
        v17 = ((long long)((0 CONCAT cwd_n_used) % v24));
        v38 = 0 + v17;
        v9 = v38;
        if (cwd_n_used > 1)
        {
            v35 = 0;
            v26 = 1;
            /* goto 4237844; */
        }
        if (v17 != 0)
        {
            /* goto 4238192; */
        }
        else
        {
            v27 = *(rsp<8> + 40);
            v30 = *(rsp<8> + 40 + 8 + 8);
            v36 = *(rsp<8> + 40 + 8 + 8 + 8);
            v41 = *(rsp<8> + 40 + 8 + 8 + 8 + 8);
            v45 = *(rsp<8> + 40 + 8 + 8 + 8 + 8 + 8);
            return v17;
        }
        if (cwd_n_used <= 1 || v26 >= cwd_n_used)
        {
            v17 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v17) = eolbyte;
                v27 = *(rsp<8> + 40);
                v30 = *(rsp<8> + 40 + 8 + 8);
                v36 = *(rsp<8> + 40 + 8 + 8 + 8);
                v41 = *(rsp<8> + 40 + 8 + 8 + 8 + 8);
                v45 = *(rsp<8> + 40 + 8 + 8 + 8 + 8 + 8);
                return v17;
            }
        }
    }
    if (cwd_n_used != 0 || cwd_n_used > v26)
    {
        rsp<8> = rsp<8> - 8;
        v6 = &g_40aa75;
        set_normal_color();
        v26 += 1;
        rsp<8> = rsp<8> - 8;
        v5 = &g_40aa89;
        print_long_format();
        rsp<8> = rsp<8> - 8;
        v4 = &g_40aa95;
    }
    if (cwd_n_used != 0 || cwd_n_used > v26)
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
        v26 += 1;
    }
    if (cwd_n_used != 0)
    {
        if (cwd_n_used <= v26)
        {
            v25 = v9;
            v33 = v10;
            v34 = v11;
            v40 = v12;
            v42 = v13;
            return dired_outbyte();
        }
        if (cwd_n_used <= v26)
        {
            v27 = *(rsp<8> + 40);
            v30 = *(rsp<8> + 40 + 8 + 8);
            v36 = *(rsp<8> + 40 + 8 + 8 + 8);
            v41 = *(rsp<8> + 40 + 8 + 8 + 8 + 8);
            v45 = *(rsp<8> + 40 + 8 + 8 + 8 + 8 + 8);
            return v17;
        }
    }
    v27 = *(rsp<8> + 40);
    v30 = *(rsp<8> + 40 + 8 + 8);
    v36 = *(rsp<8> + 40 + 8 + 8 + 8);
    v41 = *(rsp<8> + 40 + 8 + 8 + 8 + 8);
    v45 = *(rsp<8> + 40 + 8 + 8 + 8 + 8 + 8);
    return v17;
    v27 = *(rsp<8> + 40);
    v30 = *(rsp<8> + 40 + 8 + 8);
    v36 = *(rsp<8> + 40 + 8 + 8 + 8);
    v41 = *(rsp<8> + 40 + 8 + 8 + 8 + 8);
    v45 = *(rsp<8> + 40 + 8 + 8 + 8 + 8 + 8);
    return v17;
    if (v26 < cwd_n_used || line_length != 0 && cwd_n_used > 1)
    {
        v29 = ((long long)((0 CONCAT v26) % v5 >> 64));
        v26 += 1;
        rsp<8> = rsp<8> - 8;
        v2 = &g_40a9f4;
        print_file_name_and_frills();
        rsp<8> = rsp<8> - 8;
        v1 = &g_40a9fc;
        v43 = (long long)length_of_file_name_and_frills();
        v31 = *(v38->field_10 + v29 * 8);
    }
    if (((long long)((0 CONCAT v26) % v5 >> 64)) == 0)
    {
        if (v26 < cwd_n_used || line_length != 0)
        {
            if (v26 < cwd_n_used || cwd_n_used > 1)
            {
                v22 = *(stdout + 40);
                if (*(stdout + 40) < *(stdout + 48))
                {
                    v35 = 0;
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v22) = eolbyte;
                    /* goto 4237786; */
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v3 = &g_40ac75;
                    __overflow();
                    v35 = 0;
                    /* goto 4237786; */
                }
            }
        }
    }
    if (((long long)((0 CONCAT v26) % v5 >> 64)) != 0 && (v26 < cwd_n_used || line_length != 0) && (v26 < cwd_n_used || cwd_n_used > 1))
    {
        v31 += v35;
        v35 = v31;
        rsp<8> = rsp<8> - 8;
        v3 = &g_40aa39;
        indent();
        /* goto 4237786; */
    }
    if (*((long long *)(((char *)&v7) + -24)) != v3 || v17 != 0 && line_length != 0)
    {
        v35 = v8;
        v31 = 0;
        v38 = 0;
    }
    v7 = *(sorted_file + v35 * 8);
    rsp<8> = rsp<8> - 8;
    v5 = &g_40aba7;
    v26 = (long long)length_of_file_name_and_frills();
    v29 = *(v43->field_10 + v31);
    v31 += 8;
    rsp<8> = rsp<8> - 8;
    v4 = &g_40abc3;
    print_file_name_and_frills();
    v35 += *((long long *)(((char *)&v7) + -24));
    if (v35 < cwd_n_used)
    {
        v29 += v38;
        v38 = v29;
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
            v0 = &g_40ac6d;
            __overflow();
        }
        v3 += 1;
        if (*((long long *)(((char *)&v7) + -24)) == v3)
        {
            v27 = *(rsp<8> + 40);
            v30 = *(rsp<8> + 40 + 8 + 8);
            v36 = *(rsp<8> + 40 + 8 + 8 + 8);
            v41 = *(rsp<8> + 40 + 8 + 8 + 8 + 8);
            v45 = *(rsp<8> + 40 + 8 + 8 + 8 + 8 + 8);
            return v17;
        }
    }
}
