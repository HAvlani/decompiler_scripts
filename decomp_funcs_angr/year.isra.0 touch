typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int year.isra.0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned int v3;  // ecx
    unsigned long v4;  // rdx
    struct_0 *|unsigned int [2] v5;  // rsi
    struct_0 * v6;  // rdi

    if (!(v4 != 1))
    {
        v2 = 1;
        v6->field_0 = v5->field_0;
        if (v5->field_0 > 68)
        {
            return v2;
        }
        if ((((char)v3) & 8) == 0)
        {
            v6->field_0 = ((int)(v5->field_0 + 100));
            return v2;
        }
        else
        {
            v2 = 0;
            return v2;
        }
    }
    else if (v4 != 2)
    {
        v0 = time(NULL);
        v2 = localtime(((int)&v0));
        if (v2 != 0)
        {
            v6->field_0 = *(v2 + 20);
            v2 = 1;
            return v2;
        }
        return v2;
    }
    else if ((((char)v3) & 2) != 0)
    {
        v6->field_0 = v5[0] * 100 + v5[1] - 1900;
        v2 = 1;
        return v2;
    }
    else
    {
        v2 = 0;
        return v2;
    }
}
