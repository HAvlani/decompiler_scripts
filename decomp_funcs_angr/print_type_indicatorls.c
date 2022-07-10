int print_type_indicator()
{
    unsigned long long v1;  // rax

    v1 = get_type_indicator();
    if (((long long)v1) == 0)
    {
        return v1;
    }
    return (long long)dired_outbyte();
}
