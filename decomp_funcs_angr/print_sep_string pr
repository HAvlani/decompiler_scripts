extern struct_0 col_sep_length;
extern struct_1 col_sep_string;
extern struct_0 output_position;
extern struct_0 separators_not_printed;
extern struct_0 spaces_not_printed;
extern unsigned long long stdout[7];

int print_sep_string()
{
    BOT tmp_6;  // tmp #6
    unsigned long long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rsi
    unsigned long|unsigned long long v12;  // r12
    unsigned long long v13;  // r12
    unsigned long long v14;  // r13
    unsigned long long v15;  // r13
    unsigned long long v16;  // r14
    unsigned long long v17;  // r14
    unsigned long long v18;  // r14
    unsigned long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    unsigned long long|unsigned int v6;  // rax
    char *v7;  // rax
    unsigned long long v8;  // rbx
    char *|unsigned long long v9;  // rbx

    v6 = ((long long)spaces_not_printed);
    if (separators_not_printed > 0)
    {
        v4 = v16;
        v17 = ((long long)col_sep_length);
        v3 = v15;
        v2 = v12;
        v1 = &stack_base+0;
        v10 = col_sep_string;
        v0 = v9;
        do
        {
            v12 = v17 - 1;
            v9 = v10;
            v15 = v10 + v17 - 1 + 1;
            if (((int)v17) <= 0)
            {
                v17 = v12;
            }
            else
            {
                while (true)
                {
                    v11 = ((long long)*(v9));
                    v9 += 1;
                    tmp_6 = v11;
                    if (tmp_6 != 32)
                    {
                        if (((unsigned int)v6) > 0)
                        {
                            print_white_space();
                            v11 = ((long long)*(v9 + 0x1));
                        }
                        v7 = *(stdout + 40);
                        if (*(stdout + 40) < *(stdout + 48))
                        {
                            *(stdout + 40) = *(stdout + 40) + 1;
                            *(v7) = v11;
                        }
                        else
                        {
                            __overflow();
                        }
                        output_position = output_position + 1;
                        v6 = ((long long)spaces_not_printed);
                        if (v15 == v9)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v6 = ((int)((unsigned int)v6)) + 1;
                        spaces_not_printed = v6;
                        if (v15 == v9)
                        {
                            break;
                        }
                    }
                }
                v10 = v10 + v17 + 1;
                v17 = -1;
            }
            if (reg_16<4> > 0)
            {
                print_white_space();
            }
            v6 = ((int)(separators_not_printed - 1));
            separators_not_printed = separators_not_printed - 1;
        }
        while (v6 > 0);
        v8 = v0;
        v13 = v2;
        v14 = v3;
        v18 = v4;
        return ((long long)(separators_not_printed - 1));
    }
    else if (((int)spaces_not_printed) <= 0)
    {
        return ((long long)spaces_not_printed);
    }
}
