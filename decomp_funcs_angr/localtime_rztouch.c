int localtime_rz()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rdx
    unsigned int v3;  // esi
    unsigned long v4;  // rdi
    unsigned long long v5;  // r13

    if (v4 != 0)
    {
        v5 = (long long)set_tz();
        if (v5 != 0)
        {
            v1 = localtime_r(v3, ((int)v2));
            if (v1 != 0)
            {
                v1 = save_abbr();
                if (((long long)v1) != 0)
                {
                    if (v5 == 1)
                    {
                        return v2;
                    }
                    v1 = revert_tz.part.0();
                    if (((long long)v1) != 0)
                    {
                        return v2;
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
            if (v1 == 0 || ((long long)v1) == 0)
            {
                if (v5 != 1)
                {
                    revert_tz.part.0();
                    return 0;
                }
                return 0;
            }
        }
        return 0;
    }
}
