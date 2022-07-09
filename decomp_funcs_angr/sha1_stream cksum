int sha1_stream()
{
    unsigned long long v1;  // rax
    unsigned long long v3;  // rax
    unsigned long long v7;  // rbp
    char *v8;  // rdi
    unsigned long|unsigned long long v9;  // r12

    if (v9 != 0)
    {
        v9 = malloc(0x8048);
        sha1_init_ctx();
        while (true)
        {
            v7 = 0;
            while (true)
            {
                if (((long long)(*(v8) & 16)) == 0)
                {
                    v1 = fread_unlocked(v9 + v7, 0x1, 0x8000 - v7, v8);
                    v7 += v1;
                    if (v7 == 0x8000)
                    {
                        sha1_process_block();
                    }
                    else if (v1 == 0)
                    {
                        if (((long long)(*(v8) & 32)) != 0)
                        {
                            rpl_free();
                            v3 = 1;
                            return v3;
                        }
                    }
                }
                if (((long long)(*(v8) & 16)) != 0 || ((long long)(*(v8) & 32)) == 0 && v1 == 0 && v7 != 0x8000)
                {
                    if (v7 == 0)
                    {
                        sha1_finish_ctx();
                        rpl_free();
                        v3 = 0;
                        return v3;
                    }
                    sha1_process_bytes();
                    sha1_finish_ctx();
                    rpl_free();
                    v3 = 0;
                    return v3;
                }
            }
        }
    }
    v3 = 1;
    return v3;
}
