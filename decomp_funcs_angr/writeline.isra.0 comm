extern char both;
extern struct_0 col_sep;
extern struct_0 col_sep_len;
extern char only_file_1;
extern char only_file_2;

int writeline.isra.0()
{
    unsigned long v1;  // rax
    unsigned int v3;  // ecx
    void *v4;  // rdx

    if (v3 != 2)
    {
        if (v3 == 3)
        {
            if (both != 0)
            {
                if (only_file_1 != 0)
                {
                    fwrite_unlocked(col_sep, 0x1, col_sep_len, v4);
                }
                if (only_file_2 == 0)
                {
                }
                else
                {
                    fwrite_unlocked(col_sep, 0x1, col_sep_len, v4);
                }
            }
            else
            {
                return v1;
            }
        }
        else
        {
            if (only_file_1 != 0)
            {
            }
            else
            {
                return v1;
            }
        }
    }
    else
    {
        if (only_file_2 == 0)
        {
            return v1;
        }
        else
        {
            fwrite_unlocked(col_sep, 0x1, col_sep_len, v4);
        }
    }
}
