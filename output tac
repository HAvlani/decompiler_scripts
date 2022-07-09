extern void buffer.7303;
extern unsigned long long bytes_in_buffer.7304;
extern struct_0 stdout;

int output()
{
    char v0;  // [bp-0x18]
    char v1;  // [bp-0x8]
    void *v10;  // rdi
    void * v11;  // rdi
    unsigned long long v12;  // r12
    void * v13;  // r14
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rsi
    unsigned long v9;  // rsi

    v5 = bytes_in_buffer.7304;
    v8 = v9 - v10;
    v7 = 0x2000 - bytes_in_buffer.7304;
    if (v10 != 0)
    {
        v13 = v10;
        v12 = v8;
        if (v8 >= 0x2000 - bytes_in_buffer.7304)
        {
            while (true)
            {
                v12 -= v7;
                memcpy(&buffer.7303 + v5, v13, v7);
                v13 += v7;
                v7 = 0x2000;
                fwrite_unlocked(&buffer.7303, 0x1, 0x2000, stdout);
                v5 = 0;
                bytes_in_buffer.7304 = 0;
                if (v12 <= 8191)
                {
                    break;
                }
            }
            v6 = v12;
            v11 = &buffer.7303;
            bytes_in_buffer.7304 = v6;
            return memcpy(v11, v1, v0);
        }
        v11 = v5 + &buffer.7303;
        v6 = v5 + v12;
        bytes_in_buffer.7304 = v6;
        return memcpy(v11, v1, v0);
    }
    bytes_in_buffer.7304 = 0;
    return fwrite_unlocked(&buffer.7303, 0x1, bytes_in_buffer.7304, stdout);
}
