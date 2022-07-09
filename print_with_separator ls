extern struct_0 cwd_n_used;
extern char eolbyte;
extern struct_0 line_length;
extern unsigned long long stdout[7];

int print_with_separator()
{
    char v0;  // [bp-0x3d]
    unsigned int v1;  // [bp-0x3c]
    unsigned long long|unsigned int v10;  // r13
    char *|unsigned long long v3;  // rax
    char *v4;  // rax
    char *v5;  // rax
    unsigned int v6;  // rcx
    unsigned long long v8;  // rbx
    char v9;  // dil

    if (cwd_n_used != 0)
    {
        v10 = 0;
        v8 = 0;
        while (true)
        {
            if (line_length != 0)
            {
                v3 = length_of_file_name_and_frills();
                if (v8 != 0)
                {
                    ((unsigned int)v6) = v10 + v10 + 2;
                    if (line_length > v10 && 18446744069414584317 - v10 >= v10)
                    {
                        ((unsigned int)v10) = ((unsigned int)v6);
                        /* goto 4233520; */
                    }
                    if (line_length <= v10 || 18446744069414584317 - v10 < v10)
                    {
                        ((unsigned int)v6) = ((long long)eolbyte);
                        v10 = v3;
                        32 = ((long long)eolbyte);
                        /* goto 4233530; */
                    }
                }
                else
                {
                    v10 += v10;
                    /* goto 4233404; */
                }
            }
            else if (v8 != 0)
            {
                ((unsigned int)v10) = v10 + 2;
            }
            if (v8 != 0)
            {
                if ((line_length == 0 || line_length > v10) && (line_length == 0 || 18446744069414584317 - v10 >= v10))
                {
                    v6 = 32;
                }
                v4 = *(stdout + 40);
                if (*(stdout + 40) < *(stdout + 48))
                {
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v4) = v9;
                }
                else
                {
                    v1 = reg_24<4>;
                    v0 = dl<1>;
                    __overflow();
                    32 = ((long long)v0);
                }
                v3 = *(stdout + 40);
                if (*(stdout + 40) < *(stdout + 48))
                {
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v3) = 32;
                }
                else
                {
                    __overflow();
                }
            }
            v8 += 1;
            print_file_name_and_frills();
            if (cwd_n_used <= v8)
            {
                break;
            }
        }
        v5 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v5) = eolbyte;
            return v5;
        }
    }
    else
    {
        v5 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v5) = eolbyte;
            return v5;
        }
    }
}
