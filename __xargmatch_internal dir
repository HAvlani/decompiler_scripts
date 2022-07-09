int __xargmatch_internal()
{
    unsigned long v0;  // [bp+0x8]
    unsigned long long v1;  // rax

    if (((char)v0) != 0)
    {
        v1 = argmatch();
    }
    else
    {
        v1 = argmatch_exact();
    }
    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
    {
        return v1;
    }
    argmatch_invalid();
    argmatch_valid();
    r9<8>();
    v1 = 18446744069414584319;
    return v1;
}
