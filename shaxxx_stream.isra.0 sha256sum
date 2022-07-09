int shaxxx_stream.isra.0()
{
    unsigned long v0;  // [bp-0x100]
    char v1;  // [bp-0xf8]
    unsigned long long v10;  // rbp
    unsigned long long|void * v11;  // rdi
    unsigned long|unsigned long long v12;  // r12
    char *v13;  // r13
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax
    unsigned long v9;  // rcx

    v13 = v11;
    v0 = v9;
    if (v12 != 0)
    {
        v12 = malloc(0x8048);
        v11 = &v1;
        rdx<8>();
        while (true)
        {
            v10 = 0;
            while (true)
            {
                if (((long long)(*(v13) & 16)) == 0)
                {
                    v4 = fread_unlocked(v12 + v10, 0x1, 0x8000 - v10, v13);
                    v10 += v4;
                    if (v10 == 0x8000)
                    {
                        sha256_process_block();
                    }
                    else if (v4 == 0)
                    {
                        if (((long long)(*(v13) & 32)) != 0)
                        {
                            rpl_free();
                            v8 = 1;
                            return v8;
                        }
                    }
                }
                if (((long long)(*(v13) & 16)) != 0 || v4 == 0 && ((long long)(*(v13) & 32)) == 0 && v10 != 0x8000)
                {
                    if (v10 == 0)
                    {
                        v11 = &v1;
                        *(&stack_base-256)();
                        rpl_free();
                        v8 = 0;
                        return v8;
                    }
                    sha256_process_bytes();
                    v11 = &v1;
                    *(&stack_base-256)();
                    rpl_free();
                    v8 = 0;
                    return v8;
                }
            }
        }
    }
    v8 = 1;
    return v8;
}
