typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int rpl_vasprintf()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    struct_0 *v5;  // rdi

    v3 = vasnprintf();
    if (!(v3 != 0))
    {
        v2 = -1;
        return v2;
    }
    else if (v0 <= 2147483647)
    {
        v5->field_0 = v3;
        v2 = v0;
        return v2;
    }
    else
    {
        rpl_free();
        *(__errno_location() + None) = 75;
        v2 = -1;
        return v2;
    }
}
