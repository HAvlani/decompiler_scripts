typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int hash_get_entries()
{
    unsigned long long v1;  // rax
    unsigned long long [2] v2;  // rcx
    unsigned long v3;  // rdx
    unsigned long v4;  // rsi
    unsigned long long v5[2];  // rdi
    struct_0 * v6;  // r9

    v6 = v5[0];
    v1 = 0;
    if (v5[1] > v5[0])
    {
        do
        {
            if (v6->field_0 != 0)
            {
                v2 = v6;
                while (true)
                {
                    if (v3 > v1)
                    {
                        v1 += 1;
                        *(v4 + v1 * 8 + 8) = v2[0];
                        v2 = v2[1];
                        return v1;
                    }
                }
            }
            v6 += 16;
        }
        while (v5[1] > v6);
        return v1;
    }
    return v1;
}
