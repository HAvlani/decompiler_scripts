extern char keep_FF;
extern char print_a_FF;

int read_rest_of_line()
{
    unsigned long long v1;  // rax
    char *v2;  // rax
    char *v3;  // rax
    unsigned long long v4[3];  // rbp
    unsigned long long *v5[3];  // rdi
    unsigned long v6;  // rdi

    v4 = v5[0];
    while (true)
    {
        v3 = v4[1];
        if (v4[1] < v4[2])
        {
            v4[1] = v5[0][1] + 1;
            v1 = ((long long)*(v3));
            if (*(v5[0][1]) == 10)
            {
                return v1;
            }
        }
        v1 = __uflow(((int)v4));
        if (((int)v1) == 10)
        {
            return v1;
        }
        if (v4[1] < v4[2] && *(v5[0][1]) != 10 || v4[1] >= v4[2] && ((int)v1) != 10)
        {
            if (((int)v1) != 12)
            {
            }
            else
            {
                v2 = v4[1];
                if (v4[1] < v4[2])
                {
                    v4[1] = v5[0][1] + 1;
                    v6 = ((long long)*(v2));
                    break;
                }
                else
                {
                    v6 = __uflow(((int)v4));
                    break;
                }
            }
        }
    }
    if (!(((int)v6) == 10))
    {
        ungetc(v6, v4);
        if (keep_FF == 0)
        {
        }
        else
        {
            print_a_FF = 1;
        }
    }
    else if (keep_FF != 0)
    {
        print_a_FF = 1;
    }
}
