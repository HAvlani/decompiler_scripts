typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned long long columns;
extern unsigned int g_411004;
extern unsigned int g_41100b;
extern struct_1 header_mode;
extern struct_1 human_output_opts;
extern struct_0 ncolumns;
extern struct_0 nrows;
extern struct_0 output_block_size;
extern struct_0 table;

int get_header()
{
    BOT tmp_59;  // tmp #59
    unsigned long long v0;  // [bp-0x2d0]
    unsigned long v1;  // [bp-0x30]
    unsigned long|unsigned long long v10;  // rdi
    unsigned long|unsigned int v11;  // r8d
    unsigned long long v13;  // r12
    struct struct_1 **|unsigned long long v14;  // r13
    unsigned long long|char * v15;  // r14
    unsigned long v16;  // cc_dep1
    unsigned long v17;  // cc_dep2
    struct_0 *v18;  // fs
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx
    char|unsigned long|unsigned long long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rsi

    alloc_table_row();
    v7 = columns;
    if (ncolumns != 0)
    {
        v8 = 0;
        while (true)
        {
            v13 = v8 * 8;
            v0 = 0;
            v14 = v7 + v8 * 8;
            v15 = dcgettext(0x0, ((int)*(*(v7 + v8 * 8) + 24)), 0x5);
            if (v14[0]->field_0 == 2)
            {
                v11 = ((int)human_output_opts);
                if (header_mode == 4 && ((long long)(((char)human_output_opts) & 16)) == 0 && header_mode != 0)
                {
                    /* goto 4215992; */
                }
                if (header_mode == 4)
                {
                    v11 = ((long long)human_output_opts);
                }
                if (header_mode == 3)
                {
                    v14 = (long long)umaxtostr();
                    /* goto 4215900; */
                }
                if ((header_mode == 4 || header_mode == 0) && (((long long)(((char)human_output_opts) & 16)) == 0 || header_mode == 0))
                {
                    v10 = output_block_size;
                    v9 = output_block_size;
                    do
                    {
                        tmp_59 = v10;
                        v10 = v10 % 0x400;
                        v5 = ((long long)(((int)tmp_59) & 1023));
                        v6 = v9 - (((long long)(v9 % 8 * 2361183241434822607 >> 64)) >> 4) * 1000;
                        v9 = ((long long)(v9 % 8 * 2361183241434822607 >> 64)) >> 4;
                    }
                    while ((v6 | ((long long)(((int)tmp_59) & 1023))) == 0);
                    v16 = ((long long)(v6 == 0));
                    v17 = ((long long)(v5 == 0));
                    if (((long long)(v6 == 0)) < ((long long)(v5 == 0)))
                    {
                        v7 = ((char)(reg_80<4> & 292)) | 184;
                    }
                    else
                    {
                        v7 = ((char)columns) | 152;
                    }
                    v14 = (long long)human_readable();
                    v15 = dcgettext(0x0, &g_411004, 0x5);
                }
                if ((header_mode == 4 || header_mode == 3 || header_mode == 0) && (((long long)(((char)human_output_opts) & 16)) == 0 || header_mode == 0 || header_mode != 4))
                {
                    dcgettext(0x0, &g_41100b, 0x5);
                    v4 = rpl_asprintf();
                    if (v4 == -1)
                    {
                        v0 = 0;
                    }
                    v10 = v0;
                }
            }
            if (v14[0]->field_0 != 2 || header_mode == 4 && ((long long)(((char)human_output_opts) & 16)) != 0 && header_mode != 0 || header_mode != 4 && header_mode != 3 && header_mode != 0)
            {
                v4 = strdup(dcgettext(0x0, &g_411004, 0x5));
                v0 = v4;
                v10 = v4;
            }
            if (rdi<8> != 0)
            {
                replace_problematic_chars();
                *(*(table + nrows * 8 + 8) + v13) = v0;
                v8 += 1;
                *(*(columns + v13) + 32) = ((long long)gnu_mbswidth() <= *(*(columns + v13) + 32)? *(*(columns + v13) + 32) : rax<8>);
                break;
            }
            else
            {
                xalloc_die(); /* do not return */
            }
        }
        return v1 ^ *(v18 + 0x28);
    }
    return v1 ^ *(v18 + 0x28);
}
