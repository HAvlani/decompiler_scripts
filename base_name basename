int base_name()
{
    char v0;  // [bp+0x0]
    char *v2;  // rax
    unsigned long|void * v3;  // rax
    char * v4;  // rbp
    void *v5;  // rdi
    char * v6;  // r12

    v3 = last_component();
    if (v0 != 0)
    {
        v4 = v3;
        v3 = (long long)base_len() + ((long long)(*(v4 + (long long)base_len()) == 47));
        v6 = v3;
        v2 = memcpy((long long)ximalloc(), v4, v6);
        *(v2 + v6) = 0;
        return v2;
    }
    v4 = v5;
    v6 = (long long)base_len();
    v2 = memcpy((long long)ximalloc(), v4, v6);
    *(v2 + v6) = 0;
    return v2;
}
