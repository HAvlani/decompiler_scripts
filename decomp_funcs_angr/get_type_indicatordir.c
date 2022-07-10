extern struct_0 indicator_style;

int get_type_indicator()
{
    char v1;  // al
    unsigned long long|unsigned int v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // cl
    unsigned int v5;  // ecx
    unsigned int v6;  // edx
    unsigned int v7;  // esi
    unsigned int v8;  // esi
    char v9;  // dil

    if (!(((long long)v9) != 0))
    {
        v2 = 0;
        if (v6 == 5)
        {
            return v2;
        }
        v4 = ((long long)(v5 | 0));
    }
    else if ((((short)v8) & 0xf000) == 0x8000)
    {
        v2 = 0;
        if (indicator_style != 3)
        {
            return v2;
        }
        v7 = ((int)(v8 & 73));
        return ((long long)(!(0 - ((int)(reg_64<4> < 1))) & 42));
    }
    else
    {
        v4 = ((char)((v8 & 0xf000) == 0x4000));
        /* goto 4225789; */
    }
    if (((long long)v9) == 0 && v6 != 5 || (((short)v8) & 0xf000) != 0x8000 && ((long long)v9) != 0)
    {
        v2 = 47;
        if (((long long)v4) != 0)
        {
            return v2;
        }
        v2 = 0;
        if (indicator_style == 1)
        {
            return v2;
        }
        else if (((long long)v9) != 0)
        {
            v8 = ((int)(v8 & 0xf000));
            if (v8 != 0xa000)
            {
                v2 = 124;
                if (v8 != 0x1000)
                {
                    v1 = ((char)(v8 == 0xc000));
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
            v2 = 124;
            if (v6 != 1)
            {
                v1 = ((char)(v6 == 7));
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
