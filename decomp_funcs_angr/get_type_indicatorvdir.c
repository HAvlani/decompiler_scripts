extern struct_0 indicator_style;

int get_type_indicator()
{
    unsigned long|unsigned int v1;  // rax
    char v2;  // al
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned int v5;  // ecx
    unsigned int v6;  // edx
    unsigned int v7;  // esi
    unsigned int v8;  // esi
    char v9;  // dil

    if (!(((long long)v9) != 0))
    {
        v1 = 0;
        if (v6 == 5)
        {
            return v1;
        }
        v4 = ((long long)(v5 | 0));
    }
    else if ((((short)v7) & 0xf000) == 0x8000)
    {
        v1 = 0;
        if (indicator_style != 3)
        {
            return v1;
        }
        v8 = ((int)(v7 & 73));
        return ((long long)(!(0 - ((int)(reg_64<4> < 1))) & 42));
    }
    else
    {
        v4 = ((char)((v7 & 0xf000) == 0x4000));
        /* goto 4225789; */
    }
    if (((long long)v9) == 0 && v6 != 5 || ((long long)v9) != 0 && (((short)v7) & 0xf000) != 0x8000)
    {
        v1 = 47;
        if (((long long)v4) != 0)
        {
            return v1;
        }
        v1 = 0;
        if (indicator_style == 1)
        {
            return v1;
        }
        else if (((long long)v9) != 0)
        {
            v7 = ((int)(v7 & 0xf000));
            if (v7 != 0xa000)
            {
                v1 = 124;
                if (v7 != 0x1000)
                {
                    v2 = ((char)(v7 == 0xc000));
                    v3 = ((long long)(0 - reg_16<4> & 61));
                    return v3;
                }
                else
                {
                    return 124;
                }
            }
            else
            {
                return 64;
            }
        }
        else if (v6 != 6)
        {
            v1 = 124;
            if (v6 != 1)
            {
                v2 = ((char)(v6 == 7));
                v3 = ((long long)(0 - reg_16<4> & 61));
                return v3;
            }
            else
            {
                return 124;
            }
        }
        else
        {
            return 64;
        }
    }
}
