int decode_line_length()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v3 = xstrtoumax();
    if (v3 != 0)
    {
        v2 = 0 - ((long long)(v3 != 1));
        return v2;
    }
    v2 = (((char)(v0 - 0 >> 63 ^ 1))? v0 : 0);
    return v2;
}
