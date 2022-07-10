int md5_stream()
{
    unsigned long long v2;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rbp
    char *v8;  // rdi
    unsigned long|unsigned long long v9;  // r12

    if (v9 != 0)
    {
        v9 = malloc(0x8048);
        md5_init_ctx();
        while (true)
        {
            v7 = 0;
            while (true)
            {
                if (((long long)(*(v8) & 16)) == 0)
                {
                    v2 = fread_unlocked(v9 + v7, 0x1, 0x8000 - v7, v8);
                    v7 += v2;
                    if (v7 == 0x8000)
                    {
                        md5_process_block();
                    }
                    else if (v2 == 0)
                    {
                        if (((long long)(*(v8) & 32)) != 0)
                        {
                            rpl_free();
                            v6 = 1;
                            return v6;
                        }
                    }
                }
                if (((long long)(*(v8) & 16)) != 0 || ((long long)(*(v8) & 32)) == 0 && v2 == 0 && v7 != 0x8000)
                {
                    if (v7 == 0)
                    {
                        md5_finish_ctx();
                        rpl_free();
                        v6 = 0;
                        return v6;
                    }
                    md5_process_bytes();
                    md5_finish_ctx();
                    rpl_free();
                    v6 = 0;
                    return v6;
                }
            }
        }
    }
    v6 = 1;
    return v6;
}
