typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[16];
    unsigned long long field_28;
    unsigned int field_30;
    char padding_34[116];
    unsigned int field_a8;
    unsigned int field_ac;
    char padding_b0[8];
    char field_b8;
    char field_b9;
    char padding_ba[6];
    char field_c0;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

extern struct_1 color_ext_list;
extern <missing-type> color_indicator;
extern char color_symlink_as_referent;
extern unsigned int filetype_indicator.11567[4];
extern struct_1 line_length;
extern char print_with_color;

int print_name_with_quoting()
{
    unsigned long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v10;  // rbp
    unsigned long long|char v11;  // rsi
    struct_0 *v12;  // rdi
    unsigned long long v13;  // r12
    struct_0 *v14;  // r12
    char *|unsigned long long v15;  // r13
    unsigned long long|unsigned int v3;  // rax
    unsigned long long v4;  // rax
    struct_2 *|unsigned long|unsigned long long|char v7;  // rcx
    unsigned long|unsigned long long|unsigned int v8;  // rdx
    unsigned long long [5] v9;  // rbx

    v14 = v12;
    v10 = v7;
    if (((long long)v11) != 0)
    {
        v15 = v12->field_8;
        if (((long long)print_with_color) == 0)
        {
            v0 = v12->field_10;
            v13 = (long long)quote_name();
            process_signals();
            v4 = v13;
            return v4;
        }
        v11 = ((long long)v12->field_ac);
        if (v12->field_b9 == 0)
        {
            v3 = is_colored();
            v8 = -1;
            if (((long long)v3) != 0)
            {
                /* goto 4229998; */
            }
        }
        else
        {
            v7 = ((long long)v14->field_b8);
            v8 = 0;
        }
    }
    else
    {
        v15 = v12->field_0;
        if (((long long)print_with_color) == 0)
        {
            v0 = v12->field_10;
            v13 = (long long)quote_name();
            process_signals();
            v4 = v13;
            return v4;
        }
        v8 = ((int)v12->field_b9);
        if (color_symlink_as_referent != 0)
        {
            if (((long long)v12->field_b9) != 0)
            {
                v11 = ((long long)v12->field_ac);
                /* goto 4229892; */
            }
        }
        if (((long long)v12->field_b9) == 0 || color_symlink_as_referent == 0)
        {
            v11 = ((long long)v12->field_30);
        }
    }
    if (((long long)print_with_color) != 0)
    {
        if ((v12->field_b9 == 0 || ((long long)v11) == 0) && (((long long)v3) == 0 || ((long long)v11) == 0))
        {
            v7 = ((long long)v14->field_b8);
        }
        if (v12->field_b9 != 0 || ((long long)v14->field_b8) != 0)
        {
            if (((long long)v14->field_b8) != 0 || ((long long)v11) != 0)
            {
                if (v12->field_b9 == 0 || ((long long)v11) == 0 || ((long long)v14->field_b8) != 0)
                {
                    if (((long long)v3) == 0 || ((long long)v11) == 0 || v12->field_b9 != 0)
                    {
                        v3 = ((int)(((int)v11) & 0xf000));
                        if ((((short)((int)v11)) & 0xf000) != 0x8000)
                        {
                            if (v3 != 0x4000)
                            {
                                if (v3 != 0xa000)
                                {
                                    if (v3 != 0x1000)
                                    {
                                        if (v3 != 0xc000)
                                        {
                                            if (v3 != 0x6000)
                                            {
                                                /* goto 4229998; */
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                if ((((short)((int)v11)) & 514) == 514)
                                {
                                    v3 = is_colored();
                                }
                                if (((long long)v3) == 0 || (((short)((int)v11)) & 514) != 514)
                                {
                                    if (((long long)(v11 & 2)) != 0)
                                    {
                                        v3 = is_colored();
                                    }
                                    if (((long long)(v11 & 2)) == 0 || ((long long)v3) == 0)
                                    {
                                        if ((((short)((int)v11)) & 0x200) != 0)
                                        {
                                            is_colored();
                                            /* goto 4229998; */
                                        }
                                    }
                                }
                            }
                        }
                        else if ((((short)((int)v11)) & 0x800) != 0)
                        {
                            v3 = is_colored();
                            if (((long long)v3) != 0)
                            {
                                /* goto 4229998; */
                            }
                        }
                    }
                }
            }
        }
        if ((((long long)v14->field_b8) == 0 || v12->field_b9 != 0) && (((long long)v14->field_b8) == 0 || ((long long)v11) != 0) && (v12->field_b9 == 0 || ((long long)v11) == 0 || ((long long)v14->field_b8) == 0) && (((long long)v3) == 0 || ((long long)v11) == 0 || v12->field_b9 != 0))
        {
            v7 = ((char)(filetype_indicator.11567[((long long)v12->field_a8)] == 7));
        }
    }
    if (...)
    {
        if ((((short)((int)v11)) & 0x400) != 0)
        {
            v3 = is_colored();
            if (((long long)v3) != 0)
            {
                /* goto 4229998; */
            }
        }
    }
    if (...)
    {
        if (v8 == 0)
        {
            if (((long long)v7) != 0)
            {
                if (color_symlink_as_referent == 0)
                {
                    is_colored();
                    /* goto 4229998; */
                }
            }
        }
        if (((long long)v7) == 0 || v8 != 0)
        {
            /* goto 4229998; */
        }
    }
    if (...)
    {
        v3 = is_colored();
        if (((long long)v3) != 0)
        {
            if (v14->field_c0 != 0)
            {
                /* goto 4229998; */
            }
        }
    }
    if (...)
    {
        if ((((char)v11) & 73) != 0)
        {
            v3 = is_colored();
            if (((long long)v3) != 0)
            {
                /* goto 4229998; */
            }
        }
    }
    if (...)
    {
        if (v14->field_28 > 1)
        {
            v3 = is_colored();
            if (((long long)v3) != 0)
            {
                /* goto 4229998; */
            }
        }
    }
    if (...)
    {
        v9 = color_ext_list;
        v7 = strlen(v15);
        if (color_ext_list != 0)
        {
            while (true)
            {
                if (v7 >= v9[0])
                {
                    v1 = v7;
                    v3 = c_strncasecmp();
                    v7 = v1;
                    if (v3 == 0)
                    {
                        v7 = v9 + 16;
                        break;
                    }
                }
                if (v7 < v9[0] || v3 != 0)
                {
                    v9 = v9[4];
                }
            }
        }
    }
    if (...)
    {
        v7 = rcx<8> + &color_indicator;
        if (v7->field_8 == 0)
        {
            v3 = is_colored();
            if (((long long)v3) == 0)
            {
                v0 = v12->field_10;
                v13 = (long long)quote_name();
                process_signals();
                v4 = v13;
                return v4;
            }
        }
        if (((long long)v3) != 0 || v7->field_8 != 0)
        {
            v0 = v14->field_10;
            v13 = (long long)quote_name();
            process_signals();
            prep_non_filename_text();
            v7 = line_length;
            if (line_length == 0)
            {
                v4 = v13;
                return v4;
            }
            else if (((long long)((0 CONCAT v10) % v7)) == ((long long)((0 CONCAT v13 + v10 - 1) % v7)))
            {
                v4 = v13;
                return v4;
            }
            else
            {
                put_indicator.isra.0();
                v4 = v13;
                return v4;
            }
        }
    }
}
