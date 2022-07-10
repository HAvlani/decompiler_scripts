typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xmemcoll0()
{
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    if (*(__errno_location()) == 0)
    {
        v3 = (long long)memcoll0();
        return v3;
    }
    collate_error();
    return v2;
}
