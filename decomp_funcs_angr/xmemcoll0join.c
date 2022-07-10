typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xmemcoll0()
{
    unsigned long long v1;  // rax
    unsigned long long v3;  // rax

    if (*(__errno_location()) == 0)
    {
        v1 = (long long)memcoll0();
        return v1;
    }
    collate_error();
    return v3;
}
