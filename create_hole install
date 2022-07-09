int create_hole()
{
    unsigned long long v1;  // rax
    char v2;  // dl
    unsigned int v3;  // esi
    unsigned long long v4;  // r13

    v1 = lseek();
    if (!(!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))))
    {
        v4 = (long long)quotearg_style();
        error(0x0, *(__errno_location()), dcgettext(0x0, v3, 0x5));
        return 0;
    }
    else if (((long long)v2) == 0)
    {
        return 1;
    }
    else
    {
        v1 = punch_hole();
        if (v1 >= 0)
        {
            return 1;
        }
        v4 = (long long)quotearg_style();
        error(0x0, *(__errno_location()), dcgettext(0x0, v3, 0x5));
        return 0;
    }
}
