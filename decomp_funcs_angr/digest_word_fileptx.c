typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int digest_word_file()
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    struct_0 *v10;  // fs
    unsigned long v2;  // [bp-0x30]
    char * v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned long long v7[3];  // rsi
    unsigned long long v8;  // rdi
    unsigned long long v9[3];  // r12

    v9 = v7;
    swallow_file_in_memory.isra.0();
    v6 = v0;
    v8 = 0;
    v7[0] = 0;
    v9[1] = 0;
    v9[2] = 0;
    if (v0 < v1)
    {
        while (true)
        {
            v5 = v6;
            while (*(v5) != 10)
            {
                v5 += 1;
                if (v5 >= v1)
                {
                    break;
                }
            }
            if (v5 > v6)
            {
                if (v9[1] == 0)
                {
                    v9[0] = 0;
                    v8 = (long long)x2nrealloc();
                }
                *(0 * 16 + v8) = v6;
                *(0 * 16 + v8 + 8) = v5 - v6;
                v9[2] = 1;
            }
            if (v1 <= v5)
            {
                qsort();
                return v2 ^ *(v10 + 0x28);
            }
            v6 = v5 + 1;
            qsort();
            break;
        }
        return v2 ^ *(v10 + 0x28);
    }
    qsort();
    return v2 ^ *(v10 + 0x28);
}
