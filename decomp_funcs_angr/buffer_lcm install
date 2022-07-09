int buffer_lcm()
{
    BOT tmp_5;  // tmp #5
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdi
    unsigned long long v6;  // r8
    unsigned long v7;  // r8

    if (v5 == 0)
    {
        v7 = ((v4 != 0? v4 : 0x2000) <= v3? (v4 != 0? v4 : 0x2000) : v3);
        return v7;
    }
    else if (v4 == 0)
    {
        v7 = ((v4 != 0? v4 : 0x2000) <= v3? (v4 != 0? v4 : 0x2000) : v3);
        return v7;
    }
    else
    {
        v6 = v4;
        for (v1 = v5; ((long long)((0 CONCAT v1) % v6 >> 64)) != 0; v6 = ((long long)(tmp_5 >> 64)))
        {
            v1 = v6;
        }
        v2 = ((long long)((0 CONCAT v5) % v6));
        v7 = ((long long)((0 CONCAT v5) % v6)) * v4;
        if (v7 > v3)
        {
            v7 = ((v4 != 0? v4 : 0x2000) <= v3? (v4 != 0? v4 : 0x2000) : v3);
            return v7;
        }
        else if (((long long)((0 CONCAT v7) % v4)) != v2)
        {
            v7 = ((v4 != 0? v4 : 0x2000) <= v3? (v4 != 0? v4 : 0x2000) : v3);
            return v7;
        }
        else
        {
            return v7;
        }
    }
}
