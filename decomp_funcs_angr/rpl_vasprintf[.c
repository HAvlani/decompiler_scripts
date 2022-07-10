typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int rpl_vasprintf()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    struct_0 *v5;  // rdi

    v3 = vasnprintf();
    if (!(v3 != 0))
    {
        v4 = -1;
        return v4;
    }
    else if (v0 <= 2147483647)
    {
        v5->field_0 = v3;
        v4 = v0;
        return v4;
    }
    else
    {
        rpl_free();
        *(__errno_location() + None) = 75;
        v4 = -1;
        return v4;
    }
}
