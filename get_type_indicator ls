extern struct_0 indicator_style;

int get_type_indicator()
{
    char v1;  // al
    unsigned long long v2;  // rax
    unsigned long long|unsigned int v3;  // rax
    unsigned int v4;  // ecx
    unsigned long long v5;  // cl
    unsigned int v6;  // edx
    unsigned int v7;  // esi
    unsigned int v8;  // esi
    char v9;  // dil

    if (!(((long long)v9) != 0))
    {
        v3 = 0;
        if (v6 == 5)
        {
            return v3;
        }
        v5 = ((long long)(v4 | 0));
    }
    else if ((((short)v8) & 0xf000) == 0x8000)
    {
        v3 = 0;
        if (indicator_style != 3)
        {
            return v3;
        }
        v7 = ((int)(v8 & 73));
        return ((long long)(!(0 - ((int)(reg_64<4> < 1))) & 42));
    }
    else
    {
        v5 = ((char)((v8 & 0xf000) == 0x4000));
        /* goto 4225789; */
    }
    if (((long long)v9) == 0 && v6 != 5 || ((long long)v9) != 0 && (((short)v8) & 0xf000) != 0x8000)
    {
        v3 = 47;
        if (((long long)v5) != 0)
        {
            return v3;
        }
        v3 = 0;
        if (indicator_style == 1)
        {
            return v3;
        }
        else if (((long long)v9) != 0)
        {
            v8 = ((int)(v8 & 0xf000));
            if (v8 != 0xa000)
            {
                v3 = 124;
                if (v8 != 0x1000)
                {
                    v1 = ((char)(v8 == 0xc000));
                    v2 = ((long long)(0 - reg_16<4> & 61));
                    return v2;
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
            v3 = 124;
            if (v6 != 1)
            {
                v1 = ((char)(v6 == 7));
                v2 = ((long long)(0 - reg_16<4> & 61));
                return v2;
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
