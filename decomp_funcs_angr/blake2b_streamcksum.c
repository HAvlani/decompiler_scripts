int blake2b_stream()
{
    unsigned long v0;  // [bp-0x140]
    unsigned long|unsigned long long v10;  // r12
    unsigned long long v11;  // r14
    unsigned long long v2;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rbx
    unsigned long v8;  // rsi
    void * v9;  // rdi

    v0 = v8;
    if (v10 != 0)
    {
        v10 = malloc(0x8000);
        blake2b_init();
        while (true)
        {
            v11 = 0;
            while (true)
            {
                v5 = fread(v10 + v11, 0x1, 0x8000 - v11, v9);
                v11 += v5;
                if (v11 != 0x8000)
                {
                    v9 = v9;
                    if (v5 != 0)
                    {
                        v2 = feof(v9);
                    }
                    else
                    {
                        v2 = ferror();
                        v6 = -1;
                        if (v2 != 0)
                        {
                            rpl_free();
                            v4 = v6;
                            return v4;
                        }
                    }
                    if (v5 == 0 && v2 == 0 || v5 != 0 && v2 != 0)
                    {
                        if (v11 != 0)
                        {
                            blake2b_update();
                        }
                        v6 = 0;
                        blake2b_final();
                        rpl_free();
                        v4 = v6;
                        return v4;
                    }
                }
                blake2b_update();
            }
        }
    }
    else
    {
        v6 = -1;
        v4 = v6;
        return v4;
    }
}
