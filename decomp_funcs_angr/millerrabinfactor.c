int millerrabin()
{
    BOT tmp_15;  // tmp #15
    BOT tmp_38;  // tmp #38
    unsigned long long v1;  // rax
    unsigned int v2;  // rbx
    unsigned int v3;  // rsi
    unsigned long long v4;  // rdi
    char|unsigned long long|unsigned int v5;  // r8
    unsigned long|unsigned long long v6;  // r9
    unsigned long v7;  // r11
    unsigned long long v8;  // r12

    v8 = v6;
    ((unsigned int)v2) = ((unsigned int)v3);
    v1 = powm();
    v4 = v7 - v8;
    v5 = ((char)(v8 == v1)) | ((char)(v1 == v7 - v8));
    if (!(((long long)(((char)(v8 == v1)) | ((char)(v1 == v7 - v8)))) == 0))
    {
        return v5;
    }
    else if (v5 > 1)
    {
        v3 = 1;
        while (true)
        {
            tmp_15 = ((long long)((v1 * v1 >> 64) - ((((unsigned int)v2) * ((long long)(v1 * v1))) * v7 >> 64)));
            v6 = ((long long)((v1 * v1 >> 64) - ((((unsigned int)v2) * ((long long)(v1 * v1))) * v7 >> 64))) + v7;
            tmp_38 = ((long long)(v1 * v1 >> 64)) < ((long long)((((unsigned int)v2) * ((long long)(v1 * v1))) * v7 >> 64));
            v1 = (((long long)(v1 * v1 >> 64)) < ((long long)((((unsigned int)v2) * ((long long)(v1 * v1))) * v7 >> 64))? ((long long)((v1 * v1 >> 64) - ((((unsigned int)v2) * ((long long)(v1 * v1))) * v7 >> 64))) + v7 : ((long long)((v1 * v1 >> 64) - ((((unsigned int)v2) * ((long long)(v1 * v1))) * v7 >> 64))));
            if (v4 != (tmp_38? v6 : tmp_15))
            {
                if (v8 == v1)
                {
                    break;
                }
                if (v8 != v1)
                {
                    ((unsigned int)v3) = ((long long)((unsigned int)v3)) + 1;
                    if (v5 == ((int)((unsigned int)v3)))
                    {
                        break;
                    }
                    return v5;
                }
                return v5;
            }
            v5 = 1;
            break;
        }
        return v5;
    }
    else
    {
        return v5;
    }
}
