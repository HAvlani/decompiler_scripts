typedef struct struct_1 {
    char padding_0[1];
    char field_1;
} struct_1;

extern unsigned int g_40a028;

int find_int()
{
    BOT tmp_12;  // tmp #12
    unsigned long long v1;  // rax
    unsigned long long v11;  // cc_dep1
    struct_1 * v2;  // rax
    unsigned long long v4;  // rcx
    char [2]|char * v5;  // rdx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rbp
    char *v8;  // rsi
    char * v9;  // r8

    v8 = *(__ctype_b_loc());
    while (true)
    {
        v6 = ((long long)*(r8<8>));
        v1 = ((long long)*(r8<8>));
        if (((long long)(*(v8 + (((long long)*(r8<8>)) << 1)) & 1)) == 0)
        {
            break;
        }
        v9 = r8<8> + 1;
    }
    if (v6 != 43)
    {
        v5 = ((long long)(v1 == 45)) + v9;
    }
    else
    {
        v5 = v9 + 1;
        v9 += 1;
    }
    v2 = v5 + 1;
    if (((int)v5[0]) - 48 <= 9)
    {
        v5 = ((long long)v5[1]);
        if (((int)v5) - 48 <= 9)
        {
            do
            {
                tmp_12 = ((long long)v2->field_1);
                v2 += 1;
                v5 = tmp_12;
            }
            while (((int)tmp_12) - 48 <= 9);
        }
        if (((long long)(*(v8 + (((long long)v5) << 1)) & 1)) != 0)
        {
            do
            {
                v4 = ((long long)*(rax<8> + 1));
                v2 = rax<8> + 1;
                v5 = v4;
                v11 = ((long long)(*(v8 + v5 * 2) & 1));
            }
            while (((char)v11) != 0);
        }
        if (((long long)v5) == 0)
        {
            return v9;
        }
        v7 = (long long)quote();
        dcgettext(0x0, &g_40a028, 0x5);
        test_syntax_error(); /* do not return */
    }
    v7 = (long long)quote();
    dcgettext(0x0, &g_40a028, 0x5);
    test_syntax_error(); /* do not return */
}
