typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int try_nocreate()
{
    char v0;  // [bp-0xa8]
    struct_0 *v2;  // rax
    unsigned long long v3;  // rax
    unsigned int v4;  // edx
    unsigned int v5;  // ebx
    unsigned int v6;  // edi

    v5 = __lxstat(0x1, v6, ((int)&v0));
    v2 = __errno_location();
    if (v5 != 0)
    {
        v4 = ((int)v2->field_0);
        if (v2->field_0 != 75)
        {
            v3 = ((long long)(0 - ((int)(v4 != 2))));
            return v3;
        }
        v2->field_0 = 17;
        v3 = -1;
        return v3;
    }
    v2->field_0 = 17;
    v3 = -1;
    return v3;
}
