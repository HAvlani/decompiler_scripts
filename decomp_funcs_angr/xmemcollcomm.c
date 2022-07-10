typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xmemcoll()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    if (*(__errno_location()) == 0)
    {
        v2 = (long long)memcoll();
        return v2;
    }
    collate_error();
    return v1;
}
