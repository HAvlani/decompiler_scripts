extern struct_0 chars_per_output_tab;
extern struct_0 output_position;
extern char output_tab_char;
extern unsigned int spaces_not_printed;
extern unsigned long long stdout[7];

int print_white_space()
{
    char * v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long|unsigned int v3;  // rbx
    unsigned long v4;  // rsi

    if (spaces_not_printed > 1)
    {
        v3 = v4 + ((long long)(chars_per_output_tab - ((int)((v4 >> 31 CONCAT ((int)v4)) % chars_per_output_tab >> 32))));
        if (spaces_not_printed < chars_per_output_tab - ((int)((v4 >> 31 CONCAT ((int)v4)) % chars_per_output_tab >> 32)))
        {
        }
        else
        {
            while (true)
            {
                v1 = *(stdout + 40);
                if (*(stdout + 40) < *(stdout + 48))
                {
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v1) = output_tab_char;
                    if (((int)(((long long)(spaces_not_printed + output_position)) - v3)) <= 1)
                    {
                        break;
                    }
                }
                else
                {
                    __overflow();
                    if (((int)(((long long)(spaces_not_printed + output_position)) - v3)) <= 1)
                    {
                        break;
                    }
                }
                if (((int)(((long long)(spaces_not_printed + output_position)) - v3)) > 1)
                {
                    v2 = ((long long)(chars_per_output_tab - ((int)((((int)v3) >> 31 CONCAT ((int)v3)) % chars_per_output_tab >> 32)) + ((int)v3)));
                    if (((int)(spaces_not_printed + output_position)) < chars_per_output_tab - ((int)((((int)v3) >> 31 CONCAT ((int)v3)) % chars_per_output_tab >> 32)) + ((int)v3))
                    {
                        break;
                    }
                    v3 = v2;
                }
            }
        }
    }
    if (spaces_not_printed <= 1 || spaces_not_printed < chars_per_output_tab - ((int)((v4 >> 31 CONCAT ((int)v4)) % chars_per_output_tab >> 32)))
    {
        v3 = output_position;
    }
    v3 = ((int)((unsigned int)v3)) + 1;
    if (((int)output_position) >= v3)
    {
        do
        {
            v1 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v1) = 32;
            }
            else
            {
                __overflow();
            }
            v3 = ((long long)((unsigned int)v3)) + 1;
        }
        while (((int)v3) != ((int)(((long long)output_position) + 1)));
        output_position = spaces_not_printed + output_position;
        spaces_not_printed = 0;
        return v1;
    }
    output_position = spaces_not_printed + output_position;
    spaces_not_printed = 0;
    return v1;
}
