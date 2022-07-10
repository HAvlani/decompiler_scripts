int mb_width_aux()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rax
    unsigned int v3;  // edi

    v1 = wcwidth();
    if (((int)v1) >= 0)
    {
        return v1;
    }
    v2 = ((long long)(iswcntrl(v3) == 0));
    return v2;
}
