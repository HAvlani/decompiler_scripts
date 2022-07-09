int clean_state_log_if_needed()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rsi
    unsigned long long v3[25];  // rdi
    unsigned long long v4;  // r12

    v4 = v3[24];
    if (v3[8] <= v2)
    {
        if (v3[8] < v3[11])
        {
            v1 = extend_buffers();
            if (((int)v1) != 0)
            {
                return v1;
            }
        }
    }
    if (v3[8] > v2 || v3[8] >= v3[11])
    {
        if (v3[6] <= v2)
        {
            if (v3[6] < v3[11])
            {
                v1 = extend_buffers();
                if (((int)v1) != 0)
                {
                    return v1;
                }
            }
        }
    }
    if (((int)v1) == 0 && v3[8] > v2 || ((int)v1) == 0 && v3[8] >= v3[11] || ((int)v1) == 0 && v3[8] <= v2 && v3[8] < v3[11] || v3[8] > v2 && v3[6] >= v3[11] || v3[8] > v2 && v3[6] > v2 || v3[6] >= v3[11] && v3[8] >= v3[11] || v3[8] >= v3[11] && v3[6] > v2)
    {
        if (v3[24] >= v2)
        {
            v1 = 0;
            return v1;
        }
        memset(v3[23] + v4 * 8 + 8, 0x0, (v2 - v4) * 8);
        v3[24] = v2;
        v1 = 0;
        return v1;
    }
}
