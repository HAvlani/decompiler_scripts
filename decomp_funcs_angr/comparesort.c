extern char hard_LC_COLLATE;
extern struct_0 keylist;
extern char reverse;
extern char stable;
extern char unique;

int compare()
{
    unsigned long long v1;  // rax
    unsigned long long v2[2];  // rbx
    void *|unsigned long long [2] v3;  // rsi
    unsigned long|void * v4;  // rdi
    unsigned long long v5;  // r13
    unsigned long long v6;  // r15

    v2 = v4;
    if (keylist != 0)
    {
        v1 = keycompare();
        if (!(((int)v1) == 0))
        {
            return v1;
        }
        else if (!(unique == 0))
        {
            return v1;
        }
        else if (stable != 0)
        {
            return v1;
        }
    }
    if (keylist == 0 || stable == 0 && unique == 0 && ((int)v1) == 0)
    {
        v5 = v3[1] - 1;
        v6 = v2[1] - 1;
        if (v3[1] - 1 != 0)
        {
            v3 = v3[0];
            v4 = v2[0];
            if (hard_LC_COLLATE == 0)
            {
                v1 = memcmp(v4, v3, (v6 <= v5? v6 : v5));
            }
            xmemcoll0();
        }
        if (reverse != 0)
        {
            v1 = ((long long)(0 - ((int)v1)));
            return v1;
        }
        return v1;
    }
}
