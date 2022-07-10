extern struct_0 output_position;
extern struct_0 spaces_not_printed;
extern unsigned long long stdout[7];
extern char tabify_output;

int print_char()
{
    unsigned long long v1;  // rax
    char *v2;  // rax
    unsigned long long v4;  // rax
    char v5;  // dil
    unsigned long long v6;  // cc_dep1

    if (!(tabify_output != 0))
    {
        v2 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v2) = v5;
            return v2;
        }
    }
    else if (v5 != 32)
    {
        if (spaces_not_printed > 0)
        {
            print_white_space();
        }
        v1 = *(__ctype_b_loc());
        v6 = ((long long)(*(v1 + ((long long)v5) * 2 + 1) & 64));
        if (!(((char)v6) == 0))
        {
            output_position = output_position + 1;
            v2 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v2) = v5;
                return v2;
            }
        }
        else if (v5 == 8)
        {
            output_position = output_position - 1;
            v2 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v2) = v5;
                return v2;
            }
        }
        else
        {
            v2 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v2) = v5;
                return v2;
            }
        }
    }
    else
    {
        v4 = ((long long)(((int)spaces_not_printed) + 1));
        spaces_not_printed = ((int)(spaces_not_printed + 1));
        return v4;
    }
}
