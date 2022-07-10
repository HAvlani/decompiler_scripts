extern unsigned int in_column;
extern struct_0 next_prefix_indent;
extern char prefix[2];
extern struct_0 prefix_lead_space;
extern struct_0 prefix_length;

int get_prefix()
{
    BOT tmp_6;  // tmp #6
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    char *v3;  // rax
    unsigned long|unsigned int v4;  // rdx
    char [2]|unsigned long long v5;  // rbx
    unsigned long long v6[3];  // rbp
    unsigned long long v7;  // rsi
    unsigned long long v8[3];  // rdi

    v6 = v8;
    v2 = v8[1];
    in_column = 0;
    if (v2 < v8[2])
    {
        v8[1] = v8[1] + 1;
    }
    else
    {
        v7 = __uflow();
    }
    v1 = get_space();
    if (prefix_length == 0)
    {
        next_prefix_indent = (in_column <= prefix_lead_space? in_column : prefix_lead_space);
        return v1;
    }
    v5 = prefix;
    next_prefix_indent = in_column;
    v4 = ((int)*(prefix));
    if (((long long)*(prefix)) == 0)
    {
    }
    else
    {
        while (true)
        {
            if (((int)v1) != v4)
            {
                return v1;
            }
            else
            {
                in_column = in_column + 1;
                v3 = v6[1];
                if (v6[1] < v6[2])
                {
                    v6[1] = v8[1] + 1;
                    v1 = ((long long)*(v3));
                }
                else
                {
                    v1 = __uflow();
                }
                v4 = ((long long)v5[1]);
                v5 += 1;
                tmp_6 = v4;
            }
        }
    }
}
