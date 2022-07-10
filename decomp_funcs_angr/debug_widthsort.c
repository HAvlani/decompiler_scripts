int debug_width()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rbx
    unsigned long v3;  // rsi
    unsigned long long v4;  // rdi

    v2 = v4;
    v1 = mbsnwidth();
    if (v3 > v4)
    {
        do
        {
            v2 += 1;
            v1 += ((long long)(*(v2 + 1) == 9));
        }
        while (v3 != v2);
        return v1;
    }
    return v1;
}
