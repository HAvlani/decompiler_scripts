int base_len()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    char *v3;  // rdi

    v1 = strlen(v3);
    while (true)
    {
        if (v1 > 1)
        {
            v2 = v1 - 1;
            if (*(v3 + v1 + 1) != 47)
            {
                return v1;
            }
            v1 = v2;
        }
        else
        {
            return v1;
        }
    }
}
