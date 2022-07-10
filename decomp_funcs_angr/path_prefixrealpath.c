typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

int path_prefix()
{
    BOT tmp_9;  // tmp #9
    BOT tmp_3;  // tmp #3
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    struct_0 * v3;  // rcx
    char * v4;  // rdx
    unsigned long long v5;  // rdx
    unsigned long|unsigned long long v6;  // rsi
    char v7[3];  // rdi

    v1 = ((long long)v7[1]);
    v3 = v7 + 1;
    v4 = v6 + 1;
    if (((long long)v7[1]) != 0)
    {
        if (v7[1] == 47)
        {
            if (v7[2] == 0)
            {
                return ((long long)v7[1]);
            }
        }
        if (v7[2] != 0 || v7[1] != 47)
        {
            while (true)
            {
                v6 = ((long long)*(v4));
                if (((long long)*(v4)) == 0)
                {
                    return 0;
                }
                else if (v6 == v1)
                {
                    v1 = ((long long)v3->field_1);
                    v3 += 1;
                    v4 += 1;
                    tmp_9 = v1;
                    v5 = ((long long)*(v4));
                    tmp_3 = v5;
                    v2 = ((long long)(((int)v1) | ((int)(((long long)tmp_3) == 0))));
                    return v2;
                }
                else
                {
                    return 0;
                }
            }
        }
    }
    return ((long long)v7[1]);
}
