typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int set_initialize()
{
    unsigned long long v1;  // rax
    char * v2;  // rdx
    char v3;  // sil
    struct_0 *v4;  // rdi

    v4->field_10 = 18446744069414584318;
    while (true)
    {
        v1 = get_next();
        if (((int)v1) == -1)
        {
            break;
        }
        *(v2 + ((long long)v1)) = 1;
    }
    if (((long long)v3) != 0)
    {
        v1 = v2 + 0x100;
        do
        {
            *(v2) = *(v2) ^ 1;
            v2 += 1;
        }
        while (v2 != v1);
        return v1;
    }
    return v1;
}
