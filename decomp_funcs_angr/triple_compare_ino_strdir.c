int triple_compare_ino_str()
{
    char v1;  // al
    unsigned long long v2;  // rax
    char *v3;  // rsi
    unsigned long long v4[3];  // rsi
    unsigned long long v5[3];  // rdi
    char *v6;  // rdi

    if (v5[1] != v4[1])
    {
        return 0;
    }
    else if (v5[2] != v4[2])
    {
        return 0;
    }
    else
    {
        v3 = v4[0];
        v6 = v5[0];
        v2 = strcmp(v6, v3);
        v1 = ((char)(((int)v2) == 0));
        return rax<8>;
    }
}
