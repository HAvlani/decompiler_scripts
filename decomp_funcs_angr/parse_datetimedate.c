int parse_datetime()
{
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r12

    v4 = 0;
    v3 = getenv("TZ");
    tzalloc();
    if (&stack_base+0 != 0)
    {
        v4 = (long long)parse_datetime_body();
        tzfree();
        v2 = v4;
        return v2;
    }
    v2 = v4;
    return v2;
}
