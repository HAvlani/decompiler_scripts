extern struct_0 buff;
extern struct_0 buff_allocated;
extern struct_1 buff_current;

int store_char()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rdi

    v3 = v4;
    if (((long long)buff_current) < buff_allocated)
    {
        *(buff + ((long long)buff_current)) = ((char)v4);
        buff_current = buff_current + 1;
        return ((long long)buff_current);
    }
    v2 = x2realloc();
    buff = v2;
    v1 = ((long long)buff_current);
    *(v2 + ((long long)buff_current)) = v3;
    buff_current = buff_current + 1;
    return v1;
}
