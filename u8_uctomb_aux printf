int u8_uctomb_aux()
{
    BOT tmp_38;  // tmp #38
    BOT tmp_37;  // tmp #37
    BOT tmp_18;  // tmp #18
    BOT tmp_12;  // tmp #12
    unsigned long v1;  // rdx
    unsigned long v2;  // rsi
    char v3[4];  // rdi
    unsigned long long v4;  // r8

    if (!(((int)v2) > 127))
    {
        v4 = -2;
        return v4;
    }
    else if (((int)v2) > 2047)
    {
        if (((int)v2) <= 65535)
        {
            if (((int)(v2 - 0xd800)) > 2047)
            {
                if (v1 > 2)
                {
                    v4 = 3;
                }
                else
                {
                    v4 = -2;
                    return v4;
                }
            }
            else
            {
                v4 = -1;
                return v4;
            }
        }
        else
        {
            if (((int)v2) <= 1114111)
            {
                if (v1 > 3)
                {
                    v4 = 4;
                    tmp_38 = ((long long)(((int)v2) & 63));
                    v2 = ((long long)(((int)v2) % 64 | 0x10000));
                    v3[3] = ((char)(((int)tmp_38) | -128));
                }
                else
                {
                    v4 = -2;
                    return v4;
                }
            }
            else
            {
                v4 = -1;
                return v4;
            }
        }
        if ((((int)v2) <= 65535 || ((int)v2) <= 1114111) && (((int)v2) <= 65535 || v1 > 3) && (((int)v2) > 65535 || v1 > 2) && (((int)v2) > 65535 || ((int)(v2 - 0xd800)) > 2047))
        {
            tmp_37 = ((long long)(((int)v2) & 63));
            v2 = ((long long)(((int)v2) % 64 | 0x800));
            v3[2] = ((char)(((int)tmp_37) | -128));
            tmp_18 = ((long long)v2);
            v2 = v2 % 64;
            tmp_12 = v2;
            v3[0] = tmp_12 | 192;
            v3[1] = ((char)(((int)tmp_18) & 63 | -128));
            return v4;
        }
    }
    else if (v1 > 1)
    {
        v4 = 2;
        tmp_18 = ((long long)v2);
        v2 = v2 % 64;
        tmp_12 = v2;
        v3[0] = tmp_12 | 192;
        v3[1] = ((char)(((int)tmp_18) & 63 | -128));
        return v4;
    }
    else
    {
        v4 = -2;
        return v4;
    }
}
