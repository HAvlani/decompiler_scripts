int elseek()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edx
    unsigned long long v3;  // rbp
    unsigned long long v4;  // r12
    unsigned long long v5;  // r14

    v4 = lseek();
    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
    {
        v1 = v4;
        return v1;
    }
    v3 = (long long)offtostr();
    v5 = (long long)quotearg_n_style_colon();
    error(0x0, *(__errno_location()), dcgettext(0x0, ((int)(v2 != 0? "%s: cannot seek to relative offset %s" : "%s: cannot seek to offset %s")), 0x5));
    v1 = v4;
    return v1;
}
