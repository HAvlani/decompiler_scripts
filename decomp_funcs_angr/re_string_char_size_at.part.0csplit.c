int re_string_char_size_at.part.0()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rsi
    unsigned long long v3;  // rsi
    unsigned long long v4[7];  // rdi

    v3 = v2 + 1;
    if (v3 < v4[6])
    {
        v1 = 1;
        while (true)
        {
            if (*(v4[2] + (v3 << 2)) == -1)
            {
                v3 += 1;
                v1 = ((long long)(((int)v1) + 1));
                return v1;
            }
        }
        return v1;
    }
    return 1;
}
