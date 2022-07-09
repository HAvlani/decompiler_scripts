typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int try_nocreate()
{
    char v0;  // [bp-0xa8]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax
    unsigned int v4;  // edx
    unsigned int v5;  // ebx
    unsigned int v6;  // edi

    v5 = __lxstat(0x1, v6, ((int)&v0));
    v3 = __errno_location();
    if (v5 != 0)
    {
        v4 = ((int)v3->field_0);
        if (v3->field_0 != 75)
        {
            v2 = ((long long)(0 - ((int)(v4 != 2))));
            return v2;
        }
        v3->field_0 = 17;
        v2 = -1;
        return v2;
    }
    v3->field_0 = 17;
    v2 = -1;
    return v2;
}
