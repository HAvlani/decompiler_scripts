int mpn_base_power_of_two_p()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rdi

    if (((int)v2) <= 32)
    {
        v1 = 0;
        if (((int)v2) > 1)
        {
            switch (((int)v2))
            {
            case 2:
                return 1;
            case 4:
                return 2;
            case 8:
                return 3;
            case 16:
                return 4;
            case 32:
                return 5;
            default:
                return 0;
            }
            return 0;
        }
        return v1;
    }
    v1 = 7;
    if (!(((int)v2) != 128))
    {
        return v1;
    }
    else if (((int)v2) == 0x100)
    {
        v1 = 8;
        return v1;
    }
    else
    {
        return ((long long)(((int)v2) == 64? 6 : 0));
    }
}
