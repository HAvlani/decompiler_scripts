extern char *col_sep;
extern unsigned long long col_sep_len;
extern unsigned int g_407630;
extern struct_0 optarg;

int sub_402862()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    char * v4;  // rdi
    char v5;  // cc_dep1
    char v6;  // cc_dep2
    unsigned long v7;  // d

    if (col_sep_len != 0)
    {
        v1 = strcmp(col_sep, optarg);
        if (v1 != 0)
        {
            error(0x1, 0x0, dcgettext(0x0, &g_407630, 0x5));
        }
    }
    if (col_sep_len == 0 || v1 == 0)
    {
        v5 = ((char)*(col_sep));
        col_sep = optarg;
        v2 = 1;
        if (v5 != 0)
        {
            v3 = 18446744069414584319;
            v4 = col_sep;
            while (v3 != 0)
            {
                v3 -= 1;
                v6 = ((char)*(v4));
                v4 += v7;
                break;
            }
            v2 = !(rcx<8>) - 1;
            col_sep_len = v2;
        }
        else
        {
            col_sep_len = v2;
        }
    }
}
