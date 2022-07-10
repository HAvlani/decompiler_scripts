int mb_width_aux()
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax
    unsigned int v3;  // edi

    v2 = wcwidth();
    if (((int)v2) >= 0)
    {
        return v2;
    }
    v1 = ((long long)(iswcntrl(v3) == 0));
    return v1;
}
