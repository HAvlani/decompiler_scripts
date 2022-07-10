extern struct_0 dired_pos;
extern unsigned long long stdout[7];

int dired_outbyte()
{
    char *v1;  // rax
    char v2;  // dil

    dired_pos = dired_pos + 1;
    v1 = *(stdout + 40);
    if (*(stdout + 40) < *(stdout + 48))
    {
        *(stdout + 40) = *(stdout + 40) + 1;
        *(v1) = v2;
        return v1;
    }
}
