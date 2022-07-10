int triple_compare_ino_str()
{
    unsigned long long v1;  // rax
    char v2;  // al
    unsigned long long v3[3];  // rsi
    char *v4;  // rsi
    char *v5;  // rdi
    unsigned long long v6[3];  // rdi

    if (v6[1] != v3[1])
    {
        return 0;
    }
    else if (v6[2] != v3[2])
    {
        return 0;
    }
    else
    {
        v4 = v3[0];
        v5 = v6[0];
        v1 = strcmp(v5, v4);
        v2 = ((char)(((int)v1) == 0));
        return rax<8>;
    }
}
