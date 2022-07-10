typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xmemcoll()
{
    unsigned long long v1;  // rax
    unsigned long long v3;  // rax

    if (*(__errno_location()) == 0)
    {
        v1 = (long long)memcoll();
        return v1;
    }
    collate_error();
    return v3;
}
