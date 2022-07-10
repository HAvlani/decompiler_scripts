int triple_compare_ino_str()
{
    char v1;  // al
    unsigned long long v2;  // rax
    unsigned long long v3[3];  // rsi
    char *v4;  // rsi
    unsigned long long v5[3];  // rdi
    char *v6;  // rdi

    if (v5[1] != v3[1])
    {
        return 0;
    }
    else if (v5[2] != v3[2])
    {
        return 0;
    }
    else
    {
        v4 = v3[0];
        v6 = v5[0];
        v2 = strcmp(v6, v4);
        v1 = ((char)(((int)v2) == 0));
        return rax<8>;
    }
}
