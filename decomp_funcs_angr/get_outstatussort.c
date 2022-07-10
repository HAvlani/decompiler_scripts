extern unsigned int outstat.8884;
extern unsigned int outstat_errno.8883;

int get_outstatus()
{
    unsigned long long|unsigned int v1;  // eax
    unsigned long long v2;  // r8

    if (outstat_errno.8883 != 0)
    {
        v2 = 0;
        if (outstat_errno.8883 < 0)
        {
            v2 = &outstat.8884;
            return v2;
        }
        return v2;
    }
    v1 = __fxstat(0x1, 0x1, &outstat.8884);
    if (v1 == 0)
    {
        outstat_errno.8883 = -1;
        return &outstat.8884;
    }
    else
    {
        v1 = ((int)*(__errno_location()));
        outstat_errno.8883 = v1;
        if (outstat_errno.8883 < 0)
        {
            return &outstat.8884;
        }
        else
        {
            return &outstat.8884;
        }
    }
}
