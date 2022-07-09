typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int iclose.part.0()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rbx
    unsigned int v3;  // edi

    v2 = __errno_location();
    v1 = ((long long)v2->field_0);
    while (true)
    {
        if (v1 == 4)
        {
            v1 = close(v3);
            if (((int)v1) == 0)
            {
                break;
            }
            if (((int)v1) != 0)
            {
                v1 = ((int)v2->field_0);
                return 0;
            }
            return v1;
        }
    }
    v1 = -1;
    break;
    return v1;
}
