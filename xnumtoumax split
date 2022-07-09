typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xnumtoumax()
{
    unsigned long v0;  // [bp-0x48]
    unsigned long|unsigned int v1;  // [bp+0x8]
    unsigned long v3;  // rcx
    unsigned long v4;  // rdx
    unsigned int v5;  // ebx
    unsigned long long v6;  // r8
    struct_0 * v7;  // r12

    if (v5 == 0)
    {
        if (v0 >= v4)
        {
            if (v0 <= v3)
            {
                return v0;
            }
        }
        if (v0 < v4 || v0 > v3)
        {
            v7 = __errno_location();
            if (v0 <= 1073741823)
            {
                v7->field_0 = 34;
            }
        }
    }
    else
    {
        v5 = xstrtoumax();
        v7 = __errno_location();
        if (v5 != 1)
        {
            if (v5 == 3)
            {
                v7->field_0 = 0;
            }
        }
    }
    if (v0 < v4 || v0 > v3 || v5 != 0)
    {
        if ((v5 == 0 || v5 == 1) && (v0 > 1073741823 || v5 != 0))
        {
            v7->field_0 = 75;
        }
        v6 = (long long)quote();
        if (((int)v1) == 0)
        {
            v1 = 1;
            error(0x1, 0x0, "%s: %s");
        }
        else
        {
            error(0x1, 0x0, "%s: %s");
        }
    }
}
