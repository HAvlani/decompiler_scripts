typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xlseek()
{
    unsigned int v2;  // edx
    struct_0 *v3;  // rbp
    unsigned int v4;  // esi
    unsigned long long v5;  // r12
    unsigned long long v6;  // r13

    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
    {
        return lseek();
    }
    v6 = (long long)offtostr();
    v3 = __errno_location();
    if (v2 != 1)
    {
        v5 = (long long)quotearg_n_style_colon();
        error(0x0, v3->field_0, dcgettext(0x0, v4, 0x5));
        exit(0x1); /* do not return */
    }
    else
    {
        v5 = (long long)quotearg_n_style_colon();
        error(0x0, v3->field_0, dcgettext(0x0, v4, 0x5));
        exit(0x1); /* do not return */
    }
}
