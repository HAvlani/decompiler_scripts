typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int fdutimensat()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rax
    unsigned int v3;  // ecx
    unsigned long v4;  // rdx
    unsigned int v5;  // esi
    unsigned int v6;  // edi
    unsigned int v7;  // r8d

    if (!(v6 < 0))
    {
        v1 = futimens();
        if (((int)v1) == -1)
        {
            if (v4 != 0)
            {
                v2 = __errno_location();
                if (v2->field_0 != 38)
                {
                    return -1;
                }
            }
        }
    }
    else if (v4 == 0)
    {
        *(__errno_location() + None) = 9;
        return -1;
    }
    if ((v6 < 0 || ((int)v1) == -1) && (v6 < 0 || v2->field_0 == 38) && (v6 < 0 || v4 != 0) && (v4 != 0 || v6 >= 0))
    {
        v1 = utimensat(v5, ((int)v4), v3, v7);
    }
    if (v6 < 0 && v4 != 0 || v4 == 0 && v6 >= 0 || v2->field_0 == 38 && v6 >= 0 || v6 >= 0 && ((int)v1) != -1)
    {
        if (((int)v1) != 1)
        {
            return v1;
        }
        *(__errno_location() + None) = 9;
        return -1;
    }
}
