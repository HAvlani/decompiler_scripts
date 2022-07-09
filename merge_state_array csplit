int merge_state_array()
{
    unsigned int v0;  // [bp-0x5c]
    unsigned long long v2;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // r13

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))))
    {
        v8 = v5;
        v6 = 0;
        while (true)
        {
            v5 = *(v8 + v6 * 8);
            if (*(v7 + (v6 << 3)) != 0)
            {
                if (v5 != 0)
                {
                    v2 = re_node_set_init_union();
                    v0 = ((int)v2);
                    if (((int)v2) == 0)
                    {
                        *(v7 + v6 * 8) = (long long)re_acquire_state();
                        rpl_free();
                        v2 = ((long long)v0);
                        if (v0 != 0)
                        {
                            return v2;
                        }
                    }
                    return v2;
                }
                if (v5 == 0 || v0 == 0 && ((int)v2) == 0)
                {
                    v6 += 1;
                    v2 = 0;
                    return v2;
                }
            }
            *(v7 + v6 * 8) = v5;
            v6 += 1;
            v2 = 0;
            return v2;
        }
    }
    v2 = 0;
    return v2;
}
