extern struct_0 stderr;

int print_rel_part.part.0()
{
    BOT tmp_24;  // tmp #24
    unsigned int v1;  // edx
    unsigned int v2;  // esi
    unsigned int v3;  // edi
    unsigned long long v4;  // rdi

    v4 = ((long long)(v3 ^ 1));
    tmp_24 = v4;
    __fprintf_chk(((int)stderr), 0x1, ((int)(" %+ld %s" + ((long long)tmp_24))), v2, v1);
    return 1;
}
