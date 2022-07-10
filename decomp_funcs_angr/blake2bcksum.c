int blake2b()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v4;  // rcx
    unsigned long v5;  // rdx
    unsigned long v6;  // rsi
    unsigned long v7;  // rdi
    unsigned long v8;  // r8
    unsigned long v9;  // r9

    if (!(((long long)(((char)(v4 != 0)) & ((char)(v5 == 0)))) == 0))
    {
        v2 = -1;
        return v2;
    }
    else if (v7 != 0)
    {
        if (v8 == 0)
        {
            if (v9 != 0)
            {
                v2 = -1;
                return v2;
            }
        }
        if (v9 == 0 || v8 != 0)
        {
            if (!(v6 - 1 <= 63))
            {
                v2 = -1;
                return v2;
            }
            else if (v9 <= 64)
            {
                if (v9 == 0)
                {
                    v1 = blake2b_init();
                    if (v1 < 0)
                    {
                        v2 = -1;
                        return v2;
                    }
                }
                v1 = blake2b_init_key();
                if (v1 < 0)
                {
                    v2 = -1;
                    return v2;
                }
                if (v9 == 0 && v1 >= 0 || v1 >= 0 && v9 != 0)
                {
                    if (v4 != 0)
                    {
                        blake2b_update.part.0();
                        blake2b_final();
                        v2 = 0;
                        return v2;
                    }
                    blake2b_final();
                    v2 = 0;
                    return v2;
                }
            }
            else
            {
                v2 = -1;
                return v2;
            }
        }
    }
    else
    {
        v2 = -1;
        return v2;
    }
}
