extern char line_buf;
extern struct_0 line_num_print;
extern char *line_num_start;

int next_line_num()
{
    BOT tmp_12;  // tmp #12
    unsigned long long v1;  // rax
    char [2] v2;  // rax
    unsigned long long v3;  // rcx
    char * v4;  // rdx
    unsigned long long v5;  // rdx
    unsigned int v6;  // edx

    v3 = line_num_start;
    v2 = "0\t";
    while (true)
    {
        v6 = ((int)v2[0]);
        if (!(((char)(((long long)v2[0]) <= 56))))
        {
            v2 -= 1;
            v2[1] = 48;
            if (line_num_start > "                 0\t")
            {
                v4 = v3 - 1;
                *(v3 + 1) = 49;
                line_num_start = v3 - 1;
                break;
            }
            else
            {
                line_buf = 62;
                v4 = line_num_start;
                break;
            }
        }
        else
        {
            v5 = ((long long)v6) + 1;
            tmp_12 = v5;
            v2[0] = tmp_12;
            return v2;
        }
    }
    v1 = line_num_print;
    if (line_num_print > v4)
    {
        v1 = line_num_print - 1;
        line_num_print = line_num_print - 1;
        return v1;
    }
    return v1;
}
