typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int sm3_stream()
{
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v7;  // rbp
    struct_0 *v8;  // rdi
    unsigned long|unsigned long long v9;  // r12

    if (v9 != 0)
    {
        v9 = malloc(0x8048);
        sm3_init_ctx();
        while (true)
        {
            v7 = 0;
            while (true)
            {
                v3 = fread_unlocked(v9 + v7, 0x1, 0x8000 - v7, v8);
                v7 += v3;
                if (v7 != 0x8000)
                {
                    if (v3 == 0 && (((char)v8->field_0) & 32) != 0)
                    {
                        rpl_free();
                        v4 = 1;
                        return v4;
                    }
                    if ((((char)v8->field_0) & 32) == 0 && v3 == 0 || v3 != 0 && (((char)v8->field_0) & 16) != 0)
                    {
                        if (v7 == 0)
                        {
                            sm3_finish_ctx();
                            rpl_free();
                            v4 = 0;
                            return v4;
                        }
                        sm3_process_bytes();
                        sm3_finish_ctx();
                        rpl_free();
                        v4 = 0;
                        return v4;
                    }
                }
                sm3_process_block();
            }
        }
    }
    else
    {
        v4 = 1;
        return v4;
    }
}
