typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int map_device.isra.0()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    unsigned long long [2] v5;  // rbx
    unsigned long long *v6[2];  // rsi

    v5 = v6[0];
    if (!(v6[0] != 0))
    {
        v6[0] = v6[0];
        v5 = malloc(0x10);
        if (v5 == 0)
        {
            v1 = 0;
            return v1;
        }
    }
    else if (v6[0][0] == v4)
    {
        return v6[0][1];
    }
    if (v6[0] == 0 && v5 != 0 || v6[0][0] != v4 && v6[0] != 0)
    {
        v5[0] = v4;
        v2 = hash_insert();
        if (!(v2 != 0))
        {
            v1 = 0;
            return v1;
        }
        else if (v5 != v2)
        {
            v1 = v2->field_8;
            v5[1] = v1;
            return v1;
        }
        else
        {
            v6[0] = 0;
            v3 = hash_initialize();
            v5[1] = v3;
            return v3;
        }
    }
}
