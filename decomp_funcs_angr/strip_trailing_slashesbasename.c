int strip_trailing_slashes()
{
    BOT tmp_19;  // tmp #19
    char *v1;  // rax
    char v2;  // al
    char *v3;  // rbx
    unsigned long v4;  // rdi

    v3 = (*(last_component()) == 0? v4 : (long long)last_component());
    v1 = base_len();
    tmp_19 = ((long long)*(v3 + v1));
    *(v3 + v1) = 0;
    v2 = ((char)(((char)tmp_19) != 0));
    return rax<8>;
}
