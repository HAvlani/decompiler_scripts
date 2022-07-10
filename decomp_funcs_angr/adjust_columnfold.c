extern char count_bytes;

int adjust_column()
{
    unsigned long long v1;  // rax
    char v2;  // sil
    unsigned long v3;  // rdi
    unsigned long v4;  // rdi
    unsigned long v5;  // rdi

    if (!(count_bytes == 0))
    {
        v1 = v4 + 1;
        return v1;
    }
    else if (v2 != 8)
    {
        v1 = 0;
        if (!(v2 != 13))
        {
            return v1;
        }
        else if (v2 != 9)
        {
            v1 = v4 + 1;
            return v1;
        }
        else
        {
            return (v5 & 18446744069414584312) + 8;
        }
    }
    else
    {
        return (v3 == 0? 0 : v3 - 1);
    }
}
