int buffer_lcm()
{
    BOT tmp_5;  // tmp #5
    unsigned long long v1;  // rax
    unsigned long v2;  // rax
    unsigned long v3;  // rdx
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdi
    unsigned long v6;  // r8
    unsigned long long v7;  // r8

    if (v5 == 0)
    {
        v6 = ((v4 != 0? v4 : 0x2000) <= v3? (v4 != 0? v4 : 0x2000) : v3);
        return v6;
    }
    else if (v4 == 0)
    {
        v6 = ((v4 != 0? v4 : 0x2000) <= v3? (v4 != 0? v4 : 0x2000) : v3);
        return v6;
    }
    else
    {
        v7 = v4;
        for (v1 = v5; ((long long)((0 CONCAT v1) % v7 >> 64)) != 0; v7 = ((long long)(tmp_5 >> 64)))
        {
            v1 = v7;
        }
        v2 = ((long long)((0 CONCAT v5) % v7));
        v6 = ((long long)((0 CONCAT v5) % v7)) * v4;
        if (v6 > v3)
        {
            v6 = ((v4 != 0? v4 : 0x2000) <= v3? (v4 != 0? v4 : 0x2000) : v3);
            return v6;
        }
        else if (((long long)((0 CONCAT v6) % v4)) != v2)
        {
            v6 = ((v4 != 0? v4 : 0x2000) <= v3? (v4 != 0? v4 : 0x2000) : v3);
            return v6;
        }
        else
        {
            return v6;
        }
    }
}
