extern struct_1 chars_per_input_tab;
extern char clump_buff[4];
extern unsigned int g_40d06c;
extern unsigned int input_position;
extern char input_tab_char;
extern char untabify_input;
extern char use_cntrl_prefix;
extern char use_esc_sequence;

int char_to_clump()
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x24]
    unsigned int v10;  // rdx
    char [4] v11;  // rbx
    unsigned long|char v12;  // rdi
    unsigned long v13;  // r8
    unsigned int v14;  // r9d
    unsigned long long v15;  // cc_dep1
    char v2;  // [bp-0x23]
    char v3;  // [bp-0x22]
    char v4;  // [bp-0x20]
    char v5;  // [bp-0x18]
    unsigned long|unsigned long long|unsigned int v7;  // rax
    unsigned long long v8;  // rax
    unsigned long|unsigned long long|unsigned int v9;  // rcx

    v11 = clump_buff;
    if (!(input_tab_char != v12))
    {
        v9 = ((int)input_position);
        v7 = ((long long)(chars_per_input_tab - ((int)((input_position >> 31 CONCAT input_position) % chars_per_input_tab >> 32))));
        if (untabify_input != 0)
        {
            if (((int)(chars_per_input_tab - ((int)((input_position >> 31 CONCAT input_position) % chars_per_input_tab >> 32)))) != 0)
            {
                v13 = ((long long)(chars_per_input_tab - ((int)((input_position >> 31 CONCAT input_position) % chars_per_input_tab >> 32))));
                /* goto 4210294; */
            }
            else
            {
                input_position = v9;
                return v13;
            }
        }
    }
    else if (v12 != 9)
    {
        v7 = *(__ctype_b_loc());
        v15 = ((long long)(*(v7 + ((long long)v12) * 2 + 1) & 64));
        if (((char)v15) == 0)
        {
            if (use_esc_sequence == 0)
            {
                if (!(use_cntrl_prefix != 0))
                {
                    v9 = ((long long)input_position);
                    if (((char)v12) != 8)
                    {
                        *(clump_buff) = ((char)v12);
                        input_position = v9;
                        return v13;
                    }
                    *(clump_buff) = 8;
                    if (((int)input_position) == 0)
                    {
                        input_position = 0;
                        return v13;
                    }
                    else
                    {
                        v10 = 1;
                    }
                }
                else if (((char)v12) >= 0)
                {
                    v11[0] = 94;
                    v11[1] = ((char)(((int)v12) ^ 64));
                    input_position = v9;
                    return v13;
                }
            }
            if ((((char)v12) < 0 || use_esc_sequence != 0) && (use_esc_sequence != 0 || use_cntrl_prefix != 0))
            {
                *(clump_buff) = 92;
                __sprintf_chk(((int)&v1), 0x1, 0x4, &g_40d06c, ((int)v12), v14, v0, v4, v5);
                v11[1] = v1;
                v11[2] = v2;
                v11[3] = v3;
                input_position = v9;
                return v13;
            }
        }
        *(clump_buff) = ((char)v12);
        input_position = v9;
        return v13;
    }
    else
    {
        v9 = ((long long)input_position);
        v13 = ((long long)(((int)(((long long)input_position) >> 31 >> 29)) - (((int)(v9 + (((long long)input_position) >> 31 >> 29))) & 7))) + 8;
        v7 = ((int)(((long long)(((int)(((long long)input_position) >> 31 >> 29)) - (((int)(v9 + (((long long)input_position) >> 31 >> 29))) & 7))) + 8));
    }
    if (v12 == 9 || input_tab_char == v12)
    {
        if (untabify_input == 0)
        {
            *(clump_buff) = ((char)v12);
        }
        if (...)
        {
            v8 = clump_buff + v13 - 1 + 1;
            do
            {
                v11 += 1;
                v11[1] = 32;
            }
            while (v8 != v11);
            v7 = v13;
        }
        if (untabify_input == 0 || ((int)v13) < 0)
        {
            if (v7 < 0 || untabify_input != 0)
            {
                if (untabify_input == 0 || input_tab_char != v12 || ((int)(chars_per_input_tab - ((int)((input_position >> 31 CONCAT input_position) % chars_per_input_tab >> 32)))) != 0)
                {
                    if (v9 != 0)
                    {
                        ((unsigned int)v10) = ((long long)(0 - v7));
                    }
                    else
                    {
                        input_position = 0;
                        return v13;
                    }
                }
            }
        }
    }
    if (...)
    {
        if (((unsigned int)v10) >= v9)
        {
            input_position = 0;
            return v13;
        }
    }
    if (...)
    {
        input_position = v9;
        return v13;
    }
}
