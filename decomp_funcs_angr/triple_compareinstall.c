int triple_compare()
{
    unsigned long long v1[3];  // rsi
    unsigned long long v2[3];  // rdi

    if (v2[1] != v1[1])
    {
        return 0;
    }
    else if (v2[2] != v1[2])
    {
        return 0;
    }
}
