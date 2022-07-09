typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_4170d8;

int set_file_security_ctx()
{
    char v1[53];  // rdx
    struct_0 *v2;  // rbp
    unsigned long long v3;  // r12

    v2 = __errno_location();
    if (v1[49] == 0)
    {
        v2->field_0 = 95;
        v3 = (long long)quotearg_n_style();
        error(0x0, v2->field_0, dcgettext(0x0, &g_4170d8, 0x5));
        return 0;
    }
    else if (v1[52] != 0)
    {
        v2->field_0 = 95;
        v3 = (long long)quotearg_n_style();
        error(0x0, v2->field_0, dcgettext(0x0, &g_4170d8, 0x5));
        return 0;
    }
    else
    {
        v2->field_0 = 95;
        return 0;
    }
}
