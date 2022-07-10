int mode_type_flag()
{
    unsigned long v1;  // rsi
    unsigned long v2;  // rsi
    unsigned long v3;  // rsi
    unsigned long v4;  // rsi
    unsigned long v5;  // rdi

    switch (((int)v5))
    {
    case 0:
        return v1 + 8;
    case 1:
        return v3;
    case 2:
        return v2 + 4;
    case 3:
        return v4 + 12;
    case 4:
        return 0;
    }
}
